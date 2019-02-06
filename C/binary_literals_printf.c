#include <stdio.h>

int main(){
  
  puts("proves en binari");
  
  //print 4+1=0b101 which is 5
  printf("%d\n", 0b100 + 0b001);

  //print 5|3 which is 7
  printf("%d\n", 0b101 | 0b011);

  //print 7&3 which is 0b011 = 3
  printf("%d\n", 0b111 & 0b011);

  return 0;
}
