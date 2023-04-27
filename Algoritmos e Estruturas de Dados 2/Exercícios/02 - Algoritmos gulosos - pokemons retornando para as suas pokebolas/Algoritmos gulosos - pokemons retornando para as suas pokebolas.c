#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void selectsort(int v[], int n){
    int i, j , p, aux;
    
    for(i = n - 1; i >= 1; i--){
        p = i;
        for(j = 0; j < i; j++)
            if(v[j] > v[p])
              p = j;
        
        aux = v[i];
        v[i] = v[p];
        v[p] = aux;
    }
}

int organizar_pokemons(int* V1, int* V2, int n){
    int diff = 0, aux, i;
    
    selectsort(V1, n);
    selectsort(V2, n);
    
    for(i = 0; i < n; i++){
        aux = V1[i] - V2[i];
        if(diff > aux){
            diff = aux;
        }
    }
    return(abs(diff));
}

int main() {
    int n, *pokemon, *pokebola, i;
    
    scanf("%d", &n);
    pokemon = malloc(sizeof(int) * n);
    pokebola = malloc(sizeof(int) * n);
    
    for(i = 0; i < n; i++){
        scanf("%d", &pokemon[i]);
    }
    for(i = 0; i < n; i++){
        scanf("%d", &pokebola[i]);
    }
    
    n = organizar_pokemons(pokemon, pokebola, n);
    
    printf("%d", n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
