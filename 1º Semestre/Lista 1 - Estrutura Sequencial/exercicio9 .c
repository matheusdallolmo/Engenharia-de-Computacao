
#include <math.h>

int main(void)
{
    float distancia, tanque, consumo, litros, abastecer, restou;

    printf("Informe a distancia (em Km) percorrida entre as cidades: ");
    scanf("%f", &distancia);
    printf("Informe a capacidade maxima do tanque de combustivel do veiculo: ");
    scanf("%f", &tanque);
    printf("Informe o consumo medio (em Km por litro) do veiculo: ");
    scanf("%f", &consumo);

    litros = distancia / consumo;
    abastecer = litros / tanque;
    restou = (tanque * ceil(abastecer)) - litros;

    printf("Foram necessarios %.1f litros de combustiveis para percorrer o trajeto.", litros);
    printf("\nFoi necessario abastecer o veiculo %.1f vezes.", ceil(abastecer));
    printf("\nRestou no tanque de combustivel %.1f litros.", restou);


    return 0;
}
