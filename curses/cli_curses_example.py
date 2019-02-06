#!/usr/bin/python
import curses as curses
import random as r

scr = curses.initscr()
win = curses.newwin(3,7,9,9)
win.border()

while 1:
  c = scr.getch()
  if(c==32): #press spacebar
    win.mvwin(r.randint(2,25), r.randint(2,70))
  win.addstr(1, 1, "F@*K!")
  win.refresh()
