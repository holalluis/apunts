#include<stdio.h>
#include<math.h>

int main(){

  int x=10;
  int y=20;
  double z=9;
  
  /* sentencia simple */
  x = y * 5 + (int)z;
  printf("x = %d\n",x);
  printf("y = %d\n",y);
  printf("z = %f\n",z);

  /* sentencia compuesta con llaves */
  {
    int a=1;
    int b=1;

    a = b;
    b = x + 1;
    int num_prod=10;
    printf("hay %d productos\n",num_prod);
  }

  /* sentencias compuestas dentro de otras */
  {
    { x=1; y=2; }
    { z=0; printf("hola\n"); }
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %f\n",z);
  }
  return 0;
}
