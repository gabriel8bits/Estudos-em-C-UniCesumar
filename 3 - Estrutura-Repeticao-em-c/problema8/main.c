#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, nPessoas, nPessoasI, nPessoasS, opiniao;
    float somaI, media;

    nPessoas = 0;
    nPessoasS = 0;
    nPessoasI = 0;
    somaI = 0;

    printf("Informe a idade: ");
    scanf("%d", &idade);

    while (idade != 0) {
        do {
            printf("\nInforme sua opinião: ");
            scanf("%d", &opiniao);
        }
        while ((opiniao != 1) && (opiniao != 2) && (opiniao != 3));

        nPessoas++;

        if (opiniao == 1) {
            somaI = somaI + idade;
            nPessoasS++;
        } else {
            if (opiniao == 3) {
                nPessoasI++;
            }
            printf("\nInforme a idade: ");
            scanf("%d", &idade);
        }
    }

    media = (somaI / nPessoasS);

    printf("\nO numero de pessoas insatisfeitas é: %d", nPessoasI);
    printf("\nO numero de pessoas satisfeitas é: %d", nPessoasS);
    printf("\nA media de idade das pessoas satisfeitas é: %.2f", media);

    return 0;
}
