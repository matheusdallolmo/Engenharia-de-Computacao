/*
8) O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor
e a percentagem dos impostos (ambas aplicadas sobre o custo de fábrica). Escrever um programa para, a
partir do custo de fábrica do carro, calcular e mostrar o custo ao consumidor.
*/

int main(void)
{
    float custo, dist, imp, custoc;

    printf("Informe o custo de fabrica de um automovel: ");
    scanf("%f", &custo);
    printf("Informe a percentagem do distribuidor (0 a 100): ");
    scanf("%f", &dist);
    printf("Informe a percentagem de impostos (0 a 100): ");
    scanf("%f", &imp);

    custoc = custo + (custo * (dist / 100)) + (custo * (imp / 100));

    printf("O custo do veiculo ao consumidor e: %.2f", custoc);

    return 0;
}

