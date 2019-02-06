#include<stdio.h>

int main(){

  FILE *f;
  f=fopen ("test.txt","w");
  fprintf(f,"Hello my name is "lluis"\n");

  return 0;}
