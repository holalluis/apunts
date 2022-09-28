#include<stdio.h>

int suma_3_numeros(int a, int b, int c){
  return a+b+c;
}

int main(){
  int a=1;
  int b=2;
  int c=3;
  int d=4;
  int e=5;
  int f=6;
  int g=7;
  int h=8;
  int i=9;
  int suma_1 = suma_3_numeros(a,b,c);
  int suma_2 = suma_3_numeros(d,e,f);
  int suma_3 = suma_3_numeros(g,h,i);
  int suma = suma_3_numeros(suma_1,suma_2,suma_3);
  printf("suma:  %d\n",suma);
}
