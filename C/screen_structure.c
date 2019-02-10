#include<stdio.h>
#include<stdlib.h>

typedef struct {
  unsigned char r;
  unsigned char g;
  unsigned char b;
} Pixel;

typedef struct {
  unsigned int width;
  unsigned int height;
  Pixel *data; //array of pixels
} Screen;

Screen * new_screen(int width, int height);
void free_screen(Screen *s);
void print_screen(Screen *s);

int main(){
  Screen *s = new_screen(5,5);
  print_screen(s);
  free_screen(s);
  return 0;
}

Screen * new_screen(int width, int height){
  Screen *s = malloc(sizeof(Screen));;
  s->width  = width;
  s->height = height;
  s->data = malloc(width*height*sizeof(Pixel));

  //omple pixels
  for(int i=0;i<s->height; i++){
    for(int j=0;j<s->width; j++){
      int index = i*s->width + j;
      s->data[index].r = i;
      s->data[index].g = j;
      s->data[index].b = 0;
    }
  }

  return s;
}

void free_screen(Screen *s){
  free(s->data);
  free(s);
}

void print_screen(Screen *s){
  for(int i=0;i<s->height; i++){
    for(int j=0;j<s->width; j++){
      int index = i*s->width + j;
      printf("(%u,%u,%u), ",
        s->data[index].r,
        s->data[index].g,
        s->data[index].b
      );
    }
    printf("\n");
  }
}
