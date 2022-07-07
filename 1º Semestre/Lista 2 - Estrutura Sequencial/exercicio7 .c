/*
7) Fazer um programa para ler o salário de uma pessoa, o percentual de aumento e o percentual de
descontos. Os descontos incidem sobre o salário com aumento. Calcular o novo salário e mostrá-lo como no
exemplo a seguir.
*/

int main(void)
{
    float salario, peraum, perdes, salaum, saldes, saldec;
    int salint;

    printf("Informe o valor do salario: R$ ");
    scanf("%f", &salario);
    printf("Informe o percentual de aumento (Ex: 10 para 10%): ");
    scanf("%f", &peraum);
    printf("Informe o percentual de desconto (Ex: 5 para 5%): ");
    scanf("%f", &perdes);

    salaum = salario + (salario * (peraum / 100));
    saldes = salaum - ( salaum * (perdes / 100));
    salint = (int)saldes;
    saldec = (saldes - salint) * 100;


    printf("Salario aumentado: R$%.2f\n", salaum);
    printf("Salario liquido: R$%.2f\n", saldes);
    printf("O salario liquido eh: %d reais e %.0f centavos", salint, saldec);

    return 0;
}
