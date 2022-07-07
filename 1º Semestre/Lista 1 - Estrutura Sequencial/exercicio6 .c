/*
6) Leia dois valores A e B e efetue a troca do conteúdo das duas variáveis lidas, de forma que a variável A
passe a ter o valor de B e a variável B o valor de A. Mostre o conteúdo das variáveis antes e depois da troca.
*/

int main(void)
{
    int a, b;

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);

    printf("Antes da troca: A=%d e B=%d\n", a, b);
    printf("Depois da troca: A=%d e B=%d", b, a);

    return 0;
}
