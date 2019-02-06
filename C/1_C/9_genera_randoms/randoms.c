#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int vegades;
	printf("Quants nombres aleatoris?\n");
	scanf("%d",&vegades);
	srand(vegades*clock());

  int nombreAleatori;
	for(int i=0; i<vegades; i++) {
		nombreAleatori=rand();
		printf("Nombre generat: %d\n",nombreAleatori);
	}
}
