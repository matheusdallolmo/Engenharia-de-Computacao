/*
3) A figura a seguir representa uma �rvore de decis�o para identificar se um paciente est� saud�vel ou
doente. Elabore um programa que implementa essa �rvore de decis�o.
*/

#include <stdio.h>

int main(void)
{
    int sente, dor;
    float temperatura;

    printf("Paciente se sente bem? \n1 - Sim \n2 - Nao \nEscolha uma opcao: ");
    scanf("%d", &sente);

    if(sente == 1){
        printf("Saudavel");
    }
    else if(sente == 2){
        printf("Paciente tem dor? \n1 - Sim \n2 - Nao \nEscolha uma opcao: ");
        scanf("%d", &dor);

        if(dor == 1){
            printf("Doente");
        }
        else if(dor == 2){
            printf("Informe a temperatura do paciente: ");
            scanf("%f", &temperatura);
            if(temperatura > 37){
                printf("Doente");
            }
            else{
                printf("Saudavel");
            }
        }
        else{
            printf("Opcao invalida");
        }
    }
    else{
        printf("Opcao invalida");
    }

    return 0;
}
