#include <stdio.h>
#include <stdbool.h>

int main(){
  puts("Sizes of data types");

  int s_bool    = sizeof(bool);        // 8  bits
  int s_char    = sizeof(char);        // 8  bits
  int s_short   = sizeof(short);       //16  bits
  int s_int     = sizeof(int);         //32  bits
  int s_float   = sizeof(float);       //32  bits
  int s_long    = sizeof(long);        //64  bits
  int s_llong   = sizeof(long long);   //64  bits
  int s_double  = sizeof(double);      //64  bits
  int s_ldouble = sizeof(long double); //128 bits

  printf("Type         \t bytes \t bits\n");
  printf("bool:        \t %d \t %d\n", s_bool ,   8*s_bool   );
  printf("char:        \t %d \t %d\n", s_char  ,  8*s_char   );
  printf("short:       \t %d \t %d\n", s_short ,  8*s_short  );
  printf("int:         \t %d \t %d\n", s_int   ,  8*s_int    );
  printf("float:       \t %d \t %d\n", s_float ,  8*s_float  );
  printf("long:        \t %d \t %d\n", s_long  ,  8*s_long   );
  printf("long long:   \t %d \t %d\n", s_llong ,  8*s_llong  );
  printf("double:      \t %d \t %d\n", s_double,  8*s_double );
  printf("long double: \t %d \t %d\n", s_ldouble, 8*s_ldouble);
}
