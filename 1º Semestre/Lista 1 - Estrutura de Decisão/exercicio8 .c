/*
8) Ler tr�s valores inteiros que representam os lados de um tri�ngulo e determinar se esses valores podem
formar um tri�ngulo (obs.: para ser um tri�ngulo cada lado deve ser menor que a soma dos outros dois lados).
Se for um tri�ngulo, determinar o seu tipo: equil�tero (todos os lados iguais), is�sceles (dois lados iguais) e
escaleno (todos os lados diferentes).
*/

int main(void)
{
    int l1, l2, l3;

    printf("Informe o valor do primeiro lado: ");
    scanf("%d", &l1);
    printf("Informe o valor do segundo lado: ");
    scanf("%d", &l2);
    printf("Informe o valor do terceiro lado: ");
    scanf("%d", &l3);

    if(l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2){
        if(l1 == l2 && l1 == l3){
            printf("\nTriangulo equilatero\n");
        }
        else if(l1 != l2 && l1 != l3 && l2 != l3){
            printf("\nTriangulo escaleno\n");
        }
        else if(l1 != l2 && l2 == l3){
            printf("\nTriangulo isoceles\n");
        }
        else if(l1 == l2 && l1 != l3){
            printf("\n Triangulo isoceles\n");
        }
        else if(l1 == l3 && l1 != l2){
            printf("\n Triangulo isoceles\n");
        }
    }
    else{
        printf("\nNao e um triangulo!\n");
        }

    return 0;
}
