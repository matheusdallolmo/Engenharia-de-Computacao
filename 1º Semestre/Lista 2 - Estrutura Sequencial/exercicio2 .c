/*
2) Considerando que para um cons�rcio sabe-se o n�mero total de presta��es, a quantidade de presta��es
pagas e o valor de cada presta��o (que � fixo). Escreva um programa que determine o valor total j� pago pelo
consorciado e o saldo devedor.
*/

int main(void)
{
    float total, pagas, valor, totalpago, devendo;

    printf("Informe a quantidade tolta de prestacoes: ");
    scanf("%f", &total);
    printf("Informe a quantidade de prestacoes pagas: ");
    scanf("%f", &pagas);
    printf("Informe o valor (fixo) da prestacao: ");
    scanf("%f", &valor);

    totalpago = pagas * valor;
    devendo = (total - pagas) * valor;

    printf("Valor total ja pago: %.2f\n", totalpago);
    printf("Saldo devedor: %.2f\n", devendo);

    return 0;
}
