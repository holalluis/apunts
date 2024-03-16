# x86 Assembly tutorial
# https://www.youtube.com/watch?v=jPDiaZS-2ok&ab_channel=LowLevelLearning
# "https://www.chromium.org/chromium-os/developer-library/reference/linux-constants/syscalls/#x86-32-bit"

.global _start
.intel_syntax
.section .text

_start:
  #the "write" syscall
  #file descriptor (stdin=0, stdout=1, stderr=2)
  mov %eax, 4
  mov %ebx, 1   # stdout
	lea %ecx, [msg] # pointer to the message
  mov %edx, 13 # length of string "Hello, World\n"
  int 0x80
  #int is "interrupt" asks the kernel to
  #execute the function number in eax

  #the "exit" syscall
  #it returns the number in ebx
  mov %eax, 1
  mov %ebx, 65
  int 0x80





.section .data
  msg:
  .ascii "Hello, World\n"
