#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    float real, img, mod;
}complexo;

void atualizar_complexo(complexo *c, float real, float img){
    c->real = real;
    c->img = img;
    c->mod = sqrt(real * real + img * img);
}

int main() {

    float t, i;
    complexo c;
    
    scanf("%f %f", &t, &i);
    
    atualizar_complexo(&c, t, i);
    
    if(c.img >= 0)
        printf("%.1f+%.1fi\n", c.real, c.img);
    else
        printf("%.1f%.1fi\n", c.real, c.img);
    
    printf("%.1f", c.mod);
    
    return 0;
}
