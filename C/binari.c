/*
  Converteix enters i floats a binari
  tenir en compte que si un enter es converteix a float, canvia el seu patró binari
*/
#include<stdio.h>

void int2binary(unsigned n);
void float2binary(unsigned n);

int main(){
  //print byte sizes of some types
  printf("sizeof(short):    %lu\n",sizeof(short));
  printf("sizeof(int):      %lu\n",sizeof(int));
  printf("sizeof(float):    %lu\n",sizeof(float));
  printf("sizeof(double):   %lu\n",sizeof(double));

  //print binari for first 255 numbers
  for(int i=0;i<=0xff;i++){
    int2binary(i);
    float2binary(i);
  }

  return 0;
}

void int2binary(unsigned n){
  short bits = 8*sizeof(int);
  short bit;

  for(int i=bits-1;i>=0;i--){
    bit = (n >> i) & 1;
    printf("%d", bit);
    if(i%8==0) printf(" ");
  }

  printf("- %d\n", n);
}

void float2binary(unsigned n){
  short bits = 8*sizeof(float);
  short bit;
  float fn = *(float*)(&n); //preserve bit sequence

  for(int i=bits-1;i>=0;i--){
    bit = (n >> i) & 1;
    printf("%d", bit);
    if(i%8==0) printf(" ");
  }

  printf("- %.60f\n", fn);
}
