#include<stdio.h>

int main(){
  
  char *s1 = "hola";
  printf("s1: %s \n", s1);

  char s2[10] = "hola";
  printf("s2: %s \n", s2);

  //que passa si poses %d a un float
  printf("%d\n", 3.1);

  //imprimir fraccions
  printf("%lf\n", 9/5);
  printf("%lf\n", 9.0/5.0);

  double a = 5 + 5; //suma dos ints
  printf("%f\n", a);

  /*3.3	Formatos de printf (avanzado)
    Formato | Significado
    --------+------------
    %5d     | Entero decimal alineado a la izquierda, ocupando cinco espacios
    %04u    | Entero sin signo ocupando cuatro espacios, y rellenando de ceros a la izquierda si hace falta
    %.2lf   | Número real (doble precisión) con dos y sólo dos decimales
    %5.3d   | Entero ocupando cinco espacios; aparecen tres cifras como mínimo (se rellena de ceros)
*/

return 0;}
