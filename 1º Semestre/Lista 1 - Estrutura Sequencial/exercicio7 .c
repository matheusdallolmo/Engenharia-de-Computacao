/*
7) Resolva as seguintes express�es matem�ticas. X e Y s�o valores fornecidos pelo usu�rio. Calcule e
mostre o resultado de cada express�o. Reutilize vari�veis, ou seja, ter� apenas uma vari�vel para armazenar
os resultados do tipo int e outra para armazenar o resultado do tipo float. Faz a primeira opera��o e j�
imprime o resultado e assim para todas as demais opera��es. Aten��o para os resultados que podem ser
valores float e para a prioridade dos operadores. Primeiro deve-se linearizar as express�es e depois
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
