/*
2) Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um número que
atende essa condição. Esse número representa a quantidade de números ímpares a serem mostrados.
Apresentar esses valores n por linha, sendo n um número maior que zero, informado pelo usuário. Os valores
são apresentados separados por tabulação. Fazer a média dos números ímpares mostrados.
*/
#include <stdio.h>
#include <locale.h>

int main(void)
{
    system("color a");
    setlocale(LC_ALL, "Portuguese");
    int quant, soma, i, a, quant1, linha, quant2, linha1;
    float media;
    char opcao;

    do{
        do{
            printf("Informe a quantidade de impares que deseja mostrar: ");
            scanf("%d", &quant);
            if(quant<=0){
                printf("Informe um valor válido!!");
            }
        }while(quant<=0);
        do{
            printf("Quantos numeros apresentar por linha? ");
            scanf("%d", &linha);
            if(linha<=0){
                printf("Informe um valor válido!!");
            }
        }while(linha<=0);
        printf("\n");

        quant1 = 0;
        quant2 = quant;
        soma = 0;
        linha1 = 0;
        for(i = 0; i<quant2; i++){
            if(i%2 != 0){
                printf("%2d\t", i);
                soma = soma + i;
                quant1++;
                linha1++;
            }
            if(linha1 % linha == 0){
                printf("\n");
            }
            if(quant1 == quant){
                break;
            }
            quant2++;
        }

        media = soma / quant;
        printf("\nA média dos ímpares é: %.2f\n", media);

        setbuf(stdin, NULL);
        printf("Deseja repetir o programa (S/s)");
        scanf("%c", &opcao);
    }while(opcao == 's' || opcao == 'S');

    return 0;
}
