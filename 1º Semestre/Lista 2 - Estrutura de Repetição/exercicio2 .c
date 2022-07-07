/*
2) Faça um programa que imprima os n (indicado pelo usuário) primeiros números pares (começa em 0).
Apresente 5 valores por linha.
Exemplo:
*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
    system("color a");
    setlocale(LC_ALL, "Portuguese");

    int num, i, aux, par, cont;
    char opcao;

    do{
        do{
            printf("Quantos numeros pares deseja mostrar? ");
            scanf("%d", &num);

            if(num<0){
                printf("\nInforme um numero valido!!\n\n");
            }
        }while(num<0);

        par = 0;
        cont = 0;
        for(i=0; i<num; i++){
            par = par + 2;
            cont++;
            printf("%3d\t", par);

            if(cont % 5 == 0){
                printf("\n");
            }
        }
        setbuf(stdin, NULL);
        printf("\nDeseja executar o programa novamente? ");
        scanf("%c", &opcao);
        printf("\n");
    }while(opcao == 's' || opcao == 'S');

    return 0;
}
