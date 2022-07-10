#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codEstado, peso, codCarga;
    float imposto, taxaImposto, preco, precoQuilo,  total;

    printf("\nInforme o códico do estado: ");
    scanf("%d", &codEstado);
    printf("Informe o peso da carga em toneladas: ");
    scanf("%d", &peso);
    printf("Informe o codico da carga: ");
    scanf("%d", &codCarga);

    switch (codEstado) {
        case 1:
            taxaImposto = 0.2;
            break;
        case 2:
            taxaImposto = 0.15;
            break;
        case 3:
            taxaImposto = 0.1;
            break;
        case 4:
            taxaImposto = 0.05;
            break;
        default:
            taxaImposto = 0;
            printf("\nCódico de estado inválido!\n");
            break;
    }

    if (codCarga >= 10 && codCarga <=20) {
        precoQuilo = 180;
    }
    else if(codCarga >= 21 && codCarga <= 30) {
        precoQuilo = 120;
    }
    else if(codCarga >= 31 && codCarga <= 40) {
        precoQuilo = 230;
    }
    else {
        printf("\nCódico de carga inválido!\n");
        precoQuilo = 0;
    }

    imposto = peso * 1000 * precoQuilo * taxaImposto;
    preco = peso * 1000 * precoQuilo;
    total = preco + imposto;

    printf("\nPeso em kg: %d\nPreco: %.2f\nImposto: %.2f\nTotal: %.2f\n", peso*1000, preco, imposto, total);

    return 0;
}
