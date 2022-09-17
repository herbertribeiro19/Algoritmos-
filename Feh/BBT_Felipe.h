/*
Struct: Lista
 Operações:
 - lista_inicializar
 - lista_cheia
 - lista_insereFim
 - lista_imprimir
*/
#define tam 20

typedef struct sLista{
  int n;
  char letras;
}Lista;

void iniciarLista(Lista *ptrL){
  ptrL->n =-1;
}

int listaCheia(Lista *ptrL){
  if(ptrL->n < TAML-1)
    return 0;
  else
    return 1;
}

void listaInserir(Lista *ptrL, char c){
  
  if(listaCheia(ptrL) == 0){
    ptrL-> n = ptrL->n+1;
    ptrL->letras[ptrL->n] = c;
  }
  printf("Lista Cheia");
}

void imprimir(Lista *ptrL){
  int i;
  for (i=0; i<= ptrL->n; i++){
      printf("%c ", ptrL->letras[i]);
  }
}
