import bitcoin as b

#funcio per comprovar si els 4 primers chars del hash son 0
def comprovaHash(msg):
	msg_hash=b.sha256(msg)
	print(msg_hash+" -- "+msg)
	if msg_hash[0:4] == "0000":
		return True
	else:
		return False


#start
missatge="Hello, world!"

#es para a nonce=4250

nonce=0
while True:
	if(comprovaHash(missatge+str(nonce))):
		break;
	nonce=nonce+1;

