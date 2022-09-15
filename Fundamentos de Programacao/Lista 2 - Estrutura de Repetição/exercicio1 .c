/*
1) Escreva um algoritmo que gere a série de Fibonacci até o termo n que é informado pelo usuário. A série de
Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... , etc
*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
    system("color a");
    setlocale(LC_ALL, "Portuguese");

    int ap, ul, aux, n, i;
    char opcao;

    do{
        do{
            printf("Qual numero de termos apresentar? ");
            scanf("%d", &n);

            if(n<0){
                printf("\nInforme um numero valido!\n\n");
            }
        }while(n<0);

            ap = 0;
            ul = 1;

            for(i=0; i<n; i++){

                    aux = ap + ul;
                    ap = ul;
                    ul = aux;
                    printf("%d\t", aux);
                }
                printf("\n");

                setbuf(stdin, NULL);
                printf("\nDeseja repetir o programa? ");
                scanf("%c", &opcao);
                printf("\n");

    }while(opcao == 's' || opcao == 'S');

    return 0;
}
