import socket
import sys

#server='87.216.177.4'
server='192.168.1.132'
port=80

#socket
print "Connectant a "+server+"...",
s=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
s.connect((server,port))
print "Socket connectat"

while True:
		missatge=raw_input("Escriu missatge>> ")
		if missatge=='q': break

		#sobreescriu
		missatge="GET /corrupcio/ HTTP/1.1\nHost: "+server+"\n\n"
		print missatge

		#envia
		s.send(missatge)
		result=s.recv(1024)
		while len(result)>0:
			print result
			result=s.recv(1024)

print "Sortint..."
s.close()
