#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct Matriz Matriz;
typedef struct no NO;
typedef NO* Lista;

struct Matriz{
    int linha;
    int coluna;
    Lista* prox;
};

struct no{
    int valor;
    int coluna;
    NO* prox;
};

Matriz* criar(int linha, int coluna){
    int i;
    Matriz* esparsa = (Matriz*)malloc(sizeof(Matriz));
    esparsa->linha = linha;
    esparsa->coluna = coluna;
    esparsa->prox = (Lista*)malloc(linha * sizeof(Lista));

    for(i = 0; i < linha; i++){
        esparsa->prox[i] = NULL;
    }
    return esparsa;
}

int converter(Matriz* esparsa, int Valor, int linha, int coluna){
    Lista antes = NULL;
    Lista atual = esparsa->prox[linha];
    
    while(atual != NULL && atual->coluna < coluna){
        antes = atual;
        atual = atual->prox;
    }
    if(atual != NULL && atual->coluna == coluna){
        atual->valor = Valor;
    }
    else{
        Lista Elem = (Lista)malloc(sizeof(NO));
        Elem->valor = Valor;
        Elem->coluna = coluna;
        Elem->prox = atual;

        if(antes == NULL){
            esparsa->prox[linha] = Elem;
        }
        else{
            antes->prox = Elem;
        }
    }
    return 1;
}

int conferir(Matriz* esparsa, int linha, int coluna, int p){
    Lista atual = esparsa->prox[linha];
    
    while(atual != NULL && atual->coluna < coluna){
        atual = atual->prox;
    }
    if(atual != NULL && atual->coluna == coluna){
        if(linha != atual->coluna){
            p++;
        }
    }
    return p;
}

int main() {
    int tam, i, j, p = 0;
    
    scanf("%d", &tam);

    int matriz[tam][tam];
    
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    Matriz* esparsa = criar (tam, tam);

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            if(matriz[i][j] != 0){
                 converter(esparsa, matriz[i][j], i, j);
            }
        }
    }

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
           p = conferir(esparsa, i, j, p);
        }
    }
    
    if(p == 0){
        printf("diagonal");
    }
    else{
        printf("nao diagonal");
    }
    return 0;
}