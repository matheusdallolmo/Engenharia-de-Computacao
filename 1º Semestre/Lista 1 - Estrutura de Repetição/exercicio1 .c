/*
1) Ler um número maior que 2 e imprimir todos os pares entre 2 e o número lido inclusive. Imprimir a soma dos pares,
o produto dos ímpares que são divisíveis por 9 e a média de todos os números do intervalo.
*/

#include <stdio.h>
int main(void)
{
    int num, i, soma=0, produto=1;
    float media=0;

    //validar entrada para ser maior que 2
    do{
        printf("Informe um numero maior que 2: ");
        scanf("%d", &num);

        if(num <= 2){
            printf("Valor Invalido!\n");
        }

    }while(num <= 2);
    printf("Numeros pares:\n");
    for(i=2; i<=num; i++){
        //responsavel por imprimir os pares
        if(i%2 == 0){
            printf("%d\t", i);
            soma = soma + i;
        }
        else if(i%2 != 0 && i%9 == 0){
            produto = produto * i;
        }
        media = media + i;
    }
    printf("\nSoma dos pares: %d", soma);
    printf("\nProduto dos impares divisiveis por 9: %d", produto);
    printf("\nMedia de todos os numeros: %.2f", media/(num-1));

    return 0;
}
