/*
4) Fazer um programa que leia um número inteiro de até três dígitos (considere que será fornecido um
número de até 3 dígitos), calcule e imprima a soma dos seus dígitos. Exemplo:
*/

int main(void)
{
    int num, cen, dez, uni, soma;

    printf("Informe um numero inteiro com ate 3 digitos: ");
    scanf("%d", &num);

    cen = num / 100;
    dez = (num - (100 * cen)) / 10;
    uni = (num - (100 * cen) - (10 * dez));
    soma = uni + dez + cen;

    printf("%.0d = %.0d + %.0d + %.0d = %.0d", num, cen, dez, uni, soma);

    return 0;
}
