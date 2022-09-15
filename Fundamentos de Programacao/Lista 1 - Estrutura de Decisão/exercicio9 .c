/*
9) Ler um número e utilizando uma estrutura if else if else if... (obrigatoriamente encadeada) informar se ele:
a) É divisível por 5, por 3 ou por 2;
Exemplo: 30 é divisível por 2, 3 e 5.
b) É divisível somente por 5 e por 3; por 5 e por 2; ou por 3 e por 2;
Exemplo: 15 é divisível somente por 3 e por 5.
Exemplo: 10 é divisível somente por 5 e por 2.
Exemplo: 6 é divisível somente por 3 e por 2.
c) É divisível somente por 5, por 3 ou por 2;
Exemplo: 25 é divisível somente por 5
d) Não é divisível por nenhum destes;
Exemplo: 7 não é divisível por 5, por 3 ou por 2;
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

