/*
6) Fazer um programa que leia um valor double que representa o salário de uma pessoa. Apresente
separadamente os reais (parte inteira) e os centavos (parte decimal).
*/

int main(void)
{
    double salario, centavos;
    int reais;

    printf("Informe o valor do salario: ");
    scanf("%lf", &salario);

    reais = (int)salario;
    centavos = (salario - reais) * 100;

    printf("Salario informado: %.2lf\n", salario);
    printf("Reais: %d\n", reais);
    printf("Centavos: %.0f", centavos);

    return 0;
}
