#include<stdio.h>
#include"cotxe.h"

Cotxe
new_cotxe(char* nom, unsigned int rodes, unsigned int portes, float vmax){
  Cotxe c;
  c.nom    = nom;
  c.rodes  = rodes;
  c.portes = portes;
  c.vmax   = vmax;
  return c;
}

void
cotxe_to_string(Cotxe* c){
  printf(
    "Cotxe{'%s',rodes:%d,portes:%d,vmax:%f}\n",
    c->nom,
    c->rodes,
    c->portes,
    c->vmax
  );
}
