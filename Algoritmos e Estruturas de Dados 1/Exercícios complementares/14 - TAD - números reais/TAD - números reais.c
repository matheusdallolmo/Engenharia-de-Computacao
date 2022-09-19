#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int i;
    int f;
}Real;

Real* criar(int i, int f){
    
    Real *v = (Real*) malloc(sizeof(Real));
    
    v->i = i;
    v->f = f;
    
    return v;
}

Real* soma(Real *r1, Real *r2){
    
    Real *v = (Real*) malloc(sizeof(Real));
    float a;
    
    v->i = r1->i + r2->i;
    
    a = r1->f + r2->f;
    
    if(a>100){
        do{
            v->i += 1;
            a -= 100;
        }while(a>100);
        v->f = a;
    }
    else
        v->f = a;
    
    return v;
}

Real* subtracao(Real *r1, Real *r2){
    
    Real *v = (Real*) malloc(sizeof(Real));
    float a;
    
    v->i = r1->i - r2->i;
    
    a = r1->f - r2->f;
    
    if(a<0){
        do{
            v->i -= 1;
            a += 100;
        }while(a<100);
        v->f = a;
    }
    else
        v->f = a;
    
    return v; 
}

int arredondar(Real *r1){
    int a;

    if(r1->f >= 50){
        r1->i += 1;
        a = r1->i;
    }
    else
        a = r1->i;

    return a;
}
    
void imprimir(Real *r1){
    
    if(r1->f<10)
        printf("%d.0%d\n", r1->i, r1->f);
    else
        printf("%d.%d\n", r1->i, r1->f);
}

int main() {

    int i, f, a1, a2;
    Real *r1, *r2, *r3, *r4;
    
    scanf("%d %d", &i, &f);
    r1 = criar(i, f);
    
    scanf("%d %d", &i, &f);
    r2 = criar(i, f);
    
    imprimir(r1);
    imprimir(r2);
    
    r3 = soma(r1, r2);
    
    r4 = subtracao(r1, r2);
    
    a1 = arredondar(r1);
    a2 = arredondar(r2);
    
    imprimir(r3);
    imprimir(r4);
    printf("%d %d", a1, a2);
    
    
    return 0;
}
