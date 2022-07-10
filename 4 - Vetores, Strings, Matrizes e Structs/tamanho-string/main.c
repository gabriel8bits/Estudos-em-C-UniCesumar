#include <stdio.h>
#include <string.h>

int main()
{
    char nome[80];
    int tamanho;

    printf("Digite o seu nome completo: ");
    gets(nome);

    tamanho = strlen(nome);

    printf("\nO comprimento do nome é: %d\n", tamanho);

    return 0;
}
