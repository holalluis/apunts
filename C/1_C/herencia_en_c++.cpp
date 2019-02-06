#include <math.h>
#include <stdio.h>

class Particula
{
	public:
	double massa; 		//kg
	double carrega;		//Coulombs
	Particula(){}
};

class Proto : public Particula
{
	public: 
	Proto()
	{
		massa = 	1.6726*pow(10,-27);
		carrega = 	1.6022*pow(10,-19);
	}
};

class Neutro : public Particula
{
	public:
	Neutro()
	{
		massa = 	1.6749*pow(10,-27);
		carrega = 	0;
	}
};

class Electro : public Particula
{
	public:
	Electro()
	{
		massa = 	9.1094*pow(10,-31);
		carrega = 	-1.6022*pow(10,-19);
	}
};

int main()
{
	Neutro n;
	printf("La massa del neutro és de %lf\n",n.massa);
	Proto p;
	printf("La carrega del proto és de %lf\n",p.carrega*10000000000000000000);
	return 0;
}

