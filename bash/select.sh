#!/bin/bash

select OPCION in opcion_1 opcion_2 opcion_3
  do
  if [ $OPCION ]; then
      echo "Opcion elegida: $OPCION"
      break
  else
      echo "Opcion no valida"
  fi
done
