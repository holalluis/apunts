#include <stdio.h>
#include <stdlib.h>
//CS107 lecture 2: https://www.youtube.com/watch?v=jTSvthW34GU&index=2&list=PLD28639E2FFC4B86A

int main(){
  int   i1 = 1000;          //00000000 00000000 00000000 00000000 (4 bytes)
  float f1 = i1;            //00000000 00000000 00000000 00000000 (4 bytes)
  float f2 = *(float *)&i1; //00000000 00000000 00000000 00000000 (4 bytes)
  //f2 copia els bits tal qual enlloc de convertir al format float

  printf("int   i1 is %d\n",i1);
  printf("float f1 is %f\n",f1);
  printf("float f2 is %f\n",f2);

  //part 2
  float f = 7.0;
  short s = *(short *)&f;
  printf("float f is %f\n",f);
  printf("short s is %d\n",s);

return 0;}
