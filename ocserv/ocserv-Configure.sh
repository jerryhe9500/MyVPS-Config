#Install Essential Packages
apt-get update
apt-get upgrade
apt-get install build-essential libwrap0-dev libpam0g-dev libdbus-1-dev libreadline-dev libnl-route-3-dev libprotobuf-c0-dev libpcl1-dev libopts25-dev autogen libgnutls28 libgnutls28-dev libseccomp-dev gnutls-bin automake
#Install ocserv
cd 0.8.8
./configure
make
make install
cd ../
#Config ocserv
mkdir /etc/ocserv
cp ./Config/ocserv.conf /etc/ocserv
#Build Certs
cd CA
certtool --generate-privkey --outfile ca-key.pem
certtool --generate-self-signed --load-privkey ca-key.pem --template ca.tmpl --outfile ca-cert.pem
certtool --generate-privkey --outfile server-key.pem
certtool --generate-certificate --load-privkey server-key.pem --load-ca-certificate ca-cert.pem --load-ca-privkey ca-key.pem --template server.tmpl --outfile server-cert.pem
cp server-cert.pem /etc/ssl/certs
cp server-key.pem /etc/ssl/private
cd ../
#Creat Users
ocpasswd -c /root/AeroFS/ocpasswd jerryhe9500
#Config iptables
# MTU
iptables -I FORWARD -p tcp --tcp-flags SYN,RST SYN -j TCPMSS --clamp-mss-to-pmtu
# Enable NAT
iptables -t nat -A POSTROUTING -o eth0 -j MASQUERADE
# Enable IPv4 forward
sysctl -w net.ipv4.ip_forward=1
# Enable port 443
iptables -I INPUT -p tcp --dport 580 -j ACCEPT
iptables -I OUTPUT -p tcp --dport 580 -j ACCEPT
iptables -I INPUT -p udp --dport 580 -j ACCEPT
iptables -I OUTPUT -p udp --dport 580 -j ACCEPT
#Config supervisor
cd Config
cp ./supervisor/ocserv.conf /etc/supervisor/conf.d
supervisorctl update
supervisorctl reload