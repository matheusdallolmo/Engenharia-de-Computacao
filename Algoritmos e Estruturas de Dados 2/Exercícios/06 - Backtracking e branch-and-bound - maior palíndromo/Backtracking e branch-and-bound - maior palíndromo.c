#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int palindromo(char* str, int ini, int fim){
    
    while(ini <= fim){
        if(str[ini] != str[fim])
            return 0;
        ini++;
        fim--;
    }
    return 1;       
}

int maior_palindromo(char *str, int ini, int fim, int *maxI, int *maxF){
    
    if(ini >= fim)
        return 0;
   
    if(palindromo(str, ini, fim) == 1){
        if(fim - ini > *maxF - *maxI){
            *maxI = ini;
            *maxF = fim;  
        }   
        maior_palindromo(str, ini + 1, fim - 1, maxI, maxF);
    }else{
        maior_palindromo(str, ini + 1, fim, maxI, maxF);
        maior_palindromo(str, ini, fim - 1, maxI, maxF);
    }    
    return 0;
}

int main(){
    int i, tam, maxI = 0, maxF = 0;
    char str[50];
    
    scanf("%s", str);
    
    tam = strlen(str);
    
    maior_palindromo(str, 0, tam - 1, &maxI, &maxF);
    
    for(i = maxI; i <= maxF; i++)
        printf("%c", str[i]);
       
    return 0;
}