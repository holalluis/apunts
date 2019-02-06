#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    //no hi ha arguments: escolta stdin
    if(argc==1)
    {
			char str[100];
      puts("Escoltant stdin: ");
      scanf("%s",str);
      printf("Has escrit '%s'\n",str);
			printf("Tamany: %d caràcters\n",(int)strlen(str));
    }
    else
    {
        printf("arguments: %d\n",argc);

        for(int i=0; i<argc; i++)
            printf("    argument %d: %s\n",i,argv[i]);
    }

    printf("\n");return 0;
}
