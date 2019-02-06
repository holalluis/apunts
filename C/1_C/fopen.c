#include<stdio.h>

int main()
{
	FILE *f;
	f = fopen("test.txt","w");
	fprintf(f,	"Hello\n"	);
	fclose(f);
	return 0;
}
