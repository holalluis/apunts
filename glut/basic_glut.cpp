// primer vull dibuixar un quadrat i rotar-lo -- OK
// OBJECTIU: DIBUIXAR UN MODEL AMB 3D AL PASSAR UNA LLISTA DE PUNTS, I ROTAR-LOS
#include <GLUT/glut.h>
#include <iostream>
#include <math.h>
#include <stdio.h>
#define MAX_PUNTS 1000
#define PI 3.1415926535897; 
using namespace std;

//FUNCIONS
void render(void);
void keyboard(unsigned char c, int x, int y);
void mouse(int button, int state, int x, int y);
void rota(int angle);
void estira(double distancia);

//VARIABLES GLOBALS 
int n_punts=0; 

//CLASSES
class Punt
{
	public:
	float x,y,z;
	Punt(){}
	Punt(float X,float Y,float Z)
	{
		x=X;
		y=Y;
		z=Z;
		n_punts++;
	}
};

//VARIABLES GLOBALS 
Punt *punts[MAX_PUNTS];

int main(int argc, char **argv)
{
	//crea 4 punts per fer un quadrat
	punts[0]=new Punt( -0.5, -0.5, 0);
	punts[1]=new Punt( 0.5,  -0.5, 0);
	punts[2]=new Punt( 0.5,  0.5,  0);
	punts[3]=new Punt( -0.5, 0.5,  0);

	//info
	cout << "Hi ha " << n_punts << " punts a l'escena." << endl;
	cout << "Prem les tecles [E] i [R] per rotar la figura." << endl;

	//inicialitzacio open gl
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(640,480);
	glutCreateWindow(argv[0]);
	
	//callbacks
	glutDisplayFunc(render); //callback a la funcio que fa render
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);	

	//comença bucle infinit
	glutMainLoop(); 
	return 0;
}

//definicio de funcions
void keyboard(unsigned char c, int x, int y)
{
	printf("                    \n");
	printf("\033[A");
	cout << "Tecla " << (int)c << endl;
	printf("\033[A");
	int angle = 10;
	GLubyte fly[] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x03, 0x80, 0x01, 0xC0, 0x06, 0xC0, 0x03, 0x60, 
		0x04, 0x60, 0x06, 0x20, 0x04, 0x30, 0x0C, 0x20, 
		0x04, 0x18, 0x18, 0x20, 0x04, 0x0C, 0x30, 0x20,
		0x04, 0x06, 0x60, 0x20, 0x44, 0x03, 0xC0, 0x22, 
		0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22, 
		0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22,
		0x44, 0x01, 0x80, 0x22, 0x44, 0x01, 0x80, 0x22, 
		0x66, 0x01, 0x80, 0x66, 0x33, 0x01, 0x80, 0xCC, 
		0x19, 0x81, 0x81, 0x98, 0x0C, 0xC1, 0x83, 0x30,
		0x07, 0xe1, 0x87, 0xe0, 0x03, 0x3f, 0xfc, 0xc0, 
		0x03, 0x31, 0x8c, 0xc0, 0x03, 0x33, 0xcc, 0xc0, 
		0x06, 0x64, 0x26, 0x60, 0x0c, 0xcc, 0x33, 0x30,
		0x18, 0xcc, 0x33, 0x18, 0x10, 0xc4, 0x23, 0x08, 
		0x10, 0x63, 0xC6, 0x08, 0x10, 0x30, 0x0c, 0x08, 
		0x10, 0x18, 0x18, 0x08, 0x10, 0x00, 0x00, 0x08};
	switch(c)
	{
		case 122:
			glDisable(GL_POLYGON_STIPPLE);
			glutPostRedisplay();
			break;
		case 120:
			glDisable(GL_POLYGON_STIPPLE);
			glEnable(GL_POLYGON_STIPPLE);
			glPolygonStipple (fly);
			glutPostRedisplay();
			break;
		case 97: 	
			glClearColor(1,0,0,0);
			glutPostRedisplay();
			break;
		case 100: 	
			glClearColor(1,1,1,1);
			glutPostRedisplay();
			break;
		case 115: 	
			glClearColor(0,0,0,0);
			glutPostRedisplay();
			break;
		case 113: 	
			glColor3f(1,1,0); glRectf(-0.2,0.1,0.3,-0.1);	
			//glutPostRedisplay();
			break;
		case 114: 	
			rota(angle); 	
			break;
		case 101: 	
			rota(-angle);
			break;
		case 27: 	printf("\n\n"); exit(0); 	break; //surt apretant ESC
		case 116: 	estira(0.01); 	break;
		case 119: 	estira(-0.01); 	break;
	}
}

void estira(double distancia)
{
	punts[0]->x-=distancia;
	punts[0]->y-=distancia;
	punts[1]->x+=distancia;
	punts[1]->y-=distancia;
	punts[2]->x+=distancia;
	punts[2]->y+=distancia;
	punts[3]->x-=distancia;
	punts[3]->y+=distancia;
	glutPostRedisplay();
}
void rota(int angle)
{
	//rota 1 grau
	float a = angle*M_PI/180;
	//variables auxiliars
	float x,y;
	//aplicar matriu rotacio [cos a, -sin a ; sin a, cos a]
	for(int i=0;i<n_punts;i++)
	{
		x = cos(a)*punts[i]->x - sin(a)*punts[i]->y;
		y = sin(a)*punts[i]->x + cos(a)*punts[i]->y;
		punts[i]->x = x;
		punts[i]->y = y;
	}
	glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
	if (button==GLUT_RIGHT_BUTTON) 
		exit(0);
}

void eixos(void)
//mostra eixos de coordenades
{
	glBegin(GL_LINES);
		glColor3f(1,1,1);
		glVertex2f(-10,0); glVertex2f(10,0);
		glVertex2f(0,-10); glVertex2f(0,10);
	glEnd();
}
void render(void)
{
	glClear(GL_COLOR_BUFFER_BIT); //clear
	//posa eixos
	eixos();
	//dibuixa quadrats

	glBegin(GL_POLYGON);
		glColor3f(1,1,0);
		//for (int i=0;i<n_punts;i++) glVertex3f( punts[i]->x, punts[i]->y, punts[i]->z );
		glVertex3f( punts[0]->x, punts[0]->y, punts[0]->z );
		glColor3f(1,0,0);
		glVertex3f( punts[1]->x, punts[1]->y, punts[1]->z );
		glColor3f(0,1,0);
		glVertex3f( punts[2]->x, punts[2]->y, punts[2]->z );
		glColor3f(0,0,1);
		glVertex3f( punts[3]->x, punts[3]->y, punts[3]->z );
	glEnd();
	double circle_points = 35; 
	glBegin(GL_LINE_LOOP); 
	for (int i = 0; i < circle_points; i++) {    
		double angle = 2 * 3.1415926535 * i/ circle_points; 
		glVertex2f(cos(angle), sin(angle)); 
	} 
	glEnd();

	glutSwapBuffers(); // envia a la pantalla
}

