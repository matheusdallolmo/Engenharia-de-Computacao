#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int* subvetor(int *v, int n, int ini, int fim){
    int i;
    int *sv;
    
    if(v != NULL){
        sv = (int*) malloc(sizeof(int) * (fim - ini + 1));
        
        for(i=ini; i<=fim; i++){
            sv[i - ini] = v[i];
        }
    }
    return sv;  
}

int main() {
    
    int *v, *sv;
    int i, n, ini, fim;
    
    scanf("%d", &n);
    
    v = (int*) malloc(sizeof(int) * n);
    
    for(i=0; i<n; i++)
        scanf("%d", &v[i]);
    
    scanf("%d %d", &ini, &fim);
    
    sv = subvetor(v, n, ini, fim);
    
    for(i=0; i<fim - ini + 1; i++)
        printf("%d ", sv[i]);
    
    free(v);
    free(sv);
    
    
    return 0;
}
