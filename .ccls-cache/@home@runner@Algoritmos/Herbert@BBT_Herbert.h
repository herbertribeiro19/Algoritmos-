#define TAM 20

typedef struct sLista{
   char list[TAM];
   int n;
}Lista;

void lista_inicializar(Lista *ptrL){
     ptrL -> n = -1;
}

int lista_cheia(Lista *ptrL){
     if(ptrL -> n <= TAM-1){
        return 0;
     }
     return 1;
}

void lista_inserir(Lista *ptrL, char c){
       if (lista_cheia(ptrL)==0){
          ptrL -> n = ptrL-> n+1;
          ptrL-> list[ptrL->n] = c;
       }
}

void lista_imprimir(Lista *ptrL){
  int i;
  for (i=0; i<= ptrL->n; i++){
      printf("%c ", ptrL->list[i]);
  }
}
