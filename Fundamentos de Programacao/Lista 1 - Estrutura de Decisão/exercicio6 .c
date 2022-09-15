/*
6) Ler o gênero (F ou f para feminino, M ou m para masculino. Para qualquer outro caractere informar que é
inválido e finalizar o programa). Se informado um caractere válido, ler a altura da pessoa e calcular e mostrar
o seu peso ideal, utilizando as seguintes fórmulas:
a) Para homens: (72.7 * h) - 58;
b) Para mulheres: (62.1 * h) - 44.7.
*/
#include <stdio.h>

int main(void)
{
    char genero;
    float h;

    printf("Informe seu genero: ");
    scanf("%c", &genero);
    printf("Informe sua altura: ");
    scanf("%f", &h);

    if( genero == 'f' || genero == 'F'){
        printf("Peso ideal: %.2f", (62.1 * h) - 44.7);
    }
    else if( genero == 'm' || genero == 'M'){
        printf("Peso ideal: %.2f", (72.7 * h) - 58);
    }
    else{
        printf("Caractere invalido.");
    }

    return 0;
}
