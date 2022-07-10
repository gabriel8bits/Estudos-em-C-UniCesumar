#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nNotas, codAluno, i, nAprovados, nReprovados;
    float nota, soma, media;

    nAprovados = 0;
    nReprovados = 0;

    printf("Informe a quantidade de notas da disciplina: ");
    scanf("%d", &nNotas);

    do
    {
        printf("\nInforme o códico do aluno: ");
        scanf("%d", &codAluno);
        soma = 0;

        if(codAluno != 0)
        {
            for(i = 1; i <= nNotas; i++)
            {
                printf("Informe a %d nota do aluno: ", i);
                scanf("%f", &nota);
                soma = soma + nota;
            }

            media = soma / nNotas;

            if (media >= 6) {
                nAprovados++;
            }else{
                nReprovados++;
            }
        }
    }
    while (codAluno != 0);

    printf("\nA quantidade de alunos aprovados é de: %d", nAprovados);
    printf("\nA quantidade de alunos reprovados é de: %d\n", nReprovados);

    return 0;
}
