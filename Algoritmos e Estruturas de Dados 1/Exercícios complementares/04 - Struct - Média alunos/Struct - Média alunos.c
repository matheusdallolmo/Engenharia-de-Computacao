#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int RA;
    char nome[255];
    float notas[3];
}aluno;

float media(float vf[], int n){
    int i;
    float soma = 0.0;
    
    for(i=0; i < 3; i++)
        soma += vf[i];
    
    return soma / 3;
}

void resultado(aluno v[], int n){
    int i;
    
    for(i = 0; i < n; i++)
        if (media(v[i].notas, 3) >= 6.0)
            printf("Aprovado!\n");
        else
            printf("Reprovado!\n");
}

void maior(aluno v[], int n){
    int i;
    int p_m = 0;
    float m = media(v[0].notas, 3);
    float aux;
    
    for(i = 1; i < n; i++){
        aux = media(v[i].notas, 3);
        
        if(aux > m){
            p_m = i;
            m = aux;
        }
    }
    printf("O aluno com maior media e: %d %s %.1f\n", v[p_m].RA, v[p_m].nome, m);
}

void menor(aluno v[], int n){
    int i;
    int p_menor = 0;
    float aux;
    float m = media(v[0].notas, 3);
    
    for(i = 1; i < n; i++){
        aux = media(v[i].notas, 3);
        
        if(aux < m){
            p_menor = i;
            m = aux;
        }
    }
    printf("O aluno com menor media e: %d %s %.1f\n", v[p_menor].RA, v[p_menor].nome, m);
}

void maior_P1(aluno v[], int n){
    int i;
    int p_m = 0;
    float m = v[0].notas[0];
    float aux;
    
    for(i = 0; i < n; i++){
        aux = v[i].notas[0];
        
        if(aux > m){
            p_m = i;
            m = aux;
        }
    }
    printf("O aluno com maior P1 e: %d %s %.1f\n", v[p_m].RA, v[p_m].nome, m);
}

int main() {

    int n, i;
    
    scanf("%d", &n);
    
    aluno v[n];
    
    for(i=0; i < n; i++){
        scanf("%d", &v[i].RA);
        scanf("%s", v[i].nome);
        scanf("%f %f %f", &v[i].notas[0], &v[i].notas[1], &v[i].notas[2]);
    }
    
    resultado(v, n);
    maior(v, n);
    menor(v, n);
    maior_P1(v, n);
    
    return 0;
}
