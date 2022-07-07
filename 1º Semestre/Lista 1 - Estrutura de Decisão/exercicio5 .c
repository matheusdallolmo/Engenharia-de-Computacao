/*
5) Ler três valores inteiros diferentes e colocá-los em ordem crescente. Os valores devem ser apresentados
com uma instrução:
printf("Menor: %d Meio: %d Maior: %d\n", menor, meio, maior);
Sugestão: Dividir o problema em partes: encontrar o maior, o menor e o do meio separadamente. Armazenar
os valores em variável e mostrá-los com uma única instrução.
*/

int main(void)
{
    int valor1, valor2, valor3, aux;

    printf("Informe o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%d", &valor2);
    printf("Informe o terceiro valor: ");
    scanf("%d", &valor3);

    if(valor1 > valor2){
        aux = valor1;
        valor1 = valor2;
        valor2 = aux;
    }
    if(valor2 > valor3){
        aux = valor2;
        valor2 = valor3;
        valor3 = aux;
    }
    if(valor1 > valor2){
        aux = valor1;
        valor1 = valor2;
        valor2 = aux;
    }

    printf(" Menor: %d\n Medio: %d\n Maior: %d\n", valor1, valor2, valor3);


    return 0;
}
