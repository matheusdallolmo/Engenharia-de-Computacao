/*
1) A contribuição para o INSS é calculada da seguinte forma:
a) Para o salário bruto de até três salários mínimos, o desconto do INSS será de 8%.
b) Para o salário bruto acima de três salários mínimos, o desconto do INSS será de 10%. Para as
contribuições maiores que o salário mínimo, considerar a importância de um salário mínimo.
Elaborar um programa que receba como entrada o valor do salário mínimo e o valor do salário bruto, calcule o
INSS e o salário líquido restante e informe-os.
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
