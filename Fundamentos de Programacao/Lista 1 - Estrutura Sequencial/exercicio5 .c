/*
5) Calcular o valor do salário líquido de uma pessoa. Sobre o salário bruto incidem descontos de imposto de
renda e de INSS.
*/

int main(void)
{
    float salbruto, perinss, perir, salliq;

    printf("Informe o valor do salario bruto: ");
    scanf("%f", &salbruto);
    printf("Informe o percentual de INSS: ");
    scanf("%f", &perinss);
    printf("Informe o percentual de IR: ");
    scanf("%f", &perir);

    salliq = salbruto - (salbruto * (perinss / 100)) - (salbruto * (perir / 100));

    printf("Salario liquido: %.2f", salliq);

    return 0;
}
