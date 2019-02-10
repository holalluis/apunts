#include<stdio.h>

//creem estructura per un pixel
typedef struct {
  unsigned char r;
  unsigned char g;
  unsigned char b;
} Pixel;

void print_pixel(Pixel p);
void modify_pixel(Pixel *p, unsigned char r, unsigned char g, unsigned char b);

int main(){
  //nou pixel 
  Pixel p = {0, 0, 0};

  //veiem quants bytes ocupa un Pixel
  printf("sizeof(Pixel) = %lu\n", sizeof(Pixel));

  //mostra els valors rgb, modifica'ls
  print_pixel(p);
  modify_pixel(&p, 100, 100, 100);
  print_pixel(p);

  //creem un array de 1000 pixels
  Pixel *screen = malloc(1000 * sizeof(Pixel));

  //canviem el vermell del pixel nº 25
  screen[25].r = 255;

return 0;}

void print_pixel(Pixel p){
  printf("%u %u %u\n",p.r,p.g,p.b);
}

void modify_pixel(Pixel *p, unsigned char r, unsigned char g, unsigned char b){
  p->r = r;
  p->g = g;
  p->b = b;
}
