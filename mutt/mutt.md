#Mutt/NeoMutt mail client

#Enviar mail des de bash
  echo "aixo es un missatge" | mutt nom@correu.com -s assumpte

#Pantalla inicial ('index')
  ctrl-g  cancel a un prompt
  m       escriure nou mail
  q       enrere/sortir
  a       afegir autor del mail sota el cursor a l'agenda d'alias
  y       canviar de carpeta
  r       contestar mail
  g       contestar a tothom (en una cadena)
  d       marcar missatge per esborrar missatge (queda marcat amb una D)
  $       confirmar esborrar missatges marcats per moure/eliminar
  =       anar a dalt de tot
  *       anar a baix de tot
  23      posar el cursor al mail 23
  Esc v   toggle collapse thread
  Esc V   toggle collapse all threads
  O [td]  Ordenar per data (d) o per threads (t)

#Status dels missatges
  D  esborrat però sense confirmar
  d  has attachments marked for deletion
  K  contains PGP public key
  N  message is new
  O  message is old
  P  message is PGP encrypted
  r  contestat
  S  message is signed, and signature is verified
  s  message is signed
  !  message is flagged
  *  message is tagged
  n  thread contains new messages (if collapsed)
  o  thread contains old messages (if collapsed)
  +  message is to you only
  T  message to you and CCed to others
  C  CC to you
  F  message is from you
  L  message is sent to subscribed mailing list

# Comandes al pager (= llegint un mail)
  Enter  baixar una linia
  -      pujar
  T      toggle display quoted text
