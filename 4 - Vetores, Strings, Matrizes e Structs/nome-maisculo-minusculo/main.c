#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void maisculo(char str1[], char str2[]) {

    int i = 0;

    while (str1[i] != '\0') {

        str2[i] = toupper(str1[i]);
        i++;
    }

    str2 = '\0';

}

void minusculo(char str1[], char str2[]) {

    int i = 0;

    while (str1[i] != '\0') {

        str2[i] = tolower(str1[i]);
        i++;
    }

    str2 = '\0';

}


int main()
{
    char nome[80], sobrenome[80];

    printf("Digite seu primeiro nome: ");
    gets(nome);

    printf("Digite seu sobrenome: ");
    gets(sobrenome);

    strcat(nome, sobrenome);

    printf("\nSeu nome concatenado: %s\n", nome);

    if (strstr(sobrenome, nome) == 0) {
        printf("\nSeu nome foi concatenado na variável nome.\n");
    }

    maisculo(nome, nome);

    printf("\nSeu nome em maisculo: %s", nome);

    minusculo(nome, nome);

    printf("\nSeu nome em minusculo: %s\n", nome);

    return 0;
}
