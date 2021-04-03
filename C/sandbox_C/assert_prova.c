#include<stdio.h>
#include<assert.h>
int main(){
  puts("pre assert");
  assert(0);
  puts("post assert");
  return 0;
}
