#define TAML20
typedef struct sLista{
char Letras[TAML20];
int n;
}LISTA;

void lista_inicializar(LISTA *ptrL){
  ptrL ->n = -1;
  
}

void lista_cheia(LISTA *ptrL){
  if (prtL ->n <= TAML -1){
    return 0;
}
  return 1;
}

void lista_inserir(LISTA *ptrL, char c){
  if(lista_cheia(ptrL)==0){
    prtL ->n = prtL ->n +1;
    prtL -> letras [ptrL -> n] = c;
    }
}

void lista_imprimir(LISTA *ptrL){
int i 
  for(i=0. i<=ptrL-n; i++){
  printf("%c", ptrL->Letras[i]);
  }
}
return 0;


  
}






