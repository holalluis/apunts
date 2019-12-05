#obrir moduls
a2enmod nommodul

#ubicació log:
/var/log/apache2/access.log

#observar log a temps real:
tail -f access.log
less +F access.log
