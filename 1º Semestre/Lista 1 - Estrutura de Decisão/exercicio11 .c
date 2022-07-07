/*
11) N�meros pal�ndromos s�o aqueles que escritos da direita para a esquerda ou da esquerda para a direita
tem o mesmo valor. Ex.: 9229, 4554, 9779. Fazer um programa que dado um n�mero de 4 d�gitos, calcular e
escrever se este n�mero � ou n�o pal�ndromo.
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
