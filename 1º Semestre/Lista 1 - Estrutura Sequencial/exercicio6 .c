/*
6) Leia dois valores A e B e efetue a troca do conte�do das duas vari�veis lidas, de forma que a vari�vel A
passe a ter o valor de B e a vari�vel B o valor de A. Mostre o conte�do das vari�veis antes e depois da troca.
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
