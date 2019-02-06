#include <stdio.h>

int main(){

  //ask your age
  int age;
  printf("What is your age? ");
  scanf("%d", &age);

  //compute allowed to date girls age
  int girlAge = age/2+7;
  printf("\nYou are allowed to date %d year old girls or older\n\n", girlAge);

  //randomly compute the remainder
  printf("The float result    of 30/7 is %f\n", 30.0/7.0); //4.xxxx
  printf("The int   result    of 30/7 is %d\n", 30/7); //4
  printf("The int   remainder of 30/7 is %d\n", 30%7); //2

  return 0;
}
