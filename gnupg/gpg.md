#GPG

# generar clau pública i privada (interactiu)
  gpg --gen-key

# veure claus al keyring
  gpg --list-keys

# exportar clau pública
  gpg --export --armor id

# importar clau pública
  gpg --import file.gpg

# encriptar arxiu amb la clau pública de 'id'
  cat file | gpg --encrypt --armor -r id

# desencriptar arxiu amb la clau privada guardada al keyring
  gpg --decrypt file.gpg
