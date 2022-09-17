#include <stdio.h>
#include "BBT_Gabriel.h"

int main(){
  LISTA lista;

  lista_inicializar(&lista);
  lista_insereFim(&lista, A);
  lista_insereFim(&lista, B);
  lista_insereFim(&lista, C);
  lista_insereFim(&lista, D);
  lista_imprimir(&lista);
  
  return 0;
}
