#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op;
    float total;

    total = 0;

    printf(" Bem-vindo ao restaurante!\n Escolha seu Prato:\n");
    printf(" 1 - Italiano\n 2 - Japones\n 3 - Salvadorenho\n");
    printf(" Informe o prato desejado: ");
    scanf("%d", &op);

    switch (op)
    {
        case 1: total = total + 750;
            break;
        case 2: total = total + 324;
            break;
        case 3: total = total + 545;
            break;
        default:
            printf("\nPrato invalido!\n");
            break;
    }

    printf("\n Escolha sua bebida:\n");
    printf(" 1 - Chá\n 2 - Suco de Laranja\n 3 - Refrigerante");
    printf("\n Informe a bebida desejada: ");
    scanf("%d", &op);

    switch (op)
    {
        case 1: total = total + 30;
            break;
        case 2: total = total + 80;
            break;
        case 3: total = total + 90;
            break;
        default:
            printf("\n Bebida invalida!\n");
            break;
    }

    printf("\n O total de calorias foi de: %.2f", total);

    return 0;
}
