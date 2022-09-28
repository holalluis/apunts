# nnn — the missing terminal file manager for X

DESCRIPTION
     nnn (Noice is Not Noice) is a performance-optimized, feature-packed fork
     of noice (http://git.2f30.org/noice/) with seamless desktop integration,
     simplified navigation, navigate- as-you-type mode with auto select, disk
     usage analyzer mode, bookmarks, contexts, application launcher, familiar
     navigation shortcuts, subshell spawning and much more. It remains a simple
     and efficient file manager that stays out of your way.

     nnn opens the current working directory by default if PATH is not specified.

KEYBINDS
     nnn supports both vi-like and emacs-like key bindings as listed below.

     NAVIGATION

           [Up], k, ^P                      Move to previous entry
           [Down], j, ^N                    Move to next entry
           [PgUp], ^U                       Scroll up half a page
           [PgDn], ^D                       Scroll down half a page
           [Home], g, ^, ^A                 Move to the first entry
           [End], G, $, ^E                  Move to the last entry
           [Left], [Backspace], h, ^H       Go to parent directory
           [Right], [Enter], l, ^M          Open file or enter directory
           ~                                Change to the HOME directory
           &                                Change to initial directory
           -                                Change to the last visited directory
           .                                Toggle show hidden . (dot) files
           /                                Change filter (more information below)
           [Insert], ^T                     Toggle navigate-as-you-type mode
           b                                Pin current directory
           ^W                               Visit pinned directory
           d                                Toggle detail view
           Tab, ^I                          Next context, ask to create if none
           `, ^/                            Leader key
           LeaderN                          Switch to context N
           Esc                              Exit prompt
           ^L                               Force a redraw, clear prompt
           q                                Quit the current context
           ^G                               Quit and change directory
           Q, ^Q                            Quit
           ?                                Help and configuration screen

     FILES

           ^O                               Open with an application (takes 1 combined argument)
           n                                Create a new file or directory
           D                                Show entry details
           ^R                               Rename selected entry
           r                                Open directory in vidir
           Y, ^Y                            Toggle selection mode
           Space, ^K                        Copy entry absolute path
           y                                Show selection list
           P                                Copy files from selection
           V                                Move files from selection
           X                                Delete files from selection
           ^X                               Delete entry
           f                                Archive entry
           F                                List files in archive
           ^F                               Extract archive in current directory
           m, M                             Show brief/full media info
           e                                Open entry in EDITOR (fallback vi)
           p                                Open entry in PAGER (fallback less)

     ORDER TOGGLES

           ^J                               Toggle disk usage analyzer mode
           S                                Toggle sort by apparent size
           t                                Toggle sort by time modified
           s                                Toggle sort by file size

     MISC

           !, ^]                            Spawn SHELL in current directory (fallback sh)
           C                                Execute entry
           R                                Run or choose a custom script
           L                                Lock terminal
           ^S                               Run a command

     Backing up one directory level will set the cursor position at the directory you came out of.

     Help & settings, file details, media info and archive listing are shown in the PAGER. Please use
     the PAGER-specific keys in these screens.


HOME
https://github.com/jarun/nnn
