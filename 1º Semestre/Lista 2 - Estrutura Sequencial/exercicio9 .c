/*
9) Ler um n�mero inteiro com at� 3 d�gitos. Separar os d�gitos desse n�mero e mostr�-los em linhas distintas.
Na sequ�ncia calcular e mostrar o inverso do n�mero.
*/

int main(void)
{
    int num, dig1, dig2, dig3, inverso;

    printf("Informe um numero inteiro com ate tres digitos: ");
    scanf("%d", &num);

    dig1 = num / 100;
    dig2 = (num - (100 * dig1)) / 10;
    dig3 = (num - (100 * dig1) - (10 * dig2));

    printf("%d eh o primeiro digito.", dig1);
    printf("\n%d eh o segundo digito.", dig2);
    printf("\n%d eh o terceiro digito", dig3);

    inverso = (dig3 * 100) + (dig2 * 10) + (dig1);


    printf("\nO inverso do numero eh: %d", inverso);

    return 0;
}
