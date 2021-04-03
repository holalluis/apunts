VIM TRICKS

# vim talk: https://www.youtube.com/watch?v=E-ZbrtoSuzw
  :20vs .     "obrir explorador arxius amb width 20 caràcters
  :sf         "split finestra buscant arxiu
  :sfind      "idem
  ]m          "anar al pròxim mètode
  ]M          "anar al final del mètode
  g^]         "veure tots els fitxers on apareix el tag sota el cursor (per triar-ne un i anarhi)
  :sall       "split all files from argument list
  :vert sall  "split all files from argument list
  :arga xxx   "afegir xxx a l'argument list
  :args *.py  "set args list to all python files

# abreviatures (correccions en insert mode)
  :iab tihs this
  :iab ms Microsoft

# spellchecking
  * enable, disable
    :set spell
    :set nospell
  * corregeix amb la primera suggerència
    1z=
  * corregeix obrint finestra
    z=
  * move to next and prev misspelled word
    ]s
    [s

# sortir (igual que :wq només si hi ha canvis)
  :x

# Omni completion (programming language aware completion). Exemple: completar mètode objecte
  ^x ^o

# Open command line window history: permet executar comanda seleccionada amb Enter
  q:

# Maneres de saltar entre arxius
  manera    comandes        list
  ---------------------------------
  Jumps     CTRL-I, CTRL-O  :jumps
  Marks     ma, 'a, '0      :marks
  Tagstack  CTRL-], CTRL-T  :tags

#Insert previously inserted text.
  insert mode CTRL-A

#encrypt a file // decrypt
  :X
  :set key=

#Execute {cmd}. If it contains a command that splits a window it will be split vertically.
  :vert[ical] {cmd}
  example: :vert terminal

# troba i edita 'en.json' dins el path !!!
  :fin[d] en.json

# text formatting !!!
  gq

# obrir terminal (vim >= 8.1, neovim)
  :ter[minal]

# toggle normal/insert mode in terminal mode (not in neovim)
  CTRL-W N
  i

#command mode in terminal mode
  CTRL-W :

#autocompletion
  C-n, C-p   normal autocomplete
  C-x C-n    complete words
  C-x C-p    complete words
  C-x C-l    autocomplete whole line
  C-x C-f    autocomplete file in path
  C-x C-o    omni (programming language aware) !!!!

#syntax group names (used for 'match' command in vimrc)
  :syntax list

#codi ascii caràcter sota el cursor
  ga :as :ascii

#hex editing alternate[!]
  :% ! xxd
  :% ! xxd -r

#veure non ascii hex chars
  :set display=uhex

# obrir links sota el cursor !!! (netrw-gx)
  gx

# list buffers
  :ls
  ```
    % current window
    a active visible
    # alternate
    + has unsaved changes
    h hidden
  ```
# obrir tots els buffers en finestres
  :ball

# preview window (no agafa focus)
  * veure arxiu
    :ped {file}
  * tancar
    :pc

# veure l'arxiu actual amb syntax python
  :ownsyntax python

# FUZZY FILE FINDER!
  :e **/* patro

# crear fold (només si :set fdm=manual)
  zf

#posar una columna que mostra folding d'amplada 1 (max 13)
  set foldcolumn=1

#ajuda comanda CTRL-N a INSERT mode
  :help i_CTRL-N

#ajuda comanda CTRL-N a NORMAL mode
  :help ^n
  :help CTRL_N

#netrw (explorador arxius):
  :vs .  Obrir netrw
  :e .   Obrir netrw
  v      Obrir arxiu en vertical
  o      Obrir arxiu en horitzontal
  t      Obrir en pestanya
  p      Obrir en preview window

# tags (ctags)
  CTRL-]                  Obrir tag des de l'arxiu tags (creat amb la comanda ctags -R)
  CTRL-T                  Tirar enrere amb els tags trobats

# varis
  ^l                      Redraw screen
  :ls                     Veure buffers oberts
  :b arxiu                Busca arxiu dins els buffers
  ^w _                    Maximitzar finestra oberta (vertical)
  ^w |                    Maximitzar finestra oberta (horitzontal)
  ^w T                    Portar la finestra actual a un nou TAB
  gt                      Canviar de tab
  :help index             Veure TOTES les comandes
  gn                      Troba el següent match i selecciona'l visualment

  :Te                     Obre un tab i explora
  :tabe .                 Obre un tab i explora

  42go                    Vés al caràcter numero 42 de l'arxiu actual

  ^y                      Inserta el caràcter de SOBRE el cursor (INSERT MODE)
  ^e                      Inserta el caràcter de SOTA  el cursor (INSERT MODE)

  :shell                  Crea una shell per no haver de sortir del VIM (no a neovim)
  :set scrollbind         Scroll finestres en paral·lel (cal executar la opció a cada finestra)
  :set scb                Scroll finestres en paral·lel (cal executar la opció a cada finestra)
  :windo set scrollbind   Scroll finestres en paral·lel (cal executar la opció a cada finestra)
  gi                      Entrar a insert mode des de l'últim lloc on s'ha editat !!
  :syntax sync fromstart  Recolorejar sintaxi (mapejat a ,s)
  ^w [HJKL]               moure finestres obertes:
  ^d,^t                   indentació insert mode
  ^r                      inserta un registre (INSERT MODE)
  ^w                      esborra paraules cap enrere!  (INSERT MODE)
  :.!                     enviar les linies seleccionades a un programa extern (shell command) per línies o rangs de línies

# EASTER EGGS
  :smile
  :help 42
  :help holy-grail
  :help!
  :help map-modes (see comment below the table about :nunmap)
  :help UserGettingBored
  :help spoon
  :help showmatch (read the note)
  :Ni!
  :help bar
