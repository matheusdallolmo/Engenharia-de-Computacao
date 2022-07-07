/* 1) Escreva um algoritmo que leia o comprimento (cm), a largura (cm) e a altura (cm) de uma caixa retangular
e calcule o seu volume (cm3), cuja fórmula é:
Volume = Comprimento * Largura * Altura */

#include <stdio.h>

int main(void)
{
    float comprimento, altura, largura, volume;

    printf("Informe o comprimento do objeto: ");
    scanf("%f", &comprimento);

    printf("Informe a altura do objeto: ");
    scanf("%f", &altura);

    printf("Informe a largura do objeto: ");
    scanf("%f", &largura);

    volume = comprimento*largura*altura;

    printf("O volume do objeto e: %.2fcm^3", volume);


    return 0;
}
