#include<math.h>
#include<stdio.h>
#include<stdlib.h> //atoi()

int main(int argc, char *argv[]){
	
	if(argc==1){
		printf("Equció: a·x^2 + b·x + c = 0\n");
		printf("Us: %s [a] [b] [c]\n",argv[0]);
		return 0;
	}

	double a = atoi(argv[1]);
	double b = atoi(argv[2]);
	double c = atoi(argv[3]);
	
	printf(">> Equació:	%lf·x^2 + %lf·x + %lf = 0\n",a,b,c);

	double discriminant = b*b-4*a*c;
		
	if ( discriminant < 0){
		printf("	No solució\n");
	}else{
		puts(">> Solucions:");
		printf("	x1 = %lf\n",(-b+sqrt(b*b-4*a*c))/(2*a));
		printf("	x2 = %lf\n",(-b-sqrt(b*b-4*a*c))/(2*a));
	}

	return 0;
}
