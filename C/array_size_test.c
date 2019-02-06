#include <stdio.h>
#include <string.h>

#define MYNAME "Tuna McButter"

int main(){
  printf("My name is %s\n", MYNAME);

  char tuna[]="tuna";
  printf("The best food in the world is %s\n", tuna);
  printf("Size of 'tuna' is %lu\n", sizeof(tuna)/sizeof(tuna[0]));

  char bacon[]="bacon";
  printf("The best food in the world is %s\n", bacon);
  printf("Size of 'bacon' is %lu\n", sizeof(bacon)/sizeof(bacon[0]));

return 0;}
