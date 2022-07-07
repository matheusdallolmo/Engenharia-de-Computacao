/*
3) Crie um programa que leia uma data no formato ddmmaaaa e imprima se a data é válida ou não.
*/

#include <stdio.h>

int main(void)
{
    int dia, mes, ano;

    printf("Informe uma data(Exemplo: 11 11 2011):");
    scanf("%d %d %d", &dia, &mes, &ano);

    if(dia >= 1 || dia <= 31){
        if(mes >= 1 || mes <= 12){
            if(ano >= 0){
                printf("A data %d/%d/%d eh valida.", dia, mes, ano);
            }
            else{
                printf("Data invalida!!");
            }
        }
        else{
            printf("Data invalida!!");
        }
    }
    else{
        printf("Data invalida!!");
    }

    return 0;
}
