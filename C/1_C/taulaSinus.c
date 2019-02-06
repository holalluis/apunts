#include <math.h>
#include <stdio.h>

int main() {
  puts("Angle\t\tSinus\t\tCosinus\t\tTangent");
  puts("-------------------------------------------------------");

  double sinus,cosinus,tangent;

  for(int i=0;i<=360;i+=15){
    sinus   = sin((double)i*M_PI/180.0);
    cosinus = cos((double)i*M_PI/180.0);
    tangent = sinus/cosinus;
    printf("%dº\t\t%lf\t%lf\t%lf\n",i,sinus,cosinus,tangent);
  }

  return 0;
}
