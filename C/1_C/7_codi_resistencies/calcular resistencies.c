#include<stdio.h>
#include<strings.h>

int main()
{
	char primer[10];
	char segon[10];
	char tercer[10];

	printf(">> Escriu els tres colors:\n");
	printf(">> 1er: ");
	fgets( primer, 10, stdin);
	printf(">> 2n: ");
	fgets( segon,  10, stdin);
	printf(">> 3er: ");
	fgets( tercer, 10, stdin);

	printf(">> Resistència: ");

//imprimir primera xifra

	if( strcmp( primer, "marro\n" )   == 0)
        	printf("1");
	if( strcmp( primer, "vermell\n" ) == 0)
        	printf("2");
	if( strcmp( primer, "taronja\n" ) == 0)
        	printf("3");
	if( strcmp( primer, "groc\n" )    == 0)
        	printf("4");
	if( strcmp( primer, "verd\n" )    == 0)
        	printf("5");
	if( strcmp( primer, "blau\n" )    == 0)
        	printf("6");
	if( strcmp( primer, "lila\n" )    == 0)
        	printf("7");
	if( strcmp( primer, "gris\n" )    == 0)
        	printf("8");
	if( strcmp( primer, "blanc\n" )   == 0)
        	printf("9");

//imprimr segona xifra

if( strcmp( segon, "negre\n" )   == 0)
	printf("0");
if( strcmp( segon, "marro\n" )   == 0)
        printf("1");
if( strcmp( segon, "vermell\n" ) == 0)
        printf("2");
if( strcmp( segon, "taronja\n" ) == 0)
        printf("3");
if( strcmp( segon, "groc\n" )    == 0)
        printf("4");
if( strcmp( segon, "verd\n" )    == 0)
        printf("5");
if( strcmp( segon, "blau\n" )    == 0)
        printf("6");
if( strcmp( segon, "lila\n" )    == 0)
        printf("7");
if( strcmp( segon, "gris\n" )    == 0)
        printf("8");
if( strcmp( segon, "blanc\n" )   == 0)
        printf("9");

//imprimr multiplicador

if( strcmp( tercer, "negre\n" ) == 0)
        printf(" no");
if( strcmp( tercer, "marro\n" ) == 0)
        printf("0 ohms");
if( strcmp( tercer, "vermell\n" ) == 0)
        printf("00 ohms");
if( strcmp( tercer, "taronja\n" ) == 0)
        printf(".000 ohms");
if( strcmp( tercer, "groc\n" ) == 0)
        printf("0.000 ohms");
if( strcmp( tercer, "verd\n" ) == 0)
        printf("00.000 ohms");
if( strcmp( tercer, "blau\n" ) == 0)
        printf(".000.000 ohms");
if( strcmp( tercer, "lila\n" ) == 0)
        printf("0.000.000 ohms");
if( strcmp( tercer, "gris\n" ) == 0)
        printf("00.000.000 ohms");
if( strcmp( tercer, "blanc\n" ) == 0)
        printf(".000.000.000 ohms");

printf("\n");

//fi
return 0;
}