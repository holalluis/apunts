#include <stdio.h>
#include <stdlib.h>

double quota(int edat, char sexe)
{
  //home i dona fins a 19 anys
  if( (sexe == 'h' || sexe == 'd' || sexe == 'n') && edat < 4)
    return 45.47;
  if( (sexe == 'h' || sexe == 'd' || sexe == 'n') && edat >= 4 && edat < 20)
    return 41.82;  
  //home
  if( sexe == 'h' && edat>=20 && edat < 31 )
    return 43.93;
  if( sexe == 'h' && edat>=31 && edat < 41 )
    return 44.78;
  if( sexe == 'h' && edat>=41 && edat < 46 )
    return 51.19;
  if( sexe == 'h' && edat>=46 && edat < 51 )
    return 52.19;
  if( sexe == 'h' && edat>=51 && edat < 56 )
    return 53.68;
  if( sexe == 'h' && edat>=56 && edat < 60 )
    return 56.66;
  if( sexe == 'h' && edat >= 60)
    { printf("\nAvis! Home mes gran de 60 anys!\n"); return 0;}
  //dona
  if( sexe == 'd' && edat>=20 && edat < 31 )
    return 50.73;
  if( sexe == 'd' && edat>=31 && edat < 41 )
    return 53.68;
  if( sexe == 'd' && edat>=41 && edat < 46 )
    return 54.24;
  if( sexe == 'd' && edat>=46 && edat < 51 )
    return 55.28;
  if( sexe == 'd' && edat>=51 && edat < 56 )
    return 57.37;
  if( sexe == 'd' && edat>=56 && edat < 60 )
    return 59.45; 
  if( sexe == 'd' && edat >= 60)
    { printf("\nAvis! Dona mes gran de 60 anys!\n"); return 0;}
}

int main()
{
  system("cls"); //nomes per windows. fer un clear
  int persones;

  printf("PROPOSTA ECONOMICA\n\n");
  printf("Quantes persones? ");
  scanf("%d",&persones);

  char sexe [ persones ];
  int edat [ persones ];
  int i;
  printf("\n");

  for(i = 0; i < persones; i++)
  {
    printf("\tSoci num %d \n",i+1);
    printf("\t\tEdat? ");
    scanf("%d",&edat[i]);
    getchar();
	if(edat[i] >= 20)
	{
	  printf("\t\tSexe (h,d)? ");
	  scanf("%c",&sexe[i]);
	  getchar();
	}
	else
	{
	  sexe[i]='n';
	}
    puts("");
  }
  
  printf("Accidents (s,n)? ");
  char accidents;
  scanf("%c",&accidents);
  getchar();

  printf("Visites   (s,n)? ");
  char visites;
  scanf("%c",&visites);

  //inici document a imprimir
  printf("\n=================== PROPOSTA ECONOMICA ==============================\n\n");
  printf("Prestacio d'Asssistencia Sanitaria Salut Montepio\n\n");	
  printf(" Soci\tEdat\t\tSexe\tQuota mes\tDescompte 20 percent\n");
  for(i=0;i<persones;i++)
     {
      printf("%3d\t%2d anys\t\t%3c\t%6.2lf eur\t", i+1 , edat[i] , sexe[i] , quota( edat[i], sexe[i] )    );
      if(edat[i] < 50)
                 {printf("-%6.2lf eur\n", 0.2*quota(edat[i],sexe[i])  ); }//descompte només si es menor de 50 anys
      else{printf("-  0.00 eur\n");}
     }
     
  double total = 1.20 ;
  double preu_accidents = 0;
  if(accidents == 's')
    {
      for(i=0;i<persones;i++)
	  {
           if(edat[i] > 13)
              preu_accidents = preu_accidents + 4; //4 euros per persona més gran de 13 anys
      }
      total = total + preu_accidents;
    }
  if(visites == 's'){total = total + 0.40*persones ;}

  for(i = 0 ; i < persones ; i++){total = total + quota(edat[i],sexe[i]);}
  
  double total_dte = total;
  
  for(i=0;i<persones;i++)
	total_dte = total_dte - 0.2*quota(edat[i],sexe[i]);
    
  printf   ("\n\t\tQuota soci:\t  1.20 eur\n");
  if ( accidents == 's') 
    printf ("\t\tAccidents:\t%6.2lf eur\n",preu_accidents);
  if ( accidents == 'n')
    printf ("\t\tAccidents:\t    NO\n");
  if ( visites   == 's')
    printf ("\t\tVisites:\t%6.2lf eur\n", persones*0.40);
  if ( visites   == 'n')
    printf ("\t\tVisites:\t    NO\n");
  
  printf("\n                        TOTAL:\t%6.2lf eur\t%6.2lf eur (amb dte)",total,total_dte);
  printf("\n\n\n");
  
  system("pause"); //windows
  return 0;
}
