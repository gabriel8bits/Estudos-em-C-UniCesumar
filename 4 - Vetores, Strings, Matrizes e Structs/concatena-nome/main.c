#include <stdio.h>
#include <string.h>

int main()
{
    char nome[80], sobrenome[80];

    printf("Digite seu primeiro nome: ");
    gets(nome);
    printf("Digite seu sobrenome nome: ");
    gets(sobrenome);

    strcat(nome, sobrenome);

    printf("\nApós concatenar as strings temos o nome: %s", nome);

    return 0;
}
