#include<stdio.h>
#include<math.h>

int main(){

  int bytes = sizeof(int);
  int bits  = 8*bytes;
  printf("int ocupa %d bytes (%d bits)\n",bytes,bits);

  //unsigned int
  double       uf_max = powf(2,bits)-1;
  unsigned int ui_max = 4294967295; 

  //signed
  double     sf_max = powf(2,bits-1)-1;
  signed int si_max = 2147483647;
  printf("unsigned int 2^%d = %u\n", bits,   ui_max);
  printf("signed   int 2^%d = %u\n", bits-1, si_max);

return 0;}
