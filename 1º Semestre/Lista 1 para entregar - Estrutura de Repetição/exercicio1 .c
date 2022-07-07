#include <stdio.h>
#include <locale.h>

int main(void)
{
    system("color a");
    setlocale(LC_ALL, "Portuguese");

    char opcao;
    int digito, numero, dig1, dig2, dig3, dig4, dig5, cont;

    do{

        printf("Digite um dígito: ");
        scanf("%d", &digito);

        do{
            printf("\nDigite um número: ");
            scanf("%d", &numero);

            cont = 0;
            dig1 = numero / 10000;
            dig2 = (numero / 1000) - (dig1 * 10);
            dig3 = (numero / 100) - (dig1 * 100) - (dig2 * 10);
            dig4 = (numero / 10) - (dig1 * 1000) - (dig2 * 100) - (dig3 * 10);
            dig5 = numero - (dig1 * 10000) - (dig2 * 1000) - (dig3 * 100) - (dig4 * 10);

            if(dig1 == digito){
                cont++;
            }
            if(dig2 == digito){
                cont++;
            }
            if(dig3 == digito){
                cont++;
            }
            if(dig4 == digito){
                cont++;
            }
            if(dig5 == digito){
                cont++;
            }
            if(cont == 1){
                printf("O número tem %d dígitos igual a %d.\n", cont, digito);
            }
            else if (cont > 0){
                printf("O número tem %d dígitos iguais a %d.\n", cont, digito);
            }

        }while(numero > 0);

        setbuf(stdin, NULL);
        printf("\nDeseja repetir o programa (S/s)? ");
        scanf("%c", &opcao);
        printf("\n");

    }while(opcao == 's' || opcao == 'S');


    return 0;
}
