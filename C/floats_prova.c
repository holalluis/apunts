#include<stdio.h>
#include<math.h>

int main(){
  //0.3 és poc precís
  float f1 = 0.1;
  float f2 = 0.2;
  float f3 = f1 + f2;
  float diff = fabs(f3 - 0.3);
  printf("f    is %.20f\n",f3);   //f    is 0.30000001192092895508
  printf("diff is %.20f\n",diff); //diff is 0.00000001192092895508
  return 0;
}
