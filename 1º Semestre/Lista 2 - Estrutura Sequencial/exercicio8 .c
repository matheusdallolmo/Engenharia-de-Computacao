/*
8) Ler um n�mero inteiro com at� 5 d�gitos. Separar os d�gitos desse n�mero e mostr�-los em linhas distintas.
Tamb�m calcular e mostrar a soma dos d�gitos.
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
