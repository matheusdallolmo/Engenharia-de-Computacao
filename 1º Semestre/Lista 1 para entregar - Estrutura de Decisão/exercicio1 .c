/*
1) A contribui��o para o INSS � calculada da seguinte forma:
a) Para o sal�rio bruto de at� tr�s sal�rios m�nimos, o desconto do INSS ser� de 8%.
b) Para o sal�rio bruto acima de tr�s sal�rios m�nimos, o desconto do INSS ser� de 10%. Para as
contribui��es maiores que o sal�rio m�nimo, considerar a import�ncia de um sal�rio m�nimo.
Elaborar um programa que receba como entrada o valor do sal�rio m�nimo e o valor do sal�rio bruto, calcule o
INSS e o sal�rio l�quido restante e informe-os.
*/

#include <stdio.h>

int main(void)
{
    float salLiq, salBru, inss;

    printf("Informe o salario bruto: ");
    scanf("%f", &salBru);

    if(salBru <= 3000){
        inss = salBru * 0.08;
        salLiq = salBru - inss;

        printf("\nValor do salario liquido: R$%.2f", salLiq);
    }
    else if (salBru > 3000){
        inss = salBru * 0.1;
        if(inss <= 1000){
            salLiq = salBru - inss;

            printf("\nValor do salario liquido: R$%.2f", salLiq);
        }
        else{
            salLiq = salBru - 1000;
            printf("\nValor do salario liquido: R$%.2f", salLiq);
        }
    }
    else{
        printf("O salario informado nao eh valido");
    }

    return 0;
}
