#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    printf("Digite um caracter: ");
    scanf("%c", &ch);

    ch = toupper(ch);

    if(isalpha(ch)){
        printf("O caracter digitado pertence ao albafeto\n");
        switch(ch)
            case('A'):
            case('E'):
            case('I'):
            case('O'):
            case('U'):
            printf("\nEh uma vogal!!");
        switch(ch)
            case('B'):
            case('C'):
            case('D'):
            case('F'):
            case('G'):
            case('H'):
            case('J'):
            case('K'):
            case('L'):
            case('M'):
            case('N'):
            case('P'):
            case('Q'):
            case('R'):
            case('S'):
            case('T'):
            case('V'):
            case('W'):
            case('X'):
            case('Y'):
            case('Z'):
            printf("Eh uma consoante!!\n");
    }
    else{
        printf("O caracter digitado nao pertence ao albafeto\n");
    }
    return 0;
}
