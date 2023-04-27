#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fracao_egipicia(int n, int d){
    
    int aux;
    
    if((n > 0) && (d > 0)){
        if((d % n) == 0)
            printf("1/%d", d / n);
        else if(n % d == 0)
            printf("%d", n / d);
        else if(n > d){
            printf("%d + ", n / d);
            fracao_egipicia(n % d, d);
        }else{
            aux = d / n + 1;
            printf("1/%d + ", aux);
            
            fracao_egipicia(n * aux - d, d * aux);
        }
    }
}


int main() {
    
    int n, d;
    
    scanf("%d %d", &n, &d);
    fracao_egipicia(n ,d);

    return 0;
}
