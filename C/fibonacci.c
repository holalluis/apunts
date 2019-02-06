#include <stdio.h>

void fib(int x){
  //print first x fibonacci numbers
  int a=0;
  int b=1;
  int n;  

  if(x<=0){                        return; }
  if(x==1){ printf("%d\n",a);      return; }
  if(x==2){ printf("%d %d\n",a,b); return; }

  printf("%d %d ",a,b);
  for(int i=2;i<x;i++){
    n=a+b;
    printf("%d ",n);
    a=b;
    b=n;
  }
  printf("\n");
}

int main(){
  int x = 15;
  for(int i=0;i<=x;i++) fib(i);
  fib(1+x);
  for(int i=x;i>=0;i--) fib(i);
  return 0;
}
