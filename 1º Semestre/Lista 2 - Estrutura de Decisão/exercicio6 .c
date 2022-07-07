/*
6) Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo usuário. Cada
data deve ser composta por três valores inteiros, em que o primeiro representa o dia, o segundo, o mês e o terceiro, o
ano.
*/

#include <stdio.h>

int main(void)
{
    int d1, d2, m1, m2, a1, a2;

    printf("Informe a primeria data: ");
    printf("Informe dia (dd): ");
    scanf("%d", &d1);
    printf("Informe o mes (mm): ");
    scanf("%d", &m1);
    printf("Informe o ano (aaaa): ");
    scanf("%d", &a1);

    printf("Informe a segunda data: ");
    printf("Informe dia (dd): ");
    scanf("%d", &d2);
    printf("Informe o mes (mm): ");
    scanf("%d", &m2);
    printf("Informe o ano (aaaa): ");
    scanf("%d", &a2);

    if(a1 > a2){
        printf("\nA maior data eh: %d/%d/%d.", d1, m1, a1);
    }
    else if(a1 < a2){
        printf("\nA maior data eh: %d/%d/%d.", d2, m2, a2);
    }
    else if(a1 == a2){
        if(m1 > m2){
            printf("\nA maior data eh: %d/%d/%d.", d1, m1, a1);
        }
        else if(m1 < m2){
            printf("\nA maior data eh: %d/%d/%d.", d2, m2, a2);
        }
        else if(m1 == m2){
            if(d1 > d2){
                printf("\nA maior data eh: %d/%d/%d.", d1, m1, a1);
            }
            else if(d1 < d2){
                printf("\nA maior data eh: %d/%d/%d.", d2, m2, a2);
            }
            else if(d1 == d2){
                printf("As datas sao iguais");
            }
        }
    }
    else{
        printf("Data Invalida!!");
    }
    return 0;
}
