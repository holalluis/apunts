import bitcoin as B

priv = B.sha256('lluis')
pubk = B.privtopub(priv)
addr = B.pubtoaddr(pubk)
print addr
