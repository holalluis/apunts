#include <stdio.h>

/*
The perror() function displays the string you pass to it, followed by a colon, 
a space, and then the textual representation of the current errno value.

The strerror() function, which returns a pointer to the textual representation 
of the current errno value.
*/

int main(){
  
  perror("this is an error");
  
  return 0;
}
