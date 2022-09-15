#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include "primos.h"

int main(void)
{
    system("color a");
    setlocale(LC_ALL, "Portuguese");

    char opcao, escolha;
    int num, resultado, linha, i, soma;
    float media, qntd;

    do{
        do{
            printf("A - Verificar se um numero � ou n�o primo.\nB - Exibir os n�meros primos entre 1 e 100.\nC - M�dia dos n�meros primos entre 200 e 100.");
            printf("\nEscolha uma op��o: ");
            setbuf(stdin, NULL);
            scanf("%c", &escolha);
            if(escolha != 'A' && escolha != 'a' && escolha != 'B' && escolha != 'b' && escolha != 'C' && escolha != 'c'){
                printf("\nOp��o inv�lida! \n\n");
            }
        }while(escolha != 'A' && escolha != 'a' && escolha != 'B' && escolha != 'b' && escolha != 'C' && escolha != 'c');

        if(escolha == 'A' || escolha == 'a'){
            do{
                do{
                    printf("\nInforme um numero positivo: ");
                    scanf("%d", &num);
                    if(num < 0){
                        printf("\nN�meros negativos n�o s�o primos!!\nInforme um valor v�lido.\n");
                    }
                    else if(num == 1){
                        printf("\n1 n�o � primo\n");
                    }
                }while(num < 0 || num == 1);
                if(num > 0){
                    resultado = primo(num);
                    if(resultado == 0){
                        printf("\n%d � primo\n", num);
                    }
                    else{
                        printf("\n%d n�o � primo\n", num);
                    }
                }
            }while(num > 0);
        }
        if(escolha == 'B' || escolha == 'b'){
            printf("\n");
            linha = 0;
            for(i=2; i<=100; i++){
                resultado = primo(i);
                if(resultado == 0){
                    printf("%d\t", i);
                    linha++;
                }
                if(linha % 10 == 0){
                    printf("\n");
                }
            }
        printf("\n");
        }
        if(escolha == 'C' || escolha == 'c'){
            printf("\n");
            soma = 0;
            media = 0;
            for(i=100; i<=200; i++){
                resultado = primo(i);
                if(resultado == 0){
                    soma = soma + i;
                    qntd++;
                }
            }
            media = soma / qntd;
            printf("M�dia dos primos entre 200 e 100: %.2f\n", media);
        }
        setbuf(stdin, NULL);
        printf("\nDeseja repetir o programa (S/s)? ");
        scanf("%c", &opcao);
        printf("\n");
    }while(opcao == 's' || opcao == 'S');

    return 0;
}
