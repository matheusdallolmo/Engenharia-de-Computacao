/*
8) Ler um número inteiro com até 5 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
Também calcular e mostrar a soma dos dígitos.
*/

int main(void)
{
    int num, dig1, dig2, dig3, dig4, dig5;

    printf("Informe um numero inteiro com ate cinco digitos: ");
    scanf("%d", &num);

    dig1 = num / 10000;
    dig2 = (num - (10000 * dig1)) / 1000;
    dig3 = (num - (10000 * dig1) - (1000 * dig2)) / 100;
    dig4 = (num - (10000 * dig1) - (1000 * dig2) - (100 * dig3)) / 10;
    dig5 = (num - (10000 * dig1) - (1000 * dig2) - (100 * dig3) - (10 * dig4));


    printf("%d eh o primeiro digito.", dig1);
    printf("\n%d eh o segundo digito.", dig2);
    printf("\n%d eh o terceiro digito.", dig3);
    printf("\n%d eh o quarto digito.", dig4);
    printf("\n%d eh o quinto digito.", dig5);

    return 0;
}
