#include<stdio.h>

int main(){
  
  char *s1 = "hola";
  printf("s1: %s \n", s1);

  char s2[10] = "hola";
  printf("s2: %s \n", s2);

  //que passa si poses %d a un float
  printf("%d\n", 3.1);

  //imprimir fraccions
  printf("%lf\n", 9/5);
  printf("%lf\n", 9.0/5.0);

  double a = 5 + 5; //suma dos ints
  printf("%f\n", a);

return 0;}
