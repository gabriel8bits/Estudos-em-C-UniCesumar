#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nNotas, codAluno, i, nAprovados, nReprovados;
    float nota, media, soma;

    nAprovados = 0;
    nReprovados = 0;

    printf("Informe a quantidade de notas da disciplina: ");
    scanf("%d", &nNotas);
    printf("\nInforme o codico do aluno: ");
    scanf("%d", &codAluno);

    while(codAluno != 0) {

        soma = 0;

        for(i = 1; i <= nNotas; i++) {
            printf("Informe a nota %d do aluno: ", i);
            scanf("%f", &nota);
            soma = soma + nota;
        }

        media = soma / nNotas;

        if (media >= 6) {
            nAprovados++;
        } else {
            nReprovados++;
        }

        printf("\nInforme o codico do aluno: ");
        scanf("%d", &codAluno);

    }

    printf("\nA quantidade de alunos aprovados foi de: %d", nAprovados);
    printf("\nA quantidade de alunos reprovados foi de: %d\n", nReprovados);


    return 0;
}
