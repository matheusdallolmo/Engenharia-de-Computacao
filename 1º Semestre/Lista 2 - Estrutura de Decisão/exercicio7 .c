#include <stdio.h>

int main(void)
{
    int cargo;
    float salario, aumento;

    printf("Codigo  Cargo         Percentual");
    printf("\n1       Escriturario  50%%");
    printf("\n2       Secretario    35%%");
    printf("\n3       Caixa         20%%");
    printf("\n4       Gerente       10%%");
    printf("\n5       Diretor       Nao tem aumento");
    printf("\nInforme o salario do funcionario: R$");
    scanf("%f", &salario);
    printf("\nInforme o cargo do funcionario(1, 2, 3, 4 ou 5): ");
    scanf("%d", &cargo);

    if(cargo == 1){
        printf("\nO cargo eh Escriturario.");
        aumento = salario * 0.5;
        printf("\nO valor do aumento eh: R$%.2f", aumento);
        printf("\nO novo salario eh: R$%.2f", salario + aumento);
    }
    else if(cargo == 2){
        printf("\nO cargo eh Secretario.");
        aumento = salario * 0.35;
        printf("\nO valor do aumento eh: R$%.2f", aumento);
        printf("\nO novo salario eh: R$%.2f", salario + aumento);
    }
    else if(cargo == 3){
        printf("\nO cargo eh Caixa.");
        aumento = salario * 0.2;
        printf("\nO valor do aumento eh: R$%.2f", aumento);
        printf("\nO novo salario eh: R$%.2f", salario + aumento);
    }
    else if(cargo == 4){
        printf("\nO cargo eh Gerente.");
        aumento = salario * 0.1;
        printf("\nO valor do aumento eh: R$%.2f", aumento);
        printf("\nO novo salario eh: R$%.2f", salario + aumento);
    }
    else if(cargo == 2){
        printf("\nO cargo eh Diretor.");
        printf("\nO Diretor nao tem aumento!!");
        printf("\nO salario eh: R$%.2f", salario);
    }
    else{
        printf("\n\nCaractere invalido!!");
    }

    return 0;
}
