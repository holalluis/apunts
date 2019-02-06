#include <stdio.h>

int main(){
  
  //ints
  int tuna  = 5;
  int bacon = 10;
  int water = 450;

  //pointers to ints
  int* pTuna = &tuna;
  int* pBaco = pTuna-1;

  //Table of addresses names and values
  puts("Pointer \t Name \t Value");
  puts("==============================");

  //normal ints
  printf("%p \t %s \t %d\n", &tuna,  "tuna",  tuna);
  printf("%p \t %s \t %d\n", &bacon, "bacon", bacon);
  printf("%p \t %s \t %d\n", &water, "water", water);

  //pointers to ints
  printf("%p \t %s \t %p \t %d \n", &pTuna, "pTuna", pTuna, *pTuna);
  printf("%p \t %s \t %p \t %d \n", &pBaco, "pBaco", pBaco, *pBaco);

return 0;}
