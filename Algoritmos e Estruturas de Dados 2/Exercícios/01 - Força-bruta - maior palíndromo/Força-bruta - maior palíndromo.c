#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int palindromo(char str[]){
    
    int i, j;
    int tam = strlen(str);
    
    for(i = 0, j = tam - 1; i < j; i++, j--)
        if (str[i] != str[j]) {
            return 0; // nao e palindromo
    }
    return 1; // e palindromo
}

void maior_palindromo(char str[]){
    
    int i, j, k;
    int tam = strlen(str);
    char aux_str[tam + 1];
    int max_tam = 0; // tamanho maior palindromo
    char maior_pal[tam + 1]; // maior palindromo
    
    for(i = 0; i < tam; i++) {
        for(j = i; j < tam; j++) {
            for(k = 0; k < j - i + 1; k++) {
                aux_str[k] = str[i + k];
            }
            aux_str[k] = '\0'; // adicionar nulo no fim da string

            if(palindromo(aux_str) && (j - i + 1) > max_tam) {
                max_tam = j - i + 1;
                strcpy(maior_pal, aux_str);
            }
        }
    }
    printf("%s", maior_pal);
}

int main(){
    
    char str[100];
    
    scanf("%s", str);
    maior_palindromo(str);
    
    return 0;
}