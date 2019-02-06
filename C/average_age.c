#include <stdio.h>

int main(){
  int ages[]={12,18,32,38,51}; //sum is 150
  int n=5;                     //array size is 5
  float avg=0;                 //should be 30
  
  for(int i=0;i<n;i++){
    avg += ages[i]; //summ all ages
  }
  avg/=n; //divide by n

  printf("The avg is %.4f\n",avg);

  //check the shorthand if else
  printf("Number one is %d\n", (3==3?1:2));
  printf("Number two is %d\n", (3==4?1:2));

  return 0;
}
