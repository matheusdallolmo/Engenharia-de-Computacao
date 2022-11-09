#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void refazer(float v[], int esq, int dir){
    int j = (esq + 1) * 2 - 1; 
    float x = v[esq];
    
    while (j <= dir){
        if ((j < dir) && (v[j] < v[j + 1]))
            j++;
        
        if (x > v[j])
            break;
        
        v[esq] = v[j];
        esq = j;
        j = (esq + 1) * 2 - 1; 
    }

    v[esq] = x;
}

void gerarHeap(float v[], int n){
    int esq = n / 2;

    while (esq >= 0){
        refazer(v, esq, n - 1);
        esq--;
    }
}

void heapsort(float v[], int n){
    float x;
    int dir = n - 1;

    gerarHeap(v, n); 
    
    while (dir > 0){
        x = v[0];
        v[0] = v[dir];
        v[dir] = x;
        dir--;

        refazer(v, 0, dir);
    }
}

int main() {
    int n, i;
    
    scanf("%d", &n);
    
    float v[n];
    
    for(i = 0; i < n; i++)
        scanf("%f", &v[i]);
    
    heapsort(v,n);
    
    for(i = 0; i < n; i++)
        printf("%.1f ", v[i]);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}