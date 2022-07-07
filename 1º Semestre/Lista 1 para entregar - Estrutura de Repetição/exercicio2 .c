#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    system("color a");
    setlocale(LC_ALL, "Portuguese");

    char opcao;
    int periodo, i;
    float valor, valor_depreciado, valor_do_bem_depreciado, acumulo, valor_do_bem_depreciado2;

    do{
        do{
            printf("Informe o valor do bem a ser depreciado: ");
            scanf("%f", &valor);
            if(valor <= 0){
                printf("Valor inválido!!");
            }
        }while(valor <= 0);
        do{
            printf("\nInforme o periodo de depreciação (em anos): ");
            scanf("%d", &periodo);
            if(periodo <= 0){
                printf("Valor inválido!!");
            }
        }while(periodo <= 0);

        printf("\n\nAno\tValor do bem\tDepreciação\tValor depreciado");
        printf("\n========================================================");

        acumulo = 0;
        for(i=1; i <= periodo; i++){
            if(i == 1){
                valor_depreciado = valor * (1.5/100);
                valor_do_bem_depreciado = valor - valor_depreciado;
                acumulo = acumulo + valor_depreciado;
                printf("\n%d\tR$ %.2f\tR$ %.2f\tR$ %.2f", i, valor, valor_depreciado, valor_do_bem_depreciado);
            }
            else{
                valor_do_bem_depreciado2 = valor_do_bem_depreciado;
                valor_depreciado = valor_do_bem_depreciado * (1.5/100);
                valor_do_bem_depreciado = valor_do_bem_depreciado - valor_depreciado;
                acumulo = acumulo + valor_depreciado;
                printf("\n%d\tR$ %.2f\tR$ %.2f\tR$ %.2f", i, valor_do_bem_depreciado2, valor_depreciado, valor_do_bem_depreciado);
            }
        }
        printf("\n========================================================");
        printf("\nDepreciação acumulada: R$ %.2f", acumulo);

        setbuf(stdin, NULL);
        printf("\n\nDeseja repetir o programa (S/s)? ");
        scanf("%c", &opcao);
    }while(opcao == 's' || opcao == 'S');

    return 0;
}

