#include<stdio.h>

int main(int argc, char **argv){
  double tc[3] = {55, 100, 222.4};
  double tf[3];

  for(int i=0;i<3;i++){
    tf[i] = tc[i]*9.0/5.0+32;
    printf("%f ºC is %f F\n", tc[i], tf[i]);
  }


return 0;}
