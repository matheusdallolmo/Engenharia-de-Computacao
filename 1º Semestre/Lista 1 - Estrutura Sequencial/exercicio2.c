/* 2) Escreva um algoritmo que leia o valor de uma prestação e da taxa de juros cobrada pelo atraso da
prestação. Calcule o valor a ser pago por meio da fórmula:
Valor com juros = Prestação + (Prestação * Taxa /100) */

int main(void)
{
    float valorcomjuros, prestacao, taxa;

    printf("Informe o valor da prestacao: ");
    scanf("%f", &prestacao);
    printf("Informe o valor da taxa de juros: ");
    scanf("%f", &taxa);

    valorcomjuros = prestacao + (prestacao * taxa / 100);

    printf("O valor com juros sera de R$ %.2f", valorcomjuros);

    return 0;
}
