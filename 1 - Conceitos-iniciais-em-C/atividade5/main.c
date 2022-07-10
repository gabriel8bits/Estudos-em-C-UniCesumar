#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* declaração das variáveis */
    int num1, num2, total;
    /*entrada de dados */
    /*mensagem ao usuário */
    printf("\nDigite o primeiro número:");
    /* leitura do primeiro número */
    scanf("%d", &num1);
    /*mensagem ao usuário */
    printf("\nDigite o segundo número:");
    /* leitura do segundo número*/
    scanf("%d", &num2);
    /* processamento */
    /*cálculo do ano de nascimento */
    total = num1 + num2;
    /*saída de dados */
    printf ("\n A soma dos números é : %d", total);

    return (0);

}
