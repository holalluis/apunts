#obrir moduls
a2enmod <modul>

#ubicació log:
/var/log/apache2/access.log

#observar log a temps real:
tail -f access.log
less +F access.log

#redireccionar subdomini a port
Here is what I finally came up with after being set in the right direction by
Miles Erickson. I wanted the address bar to reflect the original
subdomain/domain of the request and not the redirected server and port, but he
put me on the right path to Google up a solution using VirtualHost and I
finally found a solution that included the use of mod_proxy.

First, make sure mod_proxy is enabled:

  sudo a2enmod proxy
  sudo a2enmod proxy_http
  sudo a2enmod proxy_balancer
  sudo a2enmod lbmethod_byrequests
  sudo systemctl restart apache2

Next, add the following to your site config (e.g., /etc/apache2/sites-available/000-default.conf):

<VirtualHost *:80>
  ServerAdmin me@mydomain.com
  ServerName dev.mydomain.com
  ProxyPreserveHost On
  #setup the proxy
  <Proxy *>
    Order allow,deny
    Allow from all
  </Proxy>
  ProxyPass        / http://localhost:8888/
  ProxyPassReverse / http://localhost:8888/
</VirtualHost>
