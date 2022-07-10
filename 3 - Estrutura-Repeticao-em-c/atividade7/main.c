#include <stdio.h>
#include <stdlib.h>

int main()
{
    char data[10];
    int nPedido, qtdade;
    float valorU, total;

    total = 0;

    printf("Informe o número do pedido: ");
    scanf("%d", &nPedido);

    while (nPedido != 0) {

        printf("Data do pedido:(dd/mm/aa) ");
        scanf("%s", &data);

        printf("Valor unitário: R$");
        scanf("%f", &valorU);

        printf("Quantidade: ");
        scanf("%d", &qtdade);

        total = total + valorU * qtdade;

        printf("\nInforme o número do pedido: ");
        scanf("%d", &nPedido);

    }

    printf("\nO preço total das compras foi: R$%.2f\n", total);

    return (0);
}
