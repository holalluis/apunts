#include <stdio.h>

int factorial(int n);

int main(){
  int n;
  printf("Escriu un numero: ");
  scanf("%d",&n);
  int f = factorial(n);
  printf("El factorial de %d és %d\n",n,f);
  return 0;
}

int factorial(int n){
  if(n<=1){
    return 1;
  }else{
    return n*factorial(n-1);
  }
}
