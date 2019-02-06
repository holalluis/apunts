#include <stdio.h>
#include <string.h>

int main(){
  //NO DECLAREM UN ARRAY, DECLAREM DIRECTAMENT UN POINTER A CHAR
  //instead of char movie[20] = "movie title"
  char * movie = "Bucky is awesome";

  printf("movie = \"%s\"\n",movie);

  //modifiquem 'movie'
  movie="new title"; //NO HO PODRIEM FER SI HAGUESSIM DECLARAT char movie[20] = "titol peli"

  printf("movie = \"%s\"\n",movie);

  //compta el nombre de lletres
  int n=0;
  for(int i=0; movie[i]; i++){
    printf("movie[%d] = %c\n",i,movie[i]);
    n++;
  }
  printf("length of movie: %d\n",n);
  puts("");

  //tests amb strlen (strlen retorna unsigned long (%lu))
  char * nom1 = "lluis";
  char * nom2 = "aaaaaaaaaaaaaaa";
  char * nom3 = "aa";
  printf("lenght of '%s' is %lu\n", nom1, strlen(nom1));
  printf("lenght of '%s' is %lu\n", nom2, strlen(nom2));
  printf("lenght of '%s' is %lu\n", nom3, strlen(nom3));
  puts("");

  return 0;
}
