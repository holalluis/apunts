#Screen
  (des de desembre de 2017: he començat a fer servir tmux)

  Dins de qualsevol programa,
  per fer C-a (e.g vim augmentar numero)
  es pot fer C-a a (envia un C-a normal) --> prova: 3

# PAIR PROGRAMMING
  screen -ls     llista de sockets screen (o sigui, sessions)
  screen -x "id" entra a la sessió nº "id"

#comandes screen
  C-a ?          mostra comandes
  C-a c          crea nou screen
  C-a k          kill screen
  C-a "          llista de screens (pantalla completa)
  C-a w          veure llista més petita
  C-a 1          vés a la finestra 1
  C-a C-a        toggle previous screen
  C-a A          posa nom a la finestra !!!!!!
  C-a S          crea split horitzontal
  C-a |          crea split vertical!!!!
  C-a TAB        mou-te al següent region (region=split)
  C-a X          kill current region
  C-a Q          kill all regions except current
