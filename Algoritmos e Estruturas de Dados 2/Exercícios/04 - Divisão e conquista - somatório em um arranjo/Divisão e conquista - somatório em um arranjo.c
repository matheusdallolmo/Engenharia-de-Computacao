#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void imprimir_particao(int* vetor, int inicio, int fim){
    
    int i;
    
    printf("%d", vetor[inicio]);
    
    for (i = inicio + 1; i <= fim; i++){
        printf(" %d", vetor[i]);
    }
    printf("\n");
}

int somatorio_dc(int* vetor, int inicio, int fim){
    
    int meio, soma_esq, soma_dir;
    
    if(inicio == fim) {
        return vetor[inicio];
    }
    
    imprimir_particao(vetor, inicio, fim);
    
    meio =(inicio + fim) / 2;
    soma_esq = somatorio_dc(vetor, inicio, meio);
    soma_dir = somatorio_dc(vetor, meio + 1, fim);
    
    return soma_esq + soma_dir;
}

int main(){
    
    int n;
    
    scanf("%d", &n);
    
    int* vetor = malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    
    int soma = somatorio_dc(vetor, 0, n - 1);
    
    printf("soma: %d\n", soma);
    free(vetor);
    return 0;
}