#include <stdio.h>
#include <stdlib.h>

struct produto {

    int codico;
    char descricao[50];
    float preco;
    int saldo;

};

int main()
{
    struct produto ficha;

    printf("Informe o códico do produto: ");
    scanf("%d", &ficha.codico);
    fflush(stdin);

    printf("Descrição do produto: ");
    scanf("%s", &ficha.descricao);
    fflush(stdin);

    printf("Informe o preço do produto: R$");
    scanf("%f", &ficha.preco);
    fflush(stdin);

    printf("Informe o saldo do produto: ");
    scanf("%d", &ficha.saldo);
    fflush(stdin);

    system("clear");

    printf("\nCódico: %d", ficha.codico);
    printf("\nDescrição: %s", ficha.descricao);
    printf("\nValor: R$%.2f", ficha.preco);
    printf("\nSaldo: %d\n", ficha.saldo);


    return 0;
}
