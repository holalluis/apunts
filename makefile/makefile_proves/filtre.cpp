#include <stdio.h>
#include <string.h>

int main()
{
	puts("Aquest programa retorna les linies que s'hi passen per stdin");
	puts("Si rep la paraula 'quit', finalitza");
	puts("Programa compilat amb make");
	char linia[80];
	while(true)
	{
		scanf("%s",linia);
		if(strcmp(linia,"quit")==0)
			break;
		printf(">> Has escrit %s\n",linia);
	}
	return 0;
}
