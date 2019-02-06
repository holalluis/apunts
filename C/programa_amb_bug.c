#include <stdio.h>

int main(){
  
  char* dies[7] = {
    "Dilluns",
    "Dimarts",
    "Dimecres",
    "Dijous",
    "Divendres",
    "Dissabte",
    "Diumenge",
  };

  for(int i=0; i<7; i++){
    printf("dies[%d] és %s\n", i, dies[i]);
  }

  return 0;
}
