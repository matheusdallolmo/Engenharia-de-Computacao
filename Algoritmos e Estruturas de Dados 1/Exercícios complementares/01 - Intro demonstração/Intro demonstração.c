#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int soma(int a, int b){
    int c;
    
    c = a + b;
    
    return c;
}

int main() {
    
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d", soma(a, b));
    
    return 0;
}