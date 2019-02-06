# Assembly

Registres:
  * eax - guarda el valor de retorn d'una funció
  * ebx - base pointer to the data section (acumulador)
  * ecx - counter for string and loop operations (quan ecx val zero, surts del loop)
  * edx - i/o pointer (hardware)

  * esi - source pointer for string operations
  * edi - destination pointer for string operations
  * esp - stack pointer (data area)
  * ebp - stack frame base pointer: on comença una sub stack particular per funcions
  * eip - pointer to next instruction to execute ("instruction pointer"). jump instruction. per funcions que criden funcions

Convencions
  * caller save registers:
    eax, edx, ecs
    protegeix valors dels registres quan una funcio crida una funcio
  * callee save registers:
    ebp, ebx, esi, edi

Arquitectura
  * els registres tenen formes curtes, (subdivisions) que provenen d'arquitectures antigues (8 bits, 16 bits)

  |       32 bits      |
  |         EAX        |
  | reserved |    AX   |
  | reserved | AH | AL |

Registre EFLAGS
  * conte uns quants flags d'un sol bit
  * es fan servir per condicions IF
  * Zero flag (ZF): set if result of some instruction is zero
  * Sign flag (SF): set equal to the most significant bit of the result

  4 bytes int = 32 bits
  0x0001 =  1
  0xFFFF = -1

  si els sumem, obtenim 0, i el ZF is set to 1

Instruccions
  * NOP: no operation. no fa res
    - used to delay time
    - exploits :)
    - agafa el valor de eax i el posa a eax amb una funcio exchange (xchg)

The Stack
  * conceptual area of RAM which is designated by the OS when a program is started
  * is a Last in - first out data structure (com la pila de magic)
  * by convention the stack grows toward lower memory addresses. adding something to the stack means the top of the stack is now at a lower memory address.
  * esp points at the top of the stack, the lowest address which is being used
  * the stack keeps track of which functions were called before the current one
  * a firm understanding of the stack is essential

PUSH
  * instrucció
  * push word, doubleword, quadword onto the stack
  * dword o double (4 bytes)
  * push 4 (push 0x  00 00 00 04)
  * the push instruction automatically decrements the stack pointer "esp" by 4
  * push eax (agafa el valor de eax i posal a l'stack)

POP
  * contrari de push
  * agafa un dword de l'stack, i posa'l a un registre, i incrementa "esp" by 4
  * per sota del valor de "esp" es considera indefinit (undefined)

Calling conventions
  * how you pass parametres to functions
  * cdecl and stdcall conventions

cdecl
  * c declaration
  * function parameters pushed onto the stack right to left
  * [*] the caller is responsible for cleaning up the stack (a diferencia de stdcall)

stdcall
  * callee responsible for cleaning up any stack parameters it takes

CALL - call procedure
  * transfer control to a different function in a way that control can be later be resumed where it left off
  * first it pushes the address of the next instruction onto the stack
    - for use by ret for when the procedure is done
  * then it changes eip to the address given in the instruction
  * Destination address can be specified in multiple ways
    - absolute address
    - relative address (ie 50 bytes a partir d'una adreça)

RET - return from procedure
  * two forms
    - pop the top of the stack into eip (pop increments the stack pointer)
      * in this form, the instruction is just written as "ret"
      * cdecl
    - pop the top of the stack into eip and add a constant number of bytes to esp ()
      * in this form, the instruction is just written as "ret 0x8", "ret 0x20", etc
      * typically used by stdcall functions

MOV - move
  * syntax: mov destination, source
  * can move
    - register to register
    - memory to register, register to memory
    - immediate to register, immediate to memory
  * never memory to memory
  * memory addrs are given in r/m32 form talked about later (how to specify a memory addr)

General stack frame operation
                             STACK BOTTOM
  * local variables -------> main() frame
    caller save regs         undef <- subroutines of main frame
    arguments                undef <- subroutines of soubroutines of main frames
    callers saved ret addr   undef
                             undef
                             ...
                             STACK TOP

Example1.c
  * using the stack to call subroutines

    - C:
      int sub(){
        return 0xbeef;
      }
      int main(){
        sub();
        return 0xf00d
      }

    - Assembly:
      sub:
        push ebp
        mov ebp, esp
        mov eax, 0BEEFh
        pop ebp
        ret

      main:
      push ebp
      mov ebp, esp
      call sub(401000h) //go to instruction in 401000h (alla on està definida la funcio sub)
      mov eax, 0fOOdh
      pop ebp
      ret

ADD instruction
  * eax=eax+ebx
  * add eax,ebx

