#include<stdio.h>

//intercanvia els valors dels apuntadors
void swap(int *ap, int *bp);

int main(){
  int x=7;
  int y=8;

  printf("x is %d, y is %d\n",x,y);
  swap(&x,&y);
  printf("x is %d, y is %d\n",x,y);
}

void swap(int *ap, int *bp){
  int temp = *ap; //get valor ap (és un int)
  *ap = *bp;      //valor(ap) = valor(bp)
  *bp = temp;     //valor(bp) = valor(ap)
}

