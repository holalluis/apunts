.P1

.TL
Tutorial hands on a groff(1)

.AU
Lluís Maria Bosch Lladó

.AI
Noted Author and Hacker
Student of Life, UAB/UdG, Catalonia, Spain

.AB
Noted author and hacker, Dean Provins reveals all in the much heralded HOWTO
for \fIgroff\fP. In this classic document, Provins describes the inner workings
of one of the earliest machine document processing systems available.

Readers are encouraged to try any or all the examples provided.
.AE

.NH
Machine Document Processing
.LP
In this chapter, we see that computers have finally come into their own.
No more must workers labour over Gutenberg presses, as they have for
generations.

.NH
Macros
.LP
There are many macro packages available for \fIgroff\fP and friends. There
are even more available for its predecessor \fItroff\fP.

.ds MS \fIms\fP

.NH 2
The \*[MS] Macro Package

.LP
The \*[MS] macros provide a much needed lift for those toiling with the
basic \fItroff\fP commands. They (the \*[MS] macros) are now used
extensively by writers the world over.

.SH
Títol secció no numerada amb format .2C (2 columnes)

.LP
.2C
Text de la secció no numerada.  Text de la secció no numerada.  Text de la secció no numerada.
Text de la secció no numerada.  Text de la secció no numerada.  Text de la secció no numerada.
Text de la secció no numerada.  Text de la secció no numerada.  Text de la secció no numerada.
Text de la secció no numerada.  Text de la secció no numerada.  Text de la secció no numerada.
Text de la secció no numerada.  Text de la secció no numerada.  Text de la secció no numerada.
Text de la secció no numerada.  Text de la secció no numerada.  Text de la secció no numerada.
Text de la secció no numerada.  Text de la secció no numerada.  Text de la secció no numerada.
Text de la secció no numerada.  Text de la secció no numerada.  Text de la secció no numerada.
Text de la secció no numerada.  Text de la secció no numerada.  Text de la secció no numerada.
Text de la secció no numerada.  Text de la secció no numerada.  Text de la secció no numerada.
Text de la secció no numerada.  Text de la secció no numerada.  Text de la secció no numerada.
.1C

.NH
Nova secció que torna a mode .1C (1 columna)

.LP
Un altre paràgraf

.B1
Text dintre una caixa amb .B1 i .B2
.B2

.LP
Macro .B foo ) (

.B foo ) (

Ara, Macro .R foo ) (

.R foo ) (

Ara, Macro .I foo ) (

.I foo ) (

Ara, Macro .CW foo ) (

.CW foo ) (

Ara, Macro .BI foo ) (

.BI foo ) (

Ara, Macro .BX foo

.BX foo

Ara, Macro .UL foo ,

.UL foo ,

Ara, Macro .LG foo

.LG
foo
.LG
foo
.LG
foo

.NL
retorn a normal

.SM
bar
.SM
bar
.SM
bar

.NL
retorn a normal

.XP
Paràgraf \fBXP\fP: opposite of PP opposite of PP opposite of PP opposite of
PP opposite of PP opposite of PP opposite of PP opposite of PP opposite of PP
opposite of PP opposite of PP opposite of PP opposite of PP.

.LP
a elevat a x és a\*{x\*}

.IP \(bu
item 1

.IP \(bu
item 2

.IP \(bu
item 3 a veure què passa si dura més d'una línia:
item 3 a veure què passa si dura més d'una línia:
item 3 a veure què passa si dura més d'una línia:
item 3 a veure què passa si dura més d'una línia:

.TS H
  tab(;) center;
  cb cb cb
  n  n  n .
  nom; edat; dni;
.TH
  lluis; 28; hola;
  lluis; 28; hola;
  lluis; 28; hola;
  lluis; 28; hola;
  lluis; 28; hola;
  lluis; 28; hola;
  lluis; 28; hola;
  lluis; 28; hola;
  lluis; 28; hola;
.TE

.LP
Un nou paràgraf amb la paraula
.UX

.BD
 un paràgraf raro que respecta els espais    que   posis hola    aaaa
    sadfasd    asdfa
.DE

.LP
LP normal amb un footnote \**.

I ara faig un altre footnote \**.

.FS
This is a footnote, bitch
.FE

.FS
Another one
.FE

.SH
Another Day in the Life of Dean P.

.LP
Lately, my life has become more complicated.  Now the boss wants me to
remember the names and telephone numbers of key suppliers, and selected
contacts.  As if I don’t already have enough to do.  Well my memory used to be
up to the task, but in these declining years, if I want to hang on to this
job, I better work smarter.  I think I’ll use that new-fangled groff program.
I hear it’s great!

.TS
center box tab (:);
cb|cb|cb|cb
r|n|l|l.
Telephone Number:Serial Number:Contact:Supplier
_
123-3456:123.:Jim:ABSSupplies
123-5437:.456::GencoPaints
557-234-3333:123.456:Suzy:HAL Computer Systems
.TE

Well that should do it. As long as I have this diary, I’ll never forget again.

.SH
The Next Day
.LP
Wow! I sure impressed the boss today.  I got ABS Supplies contact name with
just one small glance at my diary. Now I’m in his good books!

.PS
  ellipse "document"
  arrow
  box "pic" "(optional)" "-p" dashed
  arrow
  box "tbl/eqn" "(optional)" "-t -e" dashed
  arrow
  box "groff(1)"
  arrow
  ellipse "typesetter"
.PE

.LP
hola hola hola hola hola hola hola hola hola hola hola hola hola hola hola hola
hola hola hola hola hola hola hola hola hola hola
