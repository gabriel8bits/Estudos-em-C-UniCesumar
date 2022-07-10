#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorDeposito, valorJuros, valorTotal, rendimento;

    printf("\nInforme o valor do depósito: R$");
    scanf("%f", &valorDeposito);
    printf("\nInforme a taxa de juros: ");
    scanf("%f", &valorJuros);

    rendimento = valorDeposito * (valorJuros/100);
    valorTotal = valorDeposito + rendimento;

    printf("\nO valor do rendimento foi de: R$%.2f", rendimento);
    printf("\nO total foi de: R$%.2f\n", valorTotal);

    return 0;
}
