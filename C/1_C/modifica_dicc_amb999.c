#include <stdio.h>

char afegeix(char paraula[40])
 {
  printf("%s\n",paraula);
  int i;  
  for(i=0;i<10;i++)
      printf("%s00%d\n",paraula,i);
  for(i=0;i<100;i++)
      printf("%s0%d\n",paraula,i);
  for(i=0;i<1000;i++)
      printf("%s%d\n",paraula,i);
  return 0;
 }

int main()
{
afegeix("capita");
afegeix("capitans");
afegeix("pirata");
afegeix("pirates");
afegeix("pirata.cat");
afegeix("pirates.cat");
afegeix("piratacatala");
afegeix("piratescatalans");
afegeix("piratapirata");
afegeix("piratespirates");
afegeix("catalunya");
afegeix("catalunyalliure");
afegeix("pensesdiferent");
afegeix("votadiferent");
afegeix("pensesdiferentvotadiferent");
afegeix("isaacasimov");
afegeix("josepjover");

return 0;
}
