#include <stdio.h>
#include <stdlib.h>

typedef struct Cell Cell;

struct Cell{
        int item;
        Cell *next;
};


typedef struct{
        Cell *head;
}ListaE;


typedef struct{
       int n_lin;
       ListaE **lin;
}Spa_Mat;


Spa_Mat* criar(int l){
        Spa_Mat* mat = (Spa_Mat*) malloc(sizeof(Spa_Mat));
        int i;

        mat->n_lin = l;
        mat->lin = (ListaE**) malloc(sizeof(ListaE*) * l);

        for (i = 0; i < l; i++){
                mat->lin[i] = (ListaE*) malloc(sizeof(ListaE));
                mat->lin[i]->head = NULL;
        }

        return mat;
}


Cell* criar_celula(int item){
    Cell *nova = (Cell*) malloc(sizeof(Cell));
    nova->item = item;
    nova->next = NULL;

    return nova;
}

int hashF(int chave,int n){
     return chave % n;
}

void imprimir(Spa_Mat* matriz){
    int i;
    Cell* aux;

    for (i = 0; i < matriz->n_lin; i++){
        aux = matriz->lin[i]->head;
           printf("\n%d: ", i);
        
        if(aux == NULL)
             printf("->");
           
        while (aux != NULL){
            printf("-> %d ", aux->item);
            aux = aux->next;
        }
    }
}

int colocar(int chave, Spa_Mat *matriz){
    int pos;
    Cell *aux1,*aux2;
    
    if((matriz != NULL) && (chave > 0)){
        pos = hashF(chave, matriz->n_lin);
        
        
        if(matriz->lin[pos]->head != NULL){
            aux2 = matriz->lin[pos]->head;

            while(aux2->next != NULL)
                aux2 = aux2->next;

            aux1 = criar_celula(chave);
            aux2->next = aux1;
            printf("%d\n", pos);
            
            return 1;
        
    }
        else{
            aux1 = criar_celula(chave);
            matriz->lin[pos]->head = aux1;
            printf("%d\n", pos);
        
        }
    }
    return 0;
}

int main(){
    int n, qnt_chave, chave, i;
    Spa_Mat *matriz;
    
    scanf("%d", &n);
    
    matriz = criar(n);
    
    scanf("%d", &qnt_chave);
    
    for(i = 0; i < qnt_chave; i++){
        scanf("%d", &chave);
        colocar(chave, matriz);
    }
    
    imprimir(matriz);
    
    return 0;
}