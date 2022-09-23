#include <stdio.h>
#include <stdlib.h>
#include "BBT_Pedro.h"
    
int main(){
 Lista lista;
  lista_inicializar(&lista);
  lista_insereFim(&lista, 'A');
  lista_insereFim(&lista, 'B');
  lista_insereFim(&lista, 'C');
  lista_insereFim(&lista, 'D');
  lista_insereFim(&lista, 'E');
  lista_insereFim(&lista, 'F');
  lista_insereFim(&lista, 'G');  
  lista_insereFim(&lista, 'H');
  lista_insereFim(&lista, 'I');
  lista_insereFim(&lista, 'J');
  lista_insereFim(&lista, 'a');
  lista_insereFim(&lista, 'b');
  lista_insereFim(&lista, 'c');
  lista_insereFim(&lista, 'd');
  lista_insereFim(&lista, 'e');
  lista_insereFim(&lista, 'f');
  lista_insereFim(&lista, 'g');
  lista_insereFim(&lista, 'h');
  lista_insereFim(&lista, 'i');
  lista_insereFim(&lista, 'j');
  lista_insereFim(&lista, 'x');
  lista_imprimir(&lista);
  
  return 0;
 }