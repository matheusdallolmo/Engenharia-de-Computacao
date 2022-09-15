/*
9) Ler um n�mero e utilizando uma estrutura if else if else if... (obrigatoriamente encadeada) informar se ele:
a) � divis�vel por 5, por 3 ou por 2;
Exemplo: 30 � divis�vel por 2, 3 e 5.
b) � divis�vel somente por 5 e por 3; por 5 e por 2; ou por 3 e por 2;
Exemplo: 15 � divis�vel somente por 3 e por 5.
Exemplo: 10 � divis�vel somente por 5 e por 2.
Exemplo: 6 � divis�vel somente por 3 e por 2.
c) � divis�vel somente por 5, por 3 ou por 2;
Exemplo: 25 � divis�vel somente por 5
d) N�o � divis�vel por nenhum destes;
Exemplo: 7 n�o � divis�vel por 5, por 3 ou por 2;
*/

int main(void)
{
    int num, div2, div3, div5;

    printf("Informe um numero: ");
    scanf("%d", &num);

    div2 = num % 2;
    div3 = num % 3;
    div5 = num % 5;

    if(div2 == 0 && div3 == 0 && div5 == 0){
        printf("\n%d eh divisivel por 2, 3 e 5.", num);
    }
    else if(div2 == 0 && div3 == 0 && div5 != 0){
        printf("\n%d eh divisivel somente por 2 e por 3.", num);
    }
    else if(div2 == 0 && div3 != 0 && div5 == 0){
        printf("\n eh divisivel somente por 2 e por 5", num);
    }
    else if(div2 != 0 && div3 == 0 && div5 == 0){
        printf("\n%d eh divisivel somente por 3 e por 5.", num);
    }
    else if(div2 == 0 && div3!= 0 && div5 != 0){
        printf("\n%d eh divisivel somente por 2", num);
    }
    else if(div2 != 0 && div3== 0 && div5 != 0){
        printf("\n%d eh divisivel somente por 3", num);
    }
    else if(div2 != 0 && div3!= 0 && div5 == 0){
        printf("\n%d eh divisivel somente por 5", num);
    }
    else{
        printf("\n %d nao eh divisivel por 2, por 3 ou por 5.", num);
    }

    return 0;
}

