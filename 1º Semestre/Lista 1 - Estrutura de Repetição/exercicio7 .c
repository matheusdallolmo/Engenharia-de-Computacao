/*
7) Em um intervalo de 0 a 100, apresentar:
a) Os n�meros divis�veis por 3.
b) O quadrado dos n�meros divis�veis por 3.
c) Os n�meros divis�veis por 5 ou por 7.
d) A raiz quadrada dos n�meros divis�veis por 5 ou por 7.
Apresentar cada item em listagem separada. Colocar um cabe�alho antes de cada listagem de maneira a
identificar o conte�do da mesma. Em cada listagem separar os n�meros por uma tabula��o. A raiz quadrada
pode ser obtida pela fun��o sqrt() que est� na biblioteca math.h
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int num;
    float raiz;

    printf("Numeros divisiveis por 3: ");
    for(num=1; num<=100; num++){
        if(num % 3 == 0){
            printf("%2d\t", num);
        }
    }
    printf("\n\nO quadrado dos divisiveis por 3: ");
    for(num=1; num<=100; num++){
        if(num % 3 == 0){
            printf("%2d\t", num*num);
        }
    }
    printf("\n\nNumeros divisiveis por 5 ou 7: ");
    for(num=1; num<=100; num++){
        if(num % 5 == 0 || num % 7 == 0){
            printf("%2d\t", num);
        }
    }
    printf("\n\nRaiz quadrada dos numeros divisiveis por 5 ou 7: ");
    for(num=1; num<=100; num++){
        if(num % 5 == 0 || num % 7 == 0){
            printf("%.2f\t", sqrt(num));
        }
    }


    return 0;
}
