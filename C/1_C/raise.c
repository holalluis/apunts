#include<stdio.h>
#include<stdlib.h>

int raise(int base, int exp) {
  if (exp == 0) return 1;
  else return base * raise(base, exp-1); //recursive
}

int main(int argc, char* argv[]) {
  if (argc < 3) {
    printf("us: %s base exponent\n", argv[0]);
    return -1;  
  }

  int base = atoi(argv[1]);
  int expo = atoi(argv[2]);
  printf("%d\n",raise(base,expo));

return 0;}
