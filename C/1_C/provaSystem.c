#include <stdio.h>
#include <stdlib.h>

//Exemple de codi per linkar variables de C amb variables del Shell

int main(){
	
	char variableC[10] = "dijous";                  //valor de la variable en C que volem assignar al shell
	
	printf("[+] Prem enter per continuar\n");

	system("read variableShell");			//espera STDIN, que serà el printf seguent
	printf("%s\n",variableC);			//s'assigna al shell
	system("echo avui som $variableShell"); 			//comprova que funciona

return 0;}
