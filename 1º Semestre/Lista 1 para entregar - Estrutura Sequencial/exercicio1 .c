/*
1) Fa�a um programa que receba o custo de um espet�culo teatral e o pre�o do convite desse espet�culo.
Esse programa deve calcular e mostrar:
a) A quantidade de convites que devem ser vendidos para cobrir o custo do espet�culo.
b) A quantidade de convites que devem ser vendidos para cobrir o custo do espet�culo e ainda obter um lucro
de 25%.
*/

#include <math.h>

int main(void)
{
    float custo, convite, ingressos, lucro;

    printf("Informe o valor de custo do espetaculo: ");
    scanf("%f", &custo);
    printf("Informe o valor do convite: ");
    scanf("%f", &convite);

    ingressos = custo / convite;
    lucro = (custo * 1.25) / convite;

    printf("Para cobrir o custo do espetaculo eh necessario vender %.0f ingressos.\n", ceil(ingressos));
    printf("Para cobrir o custo do espetaculo e ter lucro de 25%% eh necessario vender %.0f ingressos.", lucro);


    return 0;
}
