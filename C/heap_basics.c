#include <stdio.h>
/*
  malloc: borrows memory from the heap
  free  : returns memory to   the heap
*/

int main(){

  //find free memory for 5 integers
  int *array = malloc(5*sizeof(int)); 

  //means: free the extra MEMORY borrowed
  free(array);

  return 0;
}
