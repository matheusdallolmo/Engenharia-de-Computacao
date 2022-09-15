#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    system("color a");
    setlocale(LC_ALL, "Portuguese");

    char opcao;
    int limInf, limSup, linha, i, j, contdiv, primos;

    do{
        printf("Informe o valor do limite inferior do intervalo: ");
        scanf("%d", &limInf);
        printf("Informe o valor do limite superior do intervalo: ");
        scanf("%d", &limSup);
        printf("Informe quantos números deseja imprimir por linha: ");
        scanf("%d", &linha);

        for(i = limInf; i <= limSup; i++){
            contdiv = 0;
            primos = 0;
            for(j = 2; j < i; j++){
                if(i % j == 0){
                    contdiv++;
                    break;
                }
            }
            if(contdiv == 0){
                printf("%d\t", i);
                primos++;
            }
            if(primos % linha == 0){
                printf("\n");
            }
        }

        setbuf(stdin, NULL);
        printf("\nDeseja repetir o programa (S/s)? ");
        scanf("%c", &opcao);

    }while(opcao == 's' || opcao == 'S');


    return 0;
}

