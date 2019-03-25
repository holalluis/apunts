#include <stdio.h>

long long int factorial(int n);

int main(){
  int n;
  printf("Escriu un numero: ");
  scanf("%d",&n);
  long long int f = factorial(n);
  printf("El factorial de %d és %lld\n",n,f);
  return 0;
}

long long int factorial(int n){
  if(n<=1){
    return 1;
  }else{
    return n*factorial(n-1);
  }
}
