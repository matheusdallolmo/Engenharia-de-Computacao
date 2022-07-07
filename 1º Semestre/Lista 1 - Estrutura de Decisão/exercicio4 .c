/*
4) Faça um programa que leia três notas de um aluno e calcule a média ponderada, com os pesos 1, 3 e 4,
respectivamente, e:
a) Se a média obtida está entre 6 a 10 informar que o aluno está aprovado;
b) Se a média obtida está entre 4 e 5,9 informar que o aluno está em recuperação. Nesse caso, ler a nota de
recuperação e calcular a média final (que é a média entre a média anual e a nota de recuperação);
b.1) Se a média final é menor que 5 informar que o aluno está reprovado após recuperação;
b.2) Se é igual ou maior que 5 informar que o aluno está aprovado após recuperação;
c) Se a média obtida é menor que 4 informar que o aluno está reprovado antes da recuperação.
*/

#include <stdio.h>

int main(void)
{
    float nota1, nota2, nota3, notarec, media, mediafinal;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 * 1 + nota2 * 3 + nota3 * 4) / 8;

        if (media >= 6 && media <= 10){
        printf("\nAprovado!\n");
    }

    else if (media >=4 && media <= 5.9){
        printf("\nEm recuperacao!\n");

        printf("\nInforme a nota de recuperacao: ");
        scanf("%f", &notarec);

        mediafinal = (media + notarec) / 2;

        if(mediafinal < 5){
            printf("\nReprovado apos recuperacao!\n");
        }

        else if(mediafinal >= 5){
            printf("\nAprovado apos recuperacao!\n");
        }
    }

    else if(media < 4){
        printf("\nReprovado antes da recuperacao!\n");
    }

    return 0;
}
