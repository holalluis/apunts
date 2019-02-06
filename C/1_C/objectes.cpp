#include<stdio.h>

//definim la classe punt
class punt
{
	public:
	float x,y,z;
	//funcions
	punt(float a,float b,float c)
	{
		x=a;y=b;z=c;
	} //constructor
	void mostra()
	{
		printf("Punt 3d: (%f,%f,%f)\n",x,y,z);
	}
};

int main()
{
	punt centre(0,0,0);
	centre.mostra();
	return 0;
}
