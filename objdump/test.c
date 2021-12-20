#include<stdio.h>
#include<unistd.h>

int main(){
  int x = 42;

  for(int i=0;i<5;i++){
    x++;
    printf("x=%d, at %p\n", x, &x);
    sleep(1);
  }

  return 0;
}
