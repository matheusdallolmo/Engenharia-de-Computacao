#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>

typedef struct Cell Cell;

typedef struct PilhaE PilhaE;

typedef struct FilaE FilaE;

struct Cell{
    int item;
    Cell *next;
};


struct PilhaE{
    Cell *topo;
};

struct FilaE{
    Cell *inicio;
    Cell *fim;
};


Cell* criar_celula(int key){
    Cell *c = (Cell*) malloc(sizeof(Cell));
    c->item = key;

    c->next = NULL;

    return c;
}


PilhaE* criar_pilhaE(){
    PilhaE* p = (PilhaE*) malloc(sizeof(PilhaE));

    p->topo = NULL;

    return p;
}


int pilhaE_vazia(PilhaE *p){
    return (p == NULL) || (p->topo == NULL);
}


void empilhar(int key, PilhaE *p){
    Cell *aux;

    if (p == NULL)
        p = criar_pilhaE();

    aux = criar_celula(key);

    aux->next = p->topo;

    p->topo = aux;
}


int desempilhar(PilhaE *p){
    Cell *aux;
    int item = ' ';

    if (!pilhaE_vazia(p)){
        aux = p->topo;
        
        item = aux->item;

        p->topo = aux->next;

        free(aux);
    }

    return item;
}


int liberar_pilha(PilhaE *p){
    if (p != NULL){
        while (!pilhaE_vazia(p))
            desempilhar(p);

        free(p);

        return 1;
    }

    return 0;
}


FilaE* criar_filaE(){
    FilaE *f = (FilaE*) malloc(sizeof(FilaE));
    
    f->inicio = NULL;
    f->fim = NULL;
    
    return f;
}


int filaE_vazia(FilaE* f){
    return (f == NULL) || (f->inicio == NULL);
}


void enfileirar(int key, FilaE* f){
    Cell *aux;

    if (f == NULL)
        f = criar_filaE();

    aux = criar_celula(key);

    if (f->inicio == NULL)
        f->inicio = f->fim = aux;
    else{
        f->fim->next = aux;
        f->fim = f->fim->next;
    }

}


int desenfileirar(FilaE* f){
    Cell *aux;
    int item = -INT_MAX;

    if (!filaE_vazia(f)){
        aux = f->inicio;

        f->inicio = aux->next;
        
        item = aux->item;

        free(aux);
    }

    return item;
}


void imprimir_fila(FilaE* f){
    Cell *aux;

    if (!filaE_vazia(f)){
        aux = f->inicio;

        while (aux != NULL){
            printf("%d ", aux->item);
            aux = aux->next;
        }
        
        printf("\n");
    }
}


int liberar_filaE(FilaE* f){
    if (!filaE_vazia(f)){
        while (f->inicio != NULL)
            desenfileirar(f);

        free(f);

        return 1;
    }

    return 0;
}

FilaE* intercalar (FilaE *f1, FilaE *f2){
    FilaE *f3;
    int a, b;
    
    f3 = criar_filaE();
    
    while(!filaE_vazia(f1) && !filaE_vazia(f2)){
        a = desenfileirar(f1);
        b = desenfileirar(f2);
            
        if (a > b){
            enfileirar(a, f3);
            enfileirar(b, f3);
        }else{
            enfileirar(b, f3);
            enfileirar(a, f3);
            }
    }
    
    while(!filaE_vazia(f1))
        enfileirar(desenfileirar(f1), f3);
    
    while(!filaE_vazia(f2))
        enfileirar(desenfileirar(f2), f3);
    
    return f3;
    liberar_filaE(f3);
}

int main() {
    FilaE *f1, *f2, *f3;
    int a;
    
    f1 = criar_filaE();
    f2 = criar_filaE();
    f3 = criar_filaE();
    
    a = 0;
    while(a != -1){
        scanf("%d", &a);
        
        if(a != -1)
            enfileirar(a, f1);
    }
    a = 0;
    while(a != -1){
        scanf("%d", &a);
        
        if(a != -1)
            enfileirar(a, f2);
    }

    f3 = intercalar(f1, f2);
    
    imprimir_fila(f3);
    
    liberar_filaE(f1);
    liberar_filaE(f2);
    liberar_filaE(f3);
    
    return 0;
}