/* 2) Escreva um algoritmo que leia o valor de uma presta��o e da taxa de juros cobrada pelo atraso da
presta��o. Calcule o valor a ser pago por meio da f�rmula:
Valor com juros = Presta��o + (Presta��o * Taxa /100) */

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
