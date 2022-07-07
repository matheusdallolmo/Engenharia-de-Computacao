/*
2) Elabore um programa que leia via teclado uma quantidade de segundos (tipo int) e transforme este tempo
em dias, horas e minutos (as três últimas variáveis em tipo float).
*/

int main(void)
{
    int segundos;
    float dias, horas, minutos;

    printf("Informe o tempo em segundos: ");
    scanf("%d", &segundos);

    minutos = segundos / 60;
    horas = minutos / 60;
    dias = horas / 24;

    printf("O tempo em minutos eh: %.1f\n", minutos);
    printf("O tempo em horas eh: %.1f\n", horas);
    printf("O tempo em dias eh: %.1f\n", dias);

    return 0;
}
