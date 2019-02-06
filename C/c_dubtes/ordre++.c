/*
	veure la diferencia entre i++ i ++i
*/
#include <stdio.h>
int main(){
	puts("Variable a=3");
	int a=3;
	printf("a val %d\n",a);
	printf("++a val %d\n",++a);
	printf("a++ val %d\n",a++);
	printf("a val %d\n",a);

	puts("Bucles:");
	int n=5;
	puts("i++");
	for(int i=0;i<n;i++){ printf("%d ",i); }
	puts("");

	puts("++i");
	for(int i=0;i<n;++i){ printf("%d ",i); }

	return 0;
}
