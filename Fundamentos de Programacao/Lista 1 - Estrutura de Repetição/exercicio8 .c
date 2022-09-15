/*
8) Apresentar os números divisíveis por 4 ou múltiplos de 10 entre 500 e 0 e a média desses múltiplos.
*/

#include <stdio.h>

int main(void)
{
    int num, cont=0, soma=0;
    float media;

    for(num=500; num>=1; num--){
        if(num % 4 == 0 || num % 10 == 0){
            printf("%d\t", num);
            cont++;
            soma = soma + num;
        }
    }
    media = soma / cont;
    printf("\nMedia: %.2f", media);

    return 0;
}
