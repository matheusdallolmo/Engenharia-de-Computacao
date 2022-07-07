/*
2) Uma �rvore de decis�o obt�m a decis�o pela execu��o de uma sequ�ncia de testes. Cada n� interno da �rvore
corresponde a um teste do valor de uma das propriedades e os ramos deste n� s�o identificados com os poss�veis
valores do teste. Cada n� folha da �rvore especifica o valor de retorno se a folha for atingida. A figura a seguir
apresenta um exemplo fict�cio de �rvore de decis�o, tomando atributos de clientes de uma institui��o financeira.
Elabore um programa que implemente essa �rvore de decis�o. As entradas podem ser do tipo char, portanto, considere
a primeira letra de cada palavra como entrada. Caso o usu�rio informe um caractere diferente dos aceit�veis, apresente
a mensagem "Caractere inv�lido".
*/

#include <stdio.h>

int main(void)
{
    char saldo, aplicado;
    printf("Informe se o saldo na conta corrente eh positivo ou negativo: ");
    scanf("%c", &saldo);

    if(saldo == 'p' || saldo == 'P'){
        printf("\nCliente sem risco");
    }
    else if (saldo == 'n' || saldo == 'N'){
        setbuf(stdin, NULL);
        printf("\nO cliente possui aplicacoes? \n");
        scanf("%c", &aplicado);

        if(aplicado == 'S' || aplicado == 's'){
            printf("\nCliente sem risco");
        }
        else if(aplicado == 'n' || aplicado == 'N'){
            printf("\nCliente com risco");
        }
        else{
            printf("Caractere invalido!!");
        }
    }
    else{
        printf("Caractere invalido!!");
    }

    return 0;
}
