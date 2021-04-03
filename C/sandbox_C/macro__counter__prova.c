#include<stdio.h>
int main(){
  printf("TIME: %d\n", __TIME__);
  printf("TIME: %d\n", __TIME__);
  printf("TIME: %d\n", __TIME__);
  printf("TIME: %d\n", __TIME__);
  printf("TIME: %d\n", __TIME__);
  printf("COUNT: %d\n", __COUNTER__);
  printf("COUNT: %d\n", __COUNTER__);

  int a = __COUNTER__;
  printf("a=__COUNTER__: %d\n",           a);
  printf("COUNT:         %d\n", __COUNTER__);

  for(int i=0;i<5;i++){
    //no augmenta el comptador
    printf("COUNT: %d\n", __COUNTER__);
  }

  return 0;
}
