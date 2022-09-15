/*
7) Resolva as seguintes expressões matemáticas. X e Y são valores fornecidos pelo usuário. Calcule e
mostre o resultado de cada expressão. Reutilize variáveis, ou seja, terá apenas uma variável para armazenar
os resultados do tipo int e outra para armazenar o resultado do tipo float. Faz a primeira operação e já
imprime o resultado e assim para todas as demais operações. Atenção para os resultados que podem ser
valores float e para a prioridade dos operadores. Primeiro deve-se linearizar as expressões e depois
implementar o algoritmo para calcular os resultados.
*/

#include <math.h>

int main(void)
{
    float x, y, r1;
    int r2;

    printf("Informe o valor de X: ");
    scanf("%f", &x);
    printf("Informe o valor de Y: ");
    scanf("%f", &y);

    r1 = ((x+y)/y)*pow(x,2);
    printf("a) %f\n", r1);

    r1 = (x+y)/(x-y);
    printf("b) %f\n", r1);

    r1 = (pow(x,2)+pow(y,3))/2;
    printf("c) %f\n", r1);

    r1 = pow(x,3)/pow(x,2);
    printf("d) %f\n", r1);

    printf("e1) %d\ne2) %d\ne3) %d", (int) x% (int)y, (int) x%3, (int) y%5);


    return 0;
}
