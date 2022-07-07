#include <stdio.h>

int main(void)
{
    double num, partedec;
    int parteint, partedecint, uni, dez, cen, soma;

    printf("Informe um numero com casas decimais: ");
    scanf("%lf", &num);

    parteint = (int)num;
    partedec = num - parteint;
    partedecint = partedec * 1000;

    printf("Parte inteira: %d\n", parteint);
    printf("Parte decimal: %lf\n", partedec);
    printf("Parte decimal como inteiro de 3 digitos: %d\n", partedecint);

    //extracao de digitos

    cen = parteint / 100;
    dez = (parteint - (100 * cen)) / 10;
    uni = (parteint - (100 * cen) - (10 * dez));

    printf("Centena: %d\n", cen);
    printf("Dezena: %d\n", dez);
    printf("Unidade: %d\n", uni);

    soma = cen + dez + uni;

    printf("Soma: %d\n", soma);

    return 0;
}
