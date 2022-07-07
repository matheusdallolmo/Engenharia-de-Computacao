/*
2) Fa�a um programa que apresente o menu a seguir e permita ao usu�rio escolher a op��o desejada,
receba os dados necess�rios para executar a opera��o e mostre o resultado.
Menu de op��es:
1 � Mostra os n�meros em ordem crescente
2 � Mostra os n�meros em ordem decrescente
3 - Mostra os n�meros que s�o m�ltiplos de 2
Digite a op��o desejada:
*/

#include <stdio.h>

int main(void)
{
    int opcao, a, b, c;

    printf("Informe os tres valores inteiros desejados: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Menu de op��es:\n1. Mostra os numeros em ordem crescente\n2. Mostra os numeros em ordem decrescente\n3. Mostra os numeros que sao multiplos de 2\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    if (opcao == 1){
        if(a > b && a > c && b > c){
            printf("\n%d %d %d", c, b, a);
        }
        else if(a > b && a > c && b < c){
            printf("\n%d %d %d", b, c, a);
        }
        else if(a < b && a < c && b < c){
            printf("\n%d %d %d", a, b, c);
        }
        else if(a > b && a < c && b < c){
            printf("\n%d %d %d", b, a, c);
        }
        else if(a < b && a < c && b > c){
            printf("\n%d %d %d", a, c, b);
        }
        else if(a < b && a > c && b > c){
            printf("\n%d %d %d", c, a, b);
        }
    }
    else if(opcao == 2){
        if(a > b && a > c && b > c){
            printf("\n%d %d %d", a, b, c);
        }
        else if(a > b && a > c && b < c){
            printf("\n%d %d %d", a, c, b);
        }
        else if(a < b && a < c && b < c){
            printf("\n%d %d %d", c, b, a);
        }
        else if(a > b && a < c && b < c){
            printf("\n%d %d %d", c, a, b);
        }
        else if(a < b && a < c && b > c){
            printf("\n%d %d %d", b, c, a);
        }
        else if(a < b && a > c && b > c){
            printf("\n%d %d %d", b, a, c);
        }
    }
    else if(opcao == 3){
        if( a % 2 == 0 && b % 2 == 0 && c % 2 == 0){
            printf("\nOs numeros %d, %d e %d sao multiplos de 2.", a, b, c);
        }
        else if( a % 2 == 0 && b % 2 == 0 && c % 2 != 0){
            printf("\nApenas os numeros %d e %d sao multiplos de 2.", a, b);
        }
        else if( a % 2 == 0 && b % 2 != 0 && c % 2 == 0){
            printf("\nApenas os numeros %d e %d sao multiplos de 2.", a, c);
        }
        else if( a % 2 != 0 && b % 2 == 0 && c % 2 == 0){
            printf("\nApenas os numeros %d e %d sao multiplos de 2.", b, c);
        }
        else if( a % 2 != 0 && b % 2 != 0 && c % 2 == 0){
            printf("\nApenas o numero %d  e multiplo de 2.", c);
        }
        else if( a % 2 != 0 && b % 2 == 0 && c % 2 != 0){
            printf("\nApenas o numero %d  e multiplo de 2.", b);
        }
        else if( a % 2 == 0 && b % 2 != 0 && c % 2 != 0){
            printf("\nApenas o numero %d  e multiplo de 2.", a);
        }
        else if( a % 2 != 0 && b % 2 != 0 && c % 2 != 0){
            printf("\nNenhun dos numeros informados e multiplo de 2.");
        }
    }
    else{
        printf("Opcao invalida");
    }

    return 0;
}
