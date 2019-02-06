# include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){

int tamany = atoi(argv[1]);

int array[tamany];

int i;

for ( i=0 ; i<tamany ; i++ ){
	printf("Escriu un enter: ");scanf("%d",&array[i]);
}

for ( i=0 ; i<tamany ; i++ ){
	printf("array[%d]: %d\n",i,array[i]);
}

printf("Tamany: %ll \n",sizeof(array));

return 0;}
