//Programa que converteix de decimal a binari (però el retorna al revés). Per solucionar-ho, comanda "rev" del terminal
/*
  0  = 00000
  1  = 00001
  2  = 00010
  3  = 00011
  4  = 00100
  5  = 00101
  6  = 00110
  7  = 00111
  8  = 01000
  9  = 01001
  10 = 01010
  11 = 01011
  12 = 01100
  13 = 01101
  14 = 01110
  15 = 01111
  16 = 10000
*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
  int decimal = atoi(argv[1]);
  
  if( decimal < 2 ) printf("%d",decimal);
  else {
    while(decimal>1) {
        printf("%d",decimal%2);
        decimal=decimal/2;
    }
    printf("1");
    printf("\n");
    //imprimirà el binari al revés
  }

return 0;}
