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

    printf("\nApós concatenar as strings temos o nome: %s\n", nome);

    if(strstr(sobrenome, nome) == 0); {

        printf("\nAgora o sobrenome está contido na variável nome.\n");

    }

    return 0;
}
