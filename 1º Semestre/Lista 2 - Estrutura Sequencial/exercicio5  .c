/*
5) (DESAFIO) Obter o resto da divisão de dois valores inteiros informados pelo usuário, sem usar o operador
de resto.
*/

int main(void)
{
    int num1, num2, div, resto;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    div = num1 / num2;
    resto = num1 - (num2 * div);

    printf("Resto da divisao: %d", resto);


    return 0;
}
