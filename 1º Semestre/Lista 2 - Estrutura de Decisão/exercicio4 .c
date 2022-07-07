/*
4) Implemente um programa que adivinhe o "número mágico" entre 0 e 10. O programa deverá imprimir a mensagem
"Certo! %d é o número mágico" quando o jogador acerta o número mágico, a mensagem "Errado, muito alto", caso o
jogador tenha digitado um número maior que o número mágico e a mensagem "Errado, muito baixo", caso o jogador
tenha digitado um número menor que o número mágico. O número mágico é produzido usando o gerador de números
randômicos de C (função rand(), que exige o uso da biblioteca stdlib.h)
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x, tentativa, limite=100;

    srand(time(NULL));
    x = rand() % limite + 1;

    printf("\nInforme um numero entre 0 e 100: ");
    scanf("%d", &tentativa);

    if(tentativa == x){
        printf("\nCerto! %d é o numero mágico", x);
    }
    else if(tentativa > x){
        printf("\nErrado, muito alto");
    }
    else{
        printf("\nErrado, muito baixo");
    }

    return 0;
}

