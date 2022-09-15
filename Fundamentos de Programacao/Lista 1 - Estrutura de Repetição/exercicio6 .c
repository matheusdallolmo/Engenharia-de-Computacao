/*
6) Na matem�tica, o fatorial de um n�mero � o produto de todos os inteiros positivos menores ou iguais ao
n�mero. Exemplo: Fatorial de 5 � 1 * 2 * 3 * 4 * 5 = 120. Elabore um programa que calcule e mostre o fatorial
de um n�mero informado pelo usu�rio. Validar esse n�mero para que esteja em um intervalo de 1 a 20.
Lembrando que fatorial de 1 = 1 e fatorial de 0 = 1.
*/

#include <stdio.h>

int main(void)
{
    int num;
    long long int fatorial=1;
    do{
        printf("Informe um numero entre 1 e 20: ");
        scanf("%d", &num);
        if(num < 1 || num > 20){
            printf("Valor invalido!!\n");
        }
    }while(num < 1 || num > 20);

    printf("%d! = ", num);
    for(num; num>=2; num--){
        printf(" %d *", num);
        fatorial = fatorial * num;
    }
    printf(" 1 = %d\n\n", fatorial);
    return 0;
}
