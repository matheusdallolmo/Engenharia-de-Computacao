#include <stdio.h>
#include <stdlib.h>

/*
3) Ler uma string e armazenar em um vetor o valor decimal ASCII apenas dos caracteres que fazem parte do
alfabeto. Mostrar o vetor. Ordenar o vetor. Mostrar o vetor ordenado. Em uma segunda string, armazenar os
caracteres ordenados do vetor e mostrar a string
*/

void mostrarVetorInteiro(int vetor[], int tam);
void ordenarVetorInteiro(int vetor[], int tamanho);

int main(void)
{
    int i, j, k, cont;
    char opcao, string[50];

    do{
        printf("Informe uma string: ");
        gets(string);

        printf("\nString: %s\n", string);

        i = 0;
        cont = 0;

        while (string[i] != '\0'){
            if (string[i] != ' '){
                cont++;
            }
            i++;
        }

        int vetor[cont];

        i=0;
        j=0;

        while (string[i] != '\0'){
            if (string[i] != ' '){
                vetor[j] = string[i];
                j++;
            }
            i++;
        }

        printf("\n=== Vetor Letras ===\n");
        mostrarVetorInteiro(vetor, cont);

        ordenarVetorInteiro(vetor, cont);
        printf("\n=== Vetor Letras Ordenado ===\n");
        mostrarVetorInteiro(vetor, cont);

        char string2[cont];

        for(i=0; i<cont; i++){
            string2[i] = vetor[i];
            if(i == cont-1){
                string2[i+1] = '\0';
            }
        }

        printf("\nString 2: %s\n", string2);

        printf("\nDeseja repetir o programa(S/s)?");
        setbuf(stdin,NULL);
        scanf("%c", &opcao);
    }while(opcao == 'S' || opcao == 's');

    return 0;
}

void mostrarVetorInteiro(int vetor[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d  ", vetor[i]);
    }
    printf("\n");
}

void ordenarVetorInteiro(int vetor[], int tamanho)
{
    int i, i2, auxiliar;

    for (i2 = tamanho - 1; i2 > 0; i2--)
    {
        for (i = 0; i < i2; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                auxiliar = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = auxiliar;
            }
        }
    }
}
