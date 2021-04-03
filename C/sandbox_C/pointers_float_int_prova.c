#include<stdio.h>
int main(){
  float f = 5.5;
  printf("%f\n", f);

  float* pf = &f;
  int*   pi = (int*)pf;

  printf("%p\n", pf);
  printf("%p\n", pi);
  printf("%d\n", *pi);

  //procés invers en un sol pas
  int i = 1085276160;
  printf("%f\n", *(float*)(&i) );

  return 0;
}
