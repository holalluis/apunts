#include<stdio.h>

void prova_static(){
  //'static' can also be defined within a function. If this is done, the
  //variable is initalised at compilation time and retains its value between
  //calls. Because it is initialsed at compilation time, the initalistation
  //value must be a constant. This is serious stuff - tread with care.
  static int i=0;

  printf("%d\n",++i);
}

int main(){
  for(int i=0;i<5;i++)
    prova_static();
}

