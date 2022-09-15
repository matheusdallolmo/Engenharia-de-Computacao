/*
12) Faça um programa que solicite ao usuário o valor do salário de um funcionário e apresente o menu a
seguir e permita ao usuário escolher a opção desejada e mostre o resultado. Verifique a possibilidade de
opção inválida e não se preocupe com restrições, como salário negativo. Use switch - case, if e if - else para a
solução.
*/

int main(void)
{
    float salario;
    int opcao;

    printf("Informe o valor do salario: R$");
    scanf("%f", &salario);

    printf("\nMenu de opcoes: \n 1 - Imposto \n 2 - Novo salario \nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    if(opcao == 1){
        if(salario < 1000){
            printf("Imposto: R$%.2f", salario * 0.05);
        }
        else if(salario >= 1000 && salario < 1500){
            printf("Imposto: R$%.2f", salario * 0.1);
        }
        else if(salario >= 1500){
            printf("Imposto: R$%.2f", salario * 0.15);
        }
        else{
            printf("Salario nao reconhecido");
        }}
    else if(opcao == 2){
        if(salario < 1000){
            printf("Valor do aumento: R$75,00 \nNovo salario: R$%.2f", salario + 75);
        }
        else if(salario >= 1000 && salario < 1500){
            printf("Valor do aumento: R$100,00 \nNovo salario: R$%.2f", salario + 100);
        }
        else if(salario >= 1500){
            printf("Valor do aumento: R$150,00 \nNovo salario: R$%.2f", salario + 150);
        }
        else{
            printf("Salario nao reconhecido");
        }
    }
    else{
        printf("Opcao invalida");
    }

    return 0;
}
