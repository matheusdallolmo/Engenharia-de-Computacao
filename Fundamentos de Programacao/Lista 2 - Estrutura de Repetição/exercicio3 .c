/*
3) Uma �rvore A tem 1,50 metros e cresce 2 cent�metros por ano, enquanto uma �rvore B tem 1,10 metros e cresce 3 cent�metros
por ano. Construa um programa que calcule e imprima quantos anos ser�o necess�rios para que a �rvore B seja maior que a
�rvore A.
*/
#include <stdio.h>
#include <locale.h>

int main(void)
{
    system("color a");
    setlocale(LC_ALL, "Portuguese");

    int ano, i;
    float a, b;

    i = 0;
    ano = 0;
    a = 150;
    b = 110;

    for(i; i <= 100; i++){
        a = a + 2;
        b = b + 3;
        ano++;

        if(b>a){
            printf("\nAltura final da arvore A = %.2f metros.\nAltura final da arvore B = %.2f metros.\n", a/100, b/100);
            printf("Ser�o necessarios %d anos para que a arvore B seja maior que a arvore A.", ano);
            break;
        }

    }


    return 0;
}
