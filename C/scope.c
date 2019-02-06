#include <stdio.h>
int main(){
  int n=5;

  for(int i=0;i<n;i++){
    printf("i val %d\n",i);
  }

  //donarà error pq la variable i només viu dins el for loop
  printf("i val %d\n",i);

  return 0;
}
