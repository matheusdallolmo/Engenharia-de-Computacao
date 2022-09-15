/*
2) Considerando que para um consórcio sabe-se o número total de prestações, a quantidade de prestações
pagas e o valor de cada prestação (que é fixo). Escreva um programa que determine o valor total já pago pelo
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
