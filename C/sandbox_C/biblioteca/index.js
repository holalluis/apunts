class Fn{
  constructor(sintaxi, exemple){
    this.sintaxi = sintaxi;
    this.exemple = exemple;
  }
  //mètodes
}

let C={
  "stdio.h":{
    "printf":new Fn(
      "int printf(const char *format, ...);",
      `int main(){
        char* nom  = "lluís";
        int   edat = 31;
        printf("hola em dic %s i tinc %d anys\n",nom,edat);
        return 0;
      }`,
    ),
    "puts":new Fn(
      "int puts(const char *s);",
      `int main(){
        puts("hola em dic lluis");
        return 0;
      }`,
    ),
  },
};
