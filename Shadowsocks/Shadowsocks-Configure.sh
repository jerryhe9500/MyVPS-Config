apt-get update
apt-get upgrade
apt-get install python-pip python-m2crypto supervisor
pip install shadowsocks
cd ./Config
cp shadowsocks.json /etc
cp shadowsocks.conf /etc/supervisor/conf.d
service supervisor start
supervisorctl reload
echo Now there has the last thing to do.
echo Add "ulimit -n 51200" to /etc/default/supervisor
echo And reload supervisor:"supervisorctl reload"
