#include <stdio.h>
#include <stdlib.h>

//ask for "n" numbers and get the average

int main(){

  int howMany;
  float average=0.0;
  int * pointsArray;

  printf("How many numbers do you want to average? ");
  scanf("%d", &howMany);

  //ALLOCATE EXTRA MEMORY FOR INTEGERS
  pointsArray = (int *)malloc(howMany * sizeof(int));

  for(int i=0;i<howMany;i++){
    printf("Enter number %d/%d: ",i+1,howMany);
    scanf("%d", &pointsArray[i]);
    average += pointsArray[i];
  }
  average/=howMany;
  printf("\nAverage is %f\n\n", average);
  free(pointsArray);
return 0;}
