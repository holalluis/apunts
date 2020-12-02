#include<stdio.h>
#include<stdlib.h>

int main(){
  int *p = NULL;

  p = malloc(sizeof(int));
  printf("el punter p és l'adreça %p\n",p);

  *p = 10;
  printf("el numero *p val %d\n",*p);

  p = NULL;
  printf("p ara és NULL\n");
  printf("el numero *p val %d\n",*p);

  return 0;
}
