#tmux
sudo apt install tmux

#comandes
tmux ls
tmux new-session
tmux new-session -s "session-name"
tmux attach
tmux attach -t "session-name"
tmux detach
tmux rename "new name"
tmux rename -t "session name" "new name"

#status line symbols
*  ....   Denotes the current window.
-  ....   Marks the last window (previously selected).
#  ....   Window is monitored and activity has been detected.
!  ....   A bell has occurred in the window.
~  ....   The window has been silent for the monitor-silence interval.
M  ....   The window contains the marked pane
Z  ....   The window's active pane is zoomed

# copy mode (fer scroll al terminal)
prefix [ #copy
enter    #confirm copy selected text
prefix ] #paste


# TOTES LES COMANDES ES FAN AMB:
"prefix" "comanda"
(el prefix per defecte és C-b)

# FINESTRES "~workspace"
* finestra actual
- finestra alterna (anar amb C-b l)
Z la finestra està amb zoom (vol dir que amaga els altres panells)
prefix c -- nova finestra "create"
prefix " -- crear split horitzontal
prefix % -- crear split vertical
prefix , -- rename finestra
prefix . -- moure finestra
prefix l -- canviar a finestra alterna "last"
prefix n -- finestra següent "next"
prefix p -- finestra anterior "previous"
prefix w -- list windows
prefix 1 -- anar a la finestra 1
prefix & -- kill finestra

# PANES (finestres verticals o horitzontals)
prefix ;                          -- panell altern
prefix o                          -- següent panell
prefix amunt,esquerra,dreta,avall -- següent panell
prefix espai                      -- rotar layouts de panes !!!
prefix x                          -- kill panell
prefix q                          -- mostra numeros als panell
prefix !                          -- convertir panell en finestra

# ALTRES
prefix ?   -- mostra comandes
prefix :   -- command mode
prefix $   -- rename session
prefix d   -- detach tmux: sortir, tmux continua obert
prefix s   -- triar sessió
prefix C-z -- suspendre sessió
:set mouse -- enable mouse
