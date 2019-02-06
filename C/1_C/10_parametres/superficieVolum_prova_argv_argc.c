#include <stdio.h>
#include <stdlib.h>   //la funcio atoi() torna el enter d'un string que sigui numero

// manera de cridar el programa: ./superficieVolum <temps_de_simulacio>. i.e: ./superficieVolum 10

int main(int argc, char *argv[]){

	if (argc==1){
		printf("error! Indicar temps de simulacio (ex. ./superficie* 10)\n");
		return 1;
	}

	int radi;
	double relacioSV;	
	double fluxEntrada;

	for (radi=1;radi<=atoi(argv[1]);radi++){
		relacioSV=3.0/radi;
		fluxEntrada=1/relacioSV;
		printf("Radi=%d, Relacio_SV=%lf, flux entrada=%lf\n",radi,relacioSV,fluxEntrada);
	}	

	return 0;
}
