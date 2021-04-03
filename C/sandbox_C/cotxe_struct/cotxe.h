/*classe*/
typedef struct {
  char*        nom;    //8
  unsigned int rodes;  //4
  unsigned int portes; //4
  float        vmax;   //8
} Cotxe;

/*mètodes*/

//crea nou cotxe
Cotxe
new_cotxe(char* nom, unsigned int rodes, unsigned int portes, float vmax);

//print cotxe info
void
cotxe_to_string(Cotxe* c);
