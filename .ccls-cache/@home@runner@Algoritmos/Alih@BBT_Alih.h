#include <stdio.h>
#include <stdlib.h>
typedef struct sLista{
char Letras;
int n;
}LISTA;

void lista_inicializar(LISTA *ptrL){
  ptrL ->n = -1;
}
void lista_vazia(LISTA *ptrL){
  if (prtL == NULL){
    return 1;
}
return 0;
}
void lista_inserir(LISTA *ptrL, char c){
  if(lista_vazia(ptrL)==0){
    prtL ->n = prtL ->n +1;
    prtL -> letras [ptrL -> n] = c;
    }
}
void lista_apagarNos(NO *ptrL);
NO *aux;
  if(!lista_vazia(*prtL));
aux = *lista;
while(aux -> prox != NULL){
*lista = aux -> prox;
desalocarNo(aux);
aux = *lista;
}
*lista = NULL;
}



return 0;


  
}






