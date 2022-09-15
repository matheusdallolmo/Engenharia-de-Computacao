/*
4) Fazer um programa que faça o levantamento dos candidatos que se inscreveram para vagas em uma
empresa. Considerando que para cada candidato, a empresa tenha obtido as seguintes informações:
- Idade
- Nacionalidade (B - Brasileiro ou E - Estrangeiro)
- Possui curso superior (S - Sim ou N - Não)
Determinar:
a) A quantidade de brasileiros.
b) A quantidade de estrangeiros.
c) A idade média dos brasileiros sem curso superior.
d) A menor idade entre os estrangeiros com curso superior.
Estabelecer uma condição para finalizar a entrada de dados do programa. Por exemplo, igual a 0 ou idade
negativa. Se a idade for igual a 0 ou negativa, não ler as informações de nacionalidade e se possui curso
superior, e sair do programa.
*/

#include <stdio.h>

int main(void)
{
    int idade, bra=0, est=0, somaidade=0, qntbrascs=0, estnovo=100;
    char nacionalidade, superior;

    do{
        printf("\nInforme a idade: ");
        scanf("%d", &idade);
        if(idade != 0 || idade > 0){
            setbuf(stdin, NULL);
            printf("\nInforme a nacionalidade (B - Brasileiro ou E - Estrangeiro): ");
            scanf("%c", &nacionalidade);
            setbuf(stdin, NULL);
            printf("\nPossui curso superior (S - Sim ou N - Nao): ");
            scanf("%c", &superior);


            if(nacionalidade == 'B' || nacionalidade == 'b'){
                bra++;
            }
            else if(nacionalidade == 'E' || nacionalidade == 'e'){
                est++;
            }
            else{
                printf("Nacionalidade invalida");
            }
            if (nacionalidade == 'B' || nacionalidade == 'b'){
                if(superior == 'N' || superior == 'n'){
                    somaidade = somaidade + idade;
                    qntbrascs++;
                }
            }
            else if(nacionalidade == 'E' || nacionalidade == 'e'){
                if( superior == 'S' || superior == 's'){
                    if(idade < estnovo){
                        estnovo = idade;
                    }
                }
            }
        }
    }while(idade != 0 || idade < 0);

    printf("\nQuantidade de brasileiros: %d", bra);
    printf("\nQuantidade de estrangeiros: %d", est);
    printf("\nA idade media dos brasileiros sem curso superior eh: %d", (somaidade / qntbrascs));
    printf("\nA menor idade de estrangeiros com curso superior eh: %d\n", estnovo);

    return 0;
}
