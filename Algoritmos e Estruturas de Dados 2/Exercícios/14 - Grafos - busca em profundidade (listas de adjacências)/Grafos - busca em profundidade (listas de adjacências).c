#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/***************************************************************/
typedef struct Cell Cell;
typedef struct Lista Lista;
typedef struct GrafoLA GrafoLA;


struct Cell{
    int key;
    struct Cell *next;
};


struct Lista{
    Cell *head;
};

struct GrafoLA{
    int V;
    int A;
    int *cor;
    int *pai;
    int *d;
    int *f;
    Lista **adj;
};
/***************************************************************/
// Lista encadeada

Lista* criar_lista(){
    Lista* l = (Lista*) malloc(sizeof(Lista));

    l->head = NULL;

    return l;
}


Cell* criar_celula(int key){
    Cell *c = (Cell*) malloc(sizeof(Cell));
    c->key = key;

    c->next = NULL;

    return c;
}

int lista_vazia(Lista *l){
    return (l == NULL) || (l->head == NULL);
}


int procurar(int key, Lista *l){
    Cell *aux = NULL;

    if (l != NULL){
        aux = l->head;

        while ((aux != NULL) && (key < aux->key))
            aux = aux->next;
    }

    if ((aux != NULL) && (key == aux->key))
        return 1;
    else
        return 0;
}


void inserir_na_lista(int key, Lista *l){
    Cell *auxA, *auxP;
    Cell* c;

    if (lista_vazia(l)){
        if (l == NULL)
            l = criar_lista();

        l->head = criar_celula(key);
    }else{
        c = criar_celula(key);

        if (l->head->key >= key){
           c->next = l->head;


           l->head = c;
        }else{
            auxA = l->head;
            auxP = auxA;

            while ((auxP != NULL) && (auxP->key < key)){
                auxA = auxP;
                auxP = auxP->next;
            }

            auxA->next = c;
            c->next = auxP;
        }
    }
}


int remover_na_lista(int key, Lista *l){
    Cell *auxA, *auxP;

    if (!lista_vazia(l)){
        auxA = l->head;

        if(auxA->key == key)
            l->head = l->head->next;
        else{
            auxP = auxA;

            while((auxA != NULL) && (key < auxA->key)){
                auxP = auxA;
                auxA = auxA->next;
            }

            if (auxA->key == key)
                auxP->next = auxA->next;
            else
                auxA = NULL;
        }

        if (auxA != NULL)
            free(auxA);

        return 1;
    }

        return 0;
}


void imprimir(Lista *l){
    Cell *aux;

    if (!lista_vazia(l)){
        aux = l->head;

        while (aux != NULL){
            printf("%d\n", aux->key);

            aux = aux->next;
        }
    }
}


int liberar_lista(Lista *l){
    Cell *aux;

    if ((l != NULL) && !lista_vazia(l)){

        while(l->head != NULL){
            aux = l->head;

            l->head = aux->next;

            free(aux);
        }

        free(l);

        return 1;
    }

    return 0;
}


/***************************************************************/
// Grafo

static Lista** iniciar_LA(int n){
    int i;
    Lista **adj = (Lista**) malloc(n * sizeof(Lista*));

    for (i = 0; i < n; i++)
        adj[i] = criar_lista();

    return adj;
}


GrafoLA* iniciar_grafoLA(int v){
    GrafoLA* G = (GrafoLA*) malloc(sizeof(GrafoLA));

    G->V = v;
    G->A = 0;

    G->cor = malloc(sizeof(int) * v);
    G->pai = malloc(sizeof(int) * v);
    G->d = malloc(sizeof(int) * v);
    G->f = malloc(sizeof(int) * v);

    G->adj = iniciar_LA(G->V);

    return G;
}


int aresta_existeLA(GrafoLA* G, int v1, int v2){
    if ((G!= NULL) && (G->adj[v1]->head != NULL))
        return procurar(v2, G->adj[v1]);

    return 0;
}


void inserir_arestaLA(GrafoLA* G, int v1, int v2){
    if (!aresta_existeLA(G, v1, v2)){
        inserir_na_lista(v2, G->adj[v1]);
        inserir_na_lista(v1, G->adj[v2]);
        G->A++;
    }
}


void remover_arestaLA(GrafoLA* G, int v1, int v2){
    if (aresta_existeLA(G, v1, v2)){
        remover_na_lista(v2, G->adj[v1]);
        remover_na_lista(v1, G->adj[v2]);
        G->A--;

    }
}


void imprimir_arestasLA(GrafoLA* G){
    int i;
    Cell *aux;

    if (G != NULL)
        for (i = 0; i < G->V; i++){
            aux = G->adj[i]->head;

            while (aux != NULL){
                printf("(%d, %d)\n", i, aux->key);

                aux = aux->next;
            }

        }
}


void liberarGLA(GrafoLA* G){
    int i;

    if (G != NULL){
        for (i = 0; i < G->V; i++)
            liberar_lista(G->adj[i]);

        free(G);
    }
}

void visitar_vertice(GrafoLA *G, int u, int *tempo){
    int v;
    
    G->cor[u] = 1;
    *tempo = *tempo + 1;
    G->d[u] = *tempo;

    Cell *aux = G->adj[u]->head;
    
    while(aux != NULL){
        v = aux->key;

        if(G->cor[v] == 0){
            G->pai[v] = u;
            visitar_vertice(G, v, tempo);
        }
        aux = aux->next;
    }
    G->cor[u] = 2;
    *tempo = *tempo + 1;
    G->f[u] = *tempo;
}

void busca_profundidade(GrafoLA *G){
    int u, tempo = 0;

    for(u = 0; u < G->V; u++){
        G->cor[u] = 0;
        G->pai[u] = -1;
    }

    for(u = 0; u < G->V; u++){
        if(G->cor[u] == 0){
            visitar_vertice(G, u, &tempo);
        }
    }
}

void imprimir_resultados_busca(GrafoLA *G){
    int v;
    
    if(G != NULL){
        printf("v d f p\n");
        
        for(v = 0; v < G->V; v++){
            printf("%d %d %d ", v, G->d[v], G->f[v]);
            
            if(G->pai[v] >= 0)
                printf("%d\n", G->pai[v]);
            else
                printf("-\n");
        }
    }
}

int main(){
    int n, v, i, j;
    GrafoLA *G;

    scanf("%d", &n);

    G = iniciar_grafoLA(n);

    for(i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &v);
            if(v != -1)
                inserir_arestaLA(G, i, v);
        }
    }

    busca_profundidade(G);

    imprimir_resultados_busca(G);
    
    return 0;
}