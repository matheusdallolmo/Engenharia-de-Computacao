#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct Lista{
    int item[MAX_SIZE];
    int tam; 
}Lista;

Lista* criar_lista(){
    Lista *l = (Lista*) malloc(sizeof(Lista));

    l->tam = 0;

    return l;
}

int lista_vazia(Lista *l){
    return (l == NULL) || (l->tam == 0);
}

int lista_cheia(Lista *l){
    return (l != NULL) && (l->tam == MAX_SIZE);
}

int buscar(Lista *l, int chave){
    int i;

    if (!lista_vazia(l)){
        for (i = 0; i < l->tam; i++)
            if (l->item[i] == chave)
                return i;
    }

    return -1;
}

int inserir(Lista *l, int chave){
    if (l == NULL)
        l = criar_lista();

    if (!lista_cheia(l)){
        l->item[l->tam] = chave;

        l->tam++; 

        return 1;
    }
    return 0;
}

int remover(Lista *l, int chave){
    int i, p = buscar(l, chave);

    if (p > -1){
        for (i = p; i < l->tam - 1; i++)
            l->item[i] = l->item[i + 1];

        l->tam--; 

        return 1;
    }

    return 0;
}

void imprimir_lista(Lista *l){
    int i;

    if (!lista_vazia(l)){
        for (i = 0; i < l->tam; i++)
            if(l->item[i]!=0)
                printf("%d ", l->item[i]);
        printf("\n"); 
    }
}

int liberar_lista(Lista *l){
    if (l != NULL){
        free(l);

        return 1;
    }

    return 0;
}

int main() {
    Lista *l1, *l2, *l3;
    int aux, i;
    
    l1 = criar_lista();
    l2 = criar_lista();
    l3 = criar_lista();
    
    do{
        scanf("%d", &aux);
        if(aux!=-1)
            inserir(l1, aux);
    }while(aux!=-1);
    do{
        scanf("%d", &aux);
        if(aux!=-1)
            inserir(l2, aux);
    }while(aux!=-1);
    
    for(i=l1->tam; i>=0; i--){
        inserir(l3, l1->item[i]);
    }
    for(i=l2->tam; i>=0; i--){
        inserir(l3, l2->item[i]);
    }

    imprimir_lista(l3);
    liberar_lista(l1);
    liberar_lista(l2);
    liberar_lista(l3);

    return 0;
}
