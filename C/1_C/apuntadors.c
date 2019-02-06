#include <stdio.h>

void intercanvi(int *,int *);

int main(){

	int x=1,y=2;

	printf("x=%d y=%d \n",x,y);
	
	intercanvi(&x,&y);
	
	printf("x=%d y=%d \n",x,y);


return 0;}

void intercanvi(int *a, int *b){

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
