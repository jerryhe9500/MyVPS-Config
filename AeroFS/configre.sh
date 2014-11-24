#Install AeroFS
wget https://dsy5cjk52fz4a.cloudfront.net/aerofs-installer-0.8.77.deb
dpkg -i aerofs-installer-0.8.77.deb
#Configure supervisor
cp aerofs.conf /etc/supervisor/conf.d
aerofs-cli