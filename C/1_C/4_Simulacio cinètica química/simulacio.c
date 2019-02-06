/* 
  Programa que simula la cinètica química d'un procés a-->b-->c amb una k de velocitat determinada.
  El programa demana les 2 constants de velocitat, un temps de simulacio i una concentració inicial del compost a.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int temps,TEMPSfinal;       //variables de temps
  double concAinicial;        //variables de concentracio inicial
  double concA, concB, concC; //variables de concentracio en funcio del temps
  double Kab, Kbc;            //constant de velocitat

  system("clear");
  printf("===== Simulacio cinetica a --> b --> c =====\n\n");
  printf("[+] Kab? ");  scanf("%lf",&Kab);
  printf("[+] Kbc? ");  scanf("%lf",&Kbc);

  if(Kab==Kbc){
    printf ("\n[+] ERROR: El valor de Kab no pot ser igual a Kbc\n\n"); 
    return 1;
  }

  //Demana temps i conc inicial de a
  printf("[+] Temps de simulacio? (s)   ");
  scanf("%d",&TEMPSfinal);
  printf("[+] Concentracio inicial [a]? ");
  scanf("%lf",&concAinicial);
  printf("\n");

  for(temps=0;temps<=TEMPSfinal;temps++) {
    //assigna el valor de [a] en funció del temps
    concA = concAinicial * exp(-Kab * temps);
    //assigna el valor de [b] en funció del temps
    concB = (Kab/(Kbc-Kab)) * concAinicial;
    //assigna el valor de [c] en funció del tempsicial * ( exp(-Kab*temps) - exp(-Kbc*temps));
    concC = concAinicial-concA-concB;
    printf("temps = %d\t[a]= %.4lf\t[b]= %.4lf\t[c]= %.4lf\n",temps,concA,concB,concC);
  }   

  printf("\n[+] Fi simulació\n\n");
  return 0;
}
