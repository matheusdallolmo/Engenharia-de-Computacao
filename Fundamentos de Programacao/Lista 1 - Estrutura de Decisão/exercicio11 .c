/*
11) Números palíndromos são aqueles que escritos da direita para a esquerda ou da esquerda para a direita
tem o mesmo valor. Ex.: 9229, 4554, 9779. Fazer um programa que dado um número de 4 dígitos, calcular e
escrever se este número é ou não palíndromo.
*/

int main(void)
{
    int num, dig1, dig2, dig3, dig4, palindromo;

    printf("Informe um numero de 4 digitos: ");
    scanf("%d", &num);

    dig1 = num / 1000;
    dig2 = (num - (dig1 * 1000)) / 100;
    dig3 = (num - (dig1 * 1000) - (dig2 * 100)) / 10;
    dig4 = num - (dig1 * 1000) - (dig2 * 100) - (dig3 * 10);

    palindromo = (dig4 * 1000) + (dig3 * 100) + (dig2 * 10) + dig1;

    if(num == palindromo){
        printf("Eh palindromo");
    }
    else{
        printf("Nao eh palindromo.");
    }

    return 0;
}
