#define TMAX 100

typedef struct sLista{
        char elem[50];
}lista;

typedef struct sNO{
        int tam;
        struct sLista lista [TMAX], prox;
}NO;

void lista_inicializar (NO *ptr){
     ptr -> tam = 0;
}

int lista_vazia(NO *ptr){
    if (ptr-> tam == -1){
       return 1;
    }else{
       return 0;
    }
}

NO* inserirInicio(NO *ptr){
    if (ptr == NULL){
        printf ("A LISTA NAO FOI ALOCADA!");
        return ptr;
    }

    int i, n=0;
    ptr->tam++;
    for (i = ptr->tam;i>=0;i--){
        (ptr->lista[i+1] = ptr->lista[i]);
    }

    printf ("Digite um caracter: ");
    scanf ("%[^\n]", ptr->lista[n].elem);
    fflush(stdin);
return ptr;
}

void removeNo(NO *ptr){
     NO aux;
     if(!lista_vazia(lista)){
        aux = ptr;
        while(aux -> elem != NULL){
            lista = aux -> elem;
            aux = lista;
        }
        lista = NULL;
     }
}
