#include <stdio.h>

int main(){

  char yourName[20];

  printf("Com et dius? (noms i cognoms) "); //put a line
  // gets is unsafe!!
  // gets(yourName);  //get a line (pot tenir espais a diferència de 'scanf')
  fgets(yourName, 20, stdin); //

  printf("Hola %s",yourName);

  for(int i=0;yourName[i];i++){
    printf("%d %c %d\n",i, yourName[i], yourName[i]);
  }
  puts("");

  return 0;
}
