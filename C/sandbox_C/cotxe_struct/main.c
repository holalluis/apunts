#include<stdio.h>
#include"cotxe.h"

/*main*/
int
main(){
  printf("sizeof(char)         = %d\n", sizeof(char));
  printf("sizeof(int)          = %d\n", sizeof(int));
  printf("sizeof(float)        = %d\n", sizeof(float));
  printf("sizeof(double)       = %d\n", sizeof(double));
  printf("sizeof(Cotxe)        = %d\n", sizeof(Cotxe));
  printf("sizeof(Cotxe*)       = %d\n", sizeof(Cotxe*));
  printf("sizeof(char*)        = %d\n", sizeof(char*));
  printf("sizeof(unsigned int) = %d\n", sizeof(unsigned int));

  puts(">> un sol objecte:");
  Cotxe c = new_cotxe("bmw",4,5,220);
  printf("sizeof(c) = %d\n", sizeof(c));
  cotxe_to_string(&c);

  //array objectes
  puts(">> array objectes");
  Cotxe cotxes[5]={
    new_cotxe("audi",   4,3,200),
    new_cotxe("opel",   4,5,150),
    new_cotxe("seat",   4,5,170),
    new_cotxe("mclaren",4,3,300),
    new_cotxe("ferrari",4,3,310),
  };
  printf("sizeof(cotxes) = %d\n", sizeof(cotxes));

  for(int i=0;i<5;i++){
    cotxe_to_string(&cotxes[i]);
  }

  return 0;
}
