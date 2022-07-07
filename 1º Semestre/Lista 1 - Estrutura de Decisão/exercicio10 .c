/*
10) Fazer o programa para o algoritmo representado no fluxograma a segui
*/

int main(void)
{
    float salario_base, gratificacao, salario_bruto, salario_liquido, ir;

    printf("Informe o salario base: ");
    scanf("%f", &salario_base);
    printf("Informe a gratificacao: ");
    scanf("%f", &gratificacao);

    salario_bruto = salario_base + gratificacao;

    if(salario_bruto < 1000){
        ir = salario_bruto * 0.15;
    }
    else{
        ir = salario_bruto * 0.20;
    }

    salario_liquido = salario_bruto - ir;

    printf("\nO salario liquido eh: R$%.2f\n", salario_liquido);

    return 0;
}
