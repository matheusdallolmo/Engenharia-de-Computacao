#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#define TAM_MAX 100

typedef struct Fila Fila;

struct Fila{
    int item[TAM_MAX];
    int ini;
    int fim;
    int tam;
};


Fila* criar_fila(){
    Fila *f = (Fila*) malloc(sizeof(Fila));

    f->ini = -1;
    f->fim = -1;
    f->tam = 0;

    return f;
}


int fila_cheia(Fila *f){

    if (f == NULL)
        return -1;
    else if (f->tam < TAM_MAX)
        return 0;
    else
        return 1;
}


int fila_vazia(Fila *f){
    if (f == NULL)
        return -1;
    else if (f->tam > 0)
        return 0;
    else
        return 1;
}


int enfileirar(Fila *f, int chave){
    if (f == NULL)
        f = criar_fila();
    
    if (!fila_cheia(f)){
        if (f->ini < 0)
            f->ini = 0;
        
        if (f->fim < TAM_MAX - 1)
            f->fim++;
        else
            f->fim = 0;

        f->item[f->fim] = chave;

        f->tam++;

        return 1;
    }

    return 0;
}


int desenfileirar(Fila *f){
    int item = INT_MIN;

    if (!fila_vazia(f)){
        item = f->item[f->ini];

        if (f->ini < TAM_MAX - 1)
            f->ini++;
        else
            f->ini = 0;

        f->tam--;

        if (f->tam == 0){
            f->ini = -1;
            f->fim = -1;
        }
    }

    return item;
}


void imprimir_fila(Fila *f){
    Fila aux = *f;
    int item;

    while (!fila_vazia(&aux)){
        item = desenfileirar(&aux);

        printf("%d ", item);
    }
    
    printf("\n");
}

void liberar_fila(Fila *f){
    if (f != NULL)
        free(f);
}

int main() {
    Fila *E1, *E2, *E3, *R;
    int aux, i;
    
    E1 = criar_fila();
    E2 = criar_fila();
    E3 = criar_fila();
    R = criar_fila();
    
    do{
        scanf("%d", &aux);
        if(aux!=-1)
            enfileirar(E1, aux);
    }while(aux!=-1);
    do{
        scanf("%d", &aux);
        if(aux!=-1)
            enfileirar(E2, aux);
    }while(aux!=-1);
    do{
        scanf("%d", &aux);
        if(aux!=-1)
            enfileirar(E3, aux);
    }while(aux!=-1);
    
    do{
        for(i=0;i<3;i++){
            if(!fila_vazia(E1))
               enfileirar(R,desenfileirar(E1));
        }
        for(i=0;i<3;i++){
            if(!fila_vazia(E2))
               enfileirar(R,desenfileirar(E2));
        }
        for(i=0;i<3;i++){
            if(!fila_vazia(E3))
               enfileirar(R,desenfileirar(E3));
        }
    }while((!fila_vazia(E1)) || (!fila_vazia(E2)) || (!fila_vazia(E3)));
       
    imprimir_fila(R);
    liberar_fila(E1);
    liberar_fila(E2);
    liberar_fila(E3);
    liberar_fila(R);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
