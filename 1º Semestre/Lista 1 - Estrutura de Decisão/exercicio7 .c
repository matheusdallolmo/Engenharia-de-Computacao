/*
7) Calcular o imposto de renda de uma pessoa de acordo com a seguinte tabela:
Renda anual Al�quota*
At� R$ 10.000,00 0%
> R$ 10.000,00 e <= R$ 25.000,00 10%
Acima de R$ 25.000,00 25%
*Al�quota � o percentual para realizar o c�lculo do imposto de renda a ser pago.
Se informado valor negativo, n�o realizar o c�lculo e informar o usu�rio.
*/

int main(void)
{
    float renda;

    printf("Informe sua renda anual: ");
    scanf("%f", &renda);

    if(renda >= 0 && renda <= 10000){
        printf("\nImposto de renda: R$%.2f", renda * 0);
    }
    else if(renda > 10000 && renda <= 25000){
        printf("\nImposto de renda: R$%.2f", renda * 0.10);
    }
    else if(renda > 25000){
        printf("\nImposto de renda: R$%.2f", renda * 0.25);
    }
    else{
        printf("Renda negativa");
    }

    return 0;
}
