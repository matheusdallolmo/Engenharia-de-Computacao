/*
2) Ler dois números que representam os limites de um intervalo e ler o incremento. Mostrar os números desse
intervalo de acordo com o incremento indicado e em ordem crescente. O usuário pode informar os valores
que representam os limites do intervalo em ordem crescente ou decrescente. Fazer a média dos ímpares e
divisíveis por 35 do intervalo.
*/

#include <stdio.h>

int main(void)
{
    int limInf, limSup, incr, i, count=0, media=0;

    printf("Informe o valor do limite inferior do intervalo: ");
    scanf("%d", &limInf);
    printf("Informe o valor do limite superior do intervalo: ");
    scanf("%d", &limSup);
    printf("Informe o valor do incremento: ");
    scanf("%d", &incr);

    if(limSup < limInf){
        i = limSup;
        limSup = limInf;
        limInf = i;
    }
    for(limInf; limInf <= limSup; limInf = limInf+incr){
        if(limInf % 2 == 0){
            printf("%3d\n", limInf);
        }
        else if (limInf % 2 != 0 && limInf % 35 != 0){
            printf("%3d\n", limInf);
        }
        else{
            printf("%3d\t Impar e divisivel por 35.\n", limInf);
            count++;
            media = media + limInf;
        }
    }
    printf("\nA media dos numeros impares que sao divisiveis por 35 eh: %d\n", (media / count));

    return 0;
}
