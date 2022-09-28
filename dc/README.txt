dc - an arbitrary precision calculator
man dc

A reverse-polish calculator stores numbers on a stack.  Entering a number
pushes it on the stack.   Arithmetic operations pop arguments off the stack and
push the results.

Most arithmetic operations are affected by the ``precision value'', which you can set with the k command.  The
default  precision value is zero, which means that all arithmetic except for addition and subtraction produces
integer results.

Printing Commands: p n P f
Arithmetic:        + - * / % ~ ^ | v
Stack Control:     c d r R

dc provides at least 256 memory registers, each named by a single character.  You can  store  a  number  or  a
string in a register and retrieve it later.

sr     Pop the value off the top of the stack and store it into register r.

lr     Copy  the  value in register r and push it onto the stack.  The value 0 is retrieved if the register is
      uninitialized.  This does not alter the contents of r.

Each register also contains its own stack.  The current register value is the top of the register's stack.

Sr     Pop the value off the top of the (main) stack and push it onto the stack of register r.   The  previous
      value of the register becomes inaccessible.

Lr     Pop the value off the top of register r's stack and push it onto the main stack.  The previous value in
      register r's stack, if any, is now accessible via the lr command.

