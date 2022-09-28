#include<stdio.h>
int main(){
  unsigned long long int suma = 0;
  for(int i=0;i<1e8;i++){
    suma += i+1;
  }

  printf("C: ");
  printf("%lld\n",suma);
  return 0;
}
