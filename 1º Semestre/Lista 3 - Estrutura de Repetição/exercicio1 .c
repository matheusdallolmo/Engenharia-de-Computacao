/* 1) Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um número que
atende essa condição. Esse número representa a quantidade de números primos a serem mostrados. */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    system("color a");
    setlocale(LC_ALL, "Portuguese");

    int quantidade, a, i, countDiv, contPrimos;
    char opcao;

    do
    {
        a = 2;
        contPrimos = 0;

        do
        {
            printf("Informe a quantidade de numeros primos que deseja mostrar: ");
            scanf("%d", &quantidade);

            if (quantidade <= 0)
            {
                printf("\nInforme um numero positivo\n\n");
            }
        } while (quantidade <= 0);

        do
        {
            countDiv = 0;

            for (i = 2; i < a; i++)
            {
                if (a % i == 0)
                {
                    countDiv++;
                    break;
                }
            }
            if (countDiv == 0)
            {
                printf("%d\t", a);
                contPrimos++;
            }
            a++;
        } while (contPrimos < quantidade);

        printf("\nDeseja digitar outro numero (S/s)? ");
        setbuf(stdin, NULL);
        scanf("%c", &opcao);

    } while (opcao == 's' || opcao == 'S');

    return 0;
}
