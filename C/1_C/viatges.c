#include <stdio.h>
#include <stdlib.h>

int main() {
	//demana el nombre de viatgers
  int viatgers;
	printf(">> Quantes persones? ");
	scanf("%d", &viatgers);

  double *aportat = malloc(viatgers*sizeof(double)); //array de doubles
  char **noms = malloc(viatgers*sizeof(char*));      //array de char arrays

  for(int i=0;i<viatgers;i++){
    printf(">> Nom viatger %d: ",i+1);
    noms[i] = malloc(20); //reserva 20 bytes pel nom
    scanf("%s", noms[i]);
  }

  double total=0;	//total gastat entre tots
  double pasta;   //pasta que ha de pagar cadascu

	//pregunta quant ha aportat cadascú
	for(int i=0;i<viatgers;i++){
		printf(">> quantitat aportada per %d (%s): ",i+1,noms[i]);
		scanf("%lf", &aportat[i]);
		total += aportat[i];
	}

  //total
	printf("\nTotal gastat entre tots:\t%3.2lf €\n",total);
  printf("Per persona:              \t%3.2lf €\n",total/viatgers);
		
	//quant ha de cobrar o pagar cadascu
	for(int i=0;i<viatgers;i++){
		pasta = total/viatgers - aportat[i];
		if(pasta<0)
			printf(">> Viatger %d (%s)\t\tha de COBRAR : %.2lf € \n", i+1, noms[i], -pasta);
		else	
			printf(">> Viatger %d (%s)\t\tha de PAGAR  : %.2lf € \n", i+1, noms[i], pasta);
	} 

  //free space
  free(aportat);
  for(int i=0;i<viatgers;i++){free(noms[i]);}
  free(noms);
  return 0;
}
