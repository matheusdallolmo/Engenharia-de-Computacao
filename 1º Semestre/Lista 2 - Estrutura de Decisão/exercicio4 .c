/*
4) Implemente um programa que adivinhe o "n�mero m�gico" entre 0 e 10. O programa dever� imprimir a mensagem
"Certo! %d � o n�mero m�gico" quando o jogador acerta o n�mero m�gico, a mensagem "Errado, muito alto", caso o
jogador tenha digitado um n�mero maior que o n�mero m�gico e a mensagem "Errado, muito baixo", caso o jogador
tenha digitado um n�mero menor que o n�mero m�gico. O n�mero m�gico � produzido usando o gerador de n�meros
rand�micos de C (fun��o rand(), que exige o uso da biblioteca stdlib.h)
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
        printf("\nCerto! %d � o numero m�gico", x);
    }
    else if(tentativa > x){
        printf("\nErrado, muito alto");
    }
    else{
        printf("\nErrado, muito baixo");
    }

    return 0;
}

