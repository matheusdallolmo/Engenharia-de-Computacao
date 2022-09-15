/*
3) Leia um valor double que representa o troco a ser fornecido por um caixa. Separe a parte inteira (reais) da
parte decimal (centavos) e apresente na forma: 123 reais e 18 centavos. Use a função round, da biblioteca
math.h, para o arredondamento da parte decimal).
*/
#include <math.h>

int main(void)
{
    double troco, partedec;
    int parteint;

    printf("Informe o valor do troco: ");
    scanf("%lf", &troco);

    parteint = (int)troco;
    partedec = (troco - parteint) * 100;
    round(partedec);

    printf("O valor informado eh %d reais e %.0lf centavos.", parteint, partedec);

    return 0;
}
