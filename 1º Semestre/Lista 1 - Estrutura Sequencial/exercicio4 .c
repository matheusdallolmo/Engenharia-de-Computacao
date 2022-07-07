/*
4) Tendo como entrada dois valores inteiros, elaborar um algoritmo para calcular e mostrar:
a) A soma desses valores;
b) A subtração do primeiro pelo segundo;
c) A multiplicação entre eles;
d) A divisão inteira do primeiro pelo segundo;
e) A divisão float do primeiro pelo segundo;
f) O resto da divisão do primeiro pelo segundo.
*/

int main(void)
{
    int valor1, valor2, soma, subtracao, mult, divint, divfloat, resto;

    printf("Informe o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%d", &valor2);

    soma = valor1 + valor2;
    subtracao = valor1 - valor2;
    mult = valor1 * valor2;
    divint = valor1 / valor2;
    divfloat = (float) valor1 / valor2;
    resto = valor1 % valor2;

    printf("A soma dos valores e: %d\n", soma);
    printf("A subtracao dos valores e: %d\n", subtracao);
    printf("A multiplicacao dos valores e: %d\n", mult);
    printf("A divisao inteira dos valores e: %d\n", divint);
    printf("A divisao float dos valores e: %f\n", divfloat);
    printf("O resta da divisao dos valores e: %d\n", resto);

    return 0;
}
