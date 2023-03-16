#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  //random seed
  srand(time(NULL));

  //genera número aleatori 1 a 100
  int numero = (rand()%100)+1;
  printf("Número secret: %d\n",numero);

  //bucle preguntar a l'usuari
  while(1){
    int guess=0;
    printf(">> Endevina el número (1-100):\n");
    scanf("%d",&guess);
    printf("Has escrit '%d'\n",guess);

    if(guess<numero){
      printf("Massa petit!\n"); continue;
    }else if(guess>numero){
      printf("Massa gran!\n"); continue;
    }else{
      printf("Correcte! El número secret era el %d.\n", numero);
      break;
    }
  }

  return 0;
}
