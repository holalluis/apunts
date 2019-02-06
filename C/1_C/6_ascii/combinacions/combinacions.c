#include <stdio.h>
#include <stdlib.h> // atoi()

/* caràcters ASCII útils: els valors van de	   48 a 57      numeros
						   65 a 90	majuscules
		          			   97 a 122	minuscules */
int main (int argc, char *argv[]){
	
	int arg = atoi(argv[1]);

	if (arg <6 || arg>10){perror("Escull un nombre entre 6 i 10");exit(-1);}

	char a,b,c,d,e,f,g,h,i,j;	

// 6 caràcters
if (arg==6){
	for (a=48; a<123; a++){
		if ( a<58 || (a>64 && a<91) || a>96 ){
	for (b=48; b<123; b++){
		if ( b<58 || (b>64 && b<91) || b>96){
	for (c=48; c<123; c++){
		if ( c<58 || (c>64 && c<91) || c>96){
	for (d=48; d<123; d++){
		if ( d<58 || (d>64 && d<91) || d>96){		
	for (e=48; e<123; e++){
		if ( e<58 || (e>64 && e<91) || e>96){								
	for (f=48; f<123; f++){
		if ( f<58 || (f>64 && f<91) || f>96){													
	printf("%c%c%c%c%c%c\n",a,b,c,d,e,f);
	printf("\033[A");											
	}}}}}}}}}}}} 
}

// 7 caràcters
if (arg==7){
	for (a=48; a<123; a++){
		if ( a<58 || (a>64 && a<91) || a>96 ){			
	for (b=48; b<123; b++){
		if ( b<58 || (b>64 && b<91) || b>96){					
	for (c=48; c<123; c++){
		if ( c<58 || (c>64 && c<91) || c>96){						
	for (d=48; d<123; d++){
		if ( d<58 || (d>64 && d<91) || d>96){									
	for (e=48; e<123; e++){
		if ( e<58 || (e>64 && e<91) || e>96){									
	for (f=48; f<123; f++){
		if ( f<58 || (f>64 && f<91) || f>96){	
	for (g=48; g<123; g++){
		if ( g<58 || (g>64 && g<91) || g>96){	
	printf("%c%c%c%c%c%c%c\n",a,b,c,d,e,f,g);											
	}}}}}}}}}}}}}} 
}

// 8 caràcters
if (arg==8){
        for (a=48; a<123; a++){
                if ( a<58 || (a>64 && a<91) || a>96 ){
        for (b=48; b<123; b++){
                if ( b<58 || (b>64 && b<91) || b>96){
        for (c=48; c<123; c++){
                if ( c<58 || (c>64 && c<91) || c>96){
        for (d=48; d<123; d++){
                if ( d<58 || (d>64 && d<91) || d>96){
        for (e=48; e<123; e++){
                if ( e<58 || (e>64 && e<91) || e>96){
        for (f=48; f<123; f++){
                if ( f<58 || (f>64 && f<91) || f>96){
        for (g=48; g<123; g++){
                if ( g<58 || (g>64 && g<91) || g>96){
        printf("%c%c%c%c%c%c%c\n",a,b,c,d,e,f,g);
        }}}}}}}}}}}}}}
}

// 9 caràcters	
if (arg==9){
        for (a=48; a<123; a++){
                if ( a<58 || (a>64 && a<91) || a>96 ){
        for (b=48; b<123; b++){
                if ( b<58 || (b>64 && b<91) || b>96){
        for (c=48; c<123; c++){
                if ( c<58 || (c>64 && c<91) || c>96){
        for (d=48; d<123; d++){
                if ( d<58 || (d>64 && d<91) || d>96){
        for (e=48; e<123; e++){
                if ( e<58 || (e>64 && e<91) || e>96){
        for (f=48; f<123; f++){
                if ( f<58 || (f>64 && f<91) || f>96){
        for (g=48; g<123; g++){
                if ( g<58 || (g>64 && g<91) || g>96){
        for (h=48; h<123; h++){
                if ( h<58 || (h>64 && h<91) || h>96){
        printf("%c%c%c%c%c%c%c%c\n",a,b,c,d,e,f,g,h);
        }}}}}}}}}}}}}}}}
}
	
// 10 caràcters
if (arg==10){
        for (a=48; a<123; a++){
                if ( a<58 || (a>64 && a<91) || a>96 ){
        for (b=48; b<123; b++){
                if ( b<58 || (b>64 && b<91) || b>96){
        for (c=48; c<123; c++){
                if ( c<58 || (c>64 && c<91) || c>96){
        for (d=48; d<123; d++){
                if ( d<58 || (d>64 && d<91) || d>96){
        for (e=48; e<123; e++){
                if ( e<58 || (e>64 && e<91) || e>96){
        for (f=48; f<123; f++){
                if ( f<58 || (f>64 && f<91) || f>96){
        for (g=48; g<123; g++){
                if ( g<58 || (g>64 && g<91) || g>96){
        for (h=48; h<123; h++){
                if ( h<58 || (h>64 && h<91) || h>96){
        for (i=48; i<123; i++){
                if ( i<58 || (i>64 && i<91) || i>96){
        printf("%c%c%c%c%c%c%c%c%c\n",a,b,c,d,e,f,g,h,i);
        }}}}}}}}}}}}}}}}}}
}
	
return 0;}
