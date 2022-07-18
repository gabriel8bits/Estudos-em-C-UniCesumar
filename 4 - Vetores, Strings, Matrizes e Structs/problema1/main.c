#include <stdio.h>
#include <stdlib.h>

#define TAM 20

struct livro {

    int codico;
    char titulo[50];
    char autor[30];
    char area[30];
    int ano;
    char editora[30];

};

int main()
{
    struct livro ficha[TAM];
    struct livro troca;

    int busca, i, j, acha, op;

    op = 0;

    while (op != 5) {

        printf("\n1 - Cadastrar Livros\n");
        printf("2 - Imprimir Livros Cadastrados\n");
        printf("3 - Pesquisar Livros Por Códico\n");
        printf("4 - Ordenar Livros Por Ano\n");
        printf("5 - Sair\n");

        printf("\nDigite a opção desejada: ");
        scanf("%d", &op);
        fflush(stdin);

        if (op == 1) {

            system("clear");

            for (i=0;i<TAM;i++) {

                printf("Digite o códico do livro da %d posição: ", i+1);
                scanf("%d", &ficha[i].codico);
                fflush(stdin);

                printf("Digite o titulo do livro da %d posição: ", i+1);
                scanf("\n%50[^\n]s", &ficha[i].titulo);
                fflush(stdin);

                printf("Digite o autor do livro da %d posição: ", i+1);
                scanf("\n%30[^\n]s", &ficha[i].autor);
                fflush(stdin);

                printf("Digite a área do livro da %d posição: ", i+1);
                scanf("\n%30[^\n]s", &ficha[i].area);
                fflush(stdin);

                printf("Informe o ano do livro da %d posição: ", i+1);
                scanf("%d", &ficha[i].ano);
                fflush(stdin);

                printf("Informe a editora do livro da %d posição: ", i+1);
                scanf("\n%30[^\n]s", &ficha[i].editora);
                fflush(stdin);

                printf("\n");

            }
        }
    }

    return 0;
}
