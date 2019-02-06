#include<stdio.h>
int main(){
  //tests with fliping bits with number 5 (101 in binary)
  char c = 5; //or 0b101
  int minus_six = 0b11111111111111111111111111111010;

  printf("size of int : %d bytes\n",sizeof(int));
  printf("size of char: %d bytes\n",sizeof(char));

  printf("                        0b00000101 is decimal %d\n", 0b00000101);
  printf("                        0b11111010 is decimal %d\n", 0b11111010);
  printf("                          char c=5 is decimal %d\n", c);
  printf("                         ~c & 0xff is decimal %d\n", ~c & 0xff);
  printf("                          c ^ 0xff is decimal %d\n", c ^ 0xff);
  printf("                           c ^ 255 is decimal %d\n", c ^ 255);
  printf("                                ~c is decimal %d\n", ~c);
  printf("0b11111111111111111111111111111010 is decimal %d\n", minus_six);
return 0;}
