/*
3) Fa�a um programa que receba o peso e a altura de uma pessoa e calcule o �ndice de massa corp�rea.
Esse �ndice mede a rela��o entre peso e altura (peso em quilogramas dividido pelo quadrado da altura em
metros).
IMC = peso/(altura * altura)
*/

int main (void)
{
    float imc, peso, altura;

    printf("Informe o peso: ");
    scanf("%f", &peso);
    printf("Informe a altura: ");
    scanf("%f", &altura);

    imc = peso * (altura * altura);

    printf("O indice de massa corporea(IMC) eh: %.2f", imc);

    return 0;
}
