#include <stdio.h>
#include <stdlib.h>

/*
4) Ler uma string e contar os espaços em branco (sucessivos ou não) e armazenar a contagem em um vetor.
Mostrar o vetor. Percorrer o vetor copiando apenas os números que são primos para um novo vetor. Mostrar
o novo vetor (de números primos).
*/

void mostrarVetorInteiro(int vetor[], int tam);
int primo (int num);

int main(void)
{
    int i, tamanhoA, countEsp, vetorA[tamanhoA], somaprimos, primos[somaprimos];
    char opcao, string[50];

    do{
        printf("Informe uma string: ");
        setbuf(stdin, NULL);
        gets(string);

        printf("\n==== String ====\n");
        printf("%s\n", string);

        countEsp = 0;
        tamanhoA = 0;
        i = 0;

        while (string[i] != '\0')
        {
            if (string[i] == ' ')
            {
                countEsp++;
                if (string[i+1] == '\0')
                {
                    vetorA[tamanhoA] = countEsp;
                    tamanhoA++;
                }
            }
            else
            {
                if (countEsp > 0)
                {
                    vetorA[tamanhoA] = countEsp;
                    tamanhoA++;
                    countEsp = 0;
                }
            }
            i++;
        }

        printf("\n==== Vetor ====\n");
        mostrarVetorInteiro(vetorA, tamanhoA);

        somaprimos = 0;
        for(i=0; i<tamanhoA; i++){
            if(primo(vetorA[i]) == 0){
                primos[somaprimos] = vetorA[i];
                somaprimos++;
            }
        }

        printf("\n==== Primos ====\n");
        mostrarVetorInteiro(primos, somaprimos);


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

int primo (int num)
{
    int i, contDiv = 0;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            contDiv++;
            break;
        }
    }

    return (contDiv);
}
