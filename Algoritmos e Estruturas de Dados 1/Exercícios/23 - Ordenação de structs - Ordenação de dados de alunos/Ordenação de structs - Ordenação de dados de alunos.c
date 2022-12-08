#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char* nome;
    char* curso;
    float coef;
}Aluno;

struct lista{
    Aluno a[10];
    int qtd;
};

typedef struct lista Lista;

Lista* criar_lista(){
    Lista* li = (Lista*)malloc(sizeof(Lista));
    li->qtd = 0;
    return li;
}

int inserir(Lista* li, Aluno aluno){
    if(li == NULL){
        return -1;
    }
    li->a[li->qtd] = aluno;
    li->qtd++;

    return 1;
}

void bubble(Lista* v, int n){
    int i, j;
    
    Aluno aux;
    
    for(i = n - 1; i > 0; i--){
        for(j = 0; j < i; j++){
            if(strcmp(v->a[j].nome, v->a[j+1].nome) > 0){
                aux = v->a[j];
                v->a[j] = v->a[j+1];
                v->a[j+1] = aux;
            }
            
            if(strcmp(v->a[j].nome, v->a[j + 1].nome) == 0){
                if(v->a[j].matricula > v->a[j + 1].matricula){
                    aux = v->a[j];
                    v->a[j] = v->a[j + 1];
                    v->a[j + 1] = aux;
                }
            }
        }
    }
}    

int main() {
    int n, i;
    
    scanf("%d", &n);
    
    Lista *li = criar_lista();
    Aluno aluno[n];
    
     for(i = 0; i < n; i++){
        aluno[i].nome = (char*)malloc(sizeof(char*) * 50);
        aluno[i].curso = (char*)malloc(sizeof(char*) * 50);
    }
    
    for(i = 0; i < n; i++){
        scanf("%d", &aluno[i].matricula);
        scanf("%s", aluno[i].nome);
        scanf("%s", aluno[i].curso);
        scanf("%f", &aluno[i].coef);
        inserir(li, aluno[i]);
    }
    
     bubble(li, n);
    
    for(i = 0; i < n; i++){
        printf("%s ", li->a[i].nome);
        printf("%d ", li->a[i].matricula);
        printf("%s ", li->a[i].curso);
        printf("%.2f ", li->a[i].coef);
        printf("\n");
    }

    return 0;
}