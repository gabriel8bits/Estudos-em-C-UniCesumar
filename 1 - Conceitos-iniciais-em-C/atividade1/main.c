#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30];

    printf("Informe o seu nome: ");
    scanf("%s", &nome);

    printf("\nBem-vindo(a) à disciplina de Algoritimos e Logica de Programação II, %s.\n", nome);
    return 0;
}
