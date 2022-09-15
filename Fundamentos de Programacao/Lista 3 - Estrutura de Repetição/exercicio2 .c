/*
2) Ler um n�mero positivo, validar a entrada repetindo a leitura at� que seja informado um n�mero que
atende essa condi��o. Esse n�mero representa a quantidade de n�meros �mpares a serem mostrados.
Apresentar esses valores n por linha, sendo n um n�mero maior que zero, informado pelo usu�rio. Os valores
s�o apresentados separados por tabula��o. Fazer a m�dia dos n�meros �mpares mostrados.
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
                printf("Informe um valor v�lido!!");
            }
        }while(quant<=0);
        do{
            printf("Quantos numeros apresentar por linha? ");
            scanf("%d", &linha);
            if(linha<=0){
                printf("Informe um valor v�lido!!");
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
        printf("\nA m�dia dos �mpares �: %.2f\n", media);

        setbuf(stdin, NULL);
        printf("Deseja repetir o programa (S/s)");
        scanf("%c", &opcao);
    }while(opcao == 's' || opcao == 'S');

    return 0;
}
