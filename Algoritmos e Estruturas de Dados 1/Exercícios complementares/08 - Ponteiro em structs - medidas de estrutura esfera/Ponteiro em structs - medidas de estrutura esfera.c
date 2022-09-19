#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.14

typedef struct{
    float raio, area, volume, diametro;
}esfera;

void atualizar_esfera(esfera *e, float r){
    e->raio = r;
    e->diametro = 2 * r;
    e->volume = (3.0/4.0) * pi * pow(r, 3);
    e->area = 4.0 * pi * pow(r, 2);
}

int main() {

    float r;
    esfera e;
    
    scanf("%f", &r);
    
    atualizar_esfera(&e, r);
    
    printf("raio: %.1f\n", e.raio);
    printf("area: %.1f\n", e.area);
    printf("volume: %.1f\n", e.volume);
    printf("diametro: %.1f\n", e.diametro);
    
    return 0;
}
