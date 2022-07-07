/*
2) Uma árvore de decisão obtém a decisão pela execução de uma sequência de testes. Cada nó interno da árvore
corresponde a um teste do valor de uma das propriedades e os ramos deste nó são identificados com os possíveis
valores do teste. Cada nó folha da árvore especifica o valor de retorno se a folha for atingida. A figura a seguir
apresenta um exemplo fictício de árvore de decisão, tomando atributos de clientes de uma instituição financeira.
Elabore um programa que implemente essa árvore de decisão. As entradas podem ser do tipo char, portanto, considere
a primeira letra de cada palavra como entrada. Caso o usuário informe um caractere diferente dos aceitáveis, apresente
a mensagem "Caractere inválido".
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
