/* 
 * getchar example code
 * http://code-reference.com/c/stdio.h/getchar
 */

#include <stdio.h> /* including standard library */
//#include <ctype.h>

int main(){
  int ch;
  puts("type . to end your input:");

  while ((ch = getchar()) != '.'){
    putchar(ch);
  }

  return 0;
}
