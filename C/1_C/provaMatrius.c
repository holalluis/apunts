#include <stdio.h>
#include <stdlib.h> //per la funcio system("")

int main(int argc, char **argv) {
  if (argc < 3) {
    printf("us: %s [files] [columnes]\n",argv[0]);
    return -1;
  }


  int files    = atoi(argv[1]);
  int columnes = atoi(argv[2]);
  
  int matriu[files][columnes];
  printf("\n[+] S'ha creat una matriu %dx%d\n\n",files,columnes);
  
  int i, j;
  for (i = 0 ; i < files; i++) {
    for (j = 0 ; j < columnes ; j++) {
      printf("[+] Valor component[%d][%d]? ",i+1,j+1);
      scanf("%d",&matriu[i][j]);
    }
  } 
  
  printf("\n[+] Matriu omplerta\n\n");

  for (i = 0 ; i < files; i++) {  
    printf("(\t");    
    for (j = 0 ; j < columnes ; j++)
      printf("%d\t", matriu[i][j]);
    printf(")\n");
    }
  
  printf("\nAl matlab:\n\n\tN=[ ");

  for (i = 0 ; i < files; i++) {
                for (j = 0 ; j < columnes ; j++)
                        printf("%d ", matriu[i][j]);

    if (i != files-1)
      printf("; ");
        }

  printf("]\n\n");
  
  return 0;
}
