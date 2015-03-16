#Install Essentials and Supervisor
apt-get update
apt-get upgrade
apt-get install python-pip python-m2crypto supervisor
#Install Shadowsocks by pip(python)
pip install shadowsocks
cd ./Config
mkdir /etc/shadowsocks
cp shadowsocks.json /etc/shadowsocks
cp shadowsocks.conf /etc/supervisor/conf.d
echo "ulimit -n 51200" >> /etc/default/supervisor
service supervisor start
supervisorctl update
supervisorctl reload
echo "Your Shadowsocks Port is 3849"
echo "Password rwj6LEhoZDFQF"
echo "Method aes-256-cfb" 