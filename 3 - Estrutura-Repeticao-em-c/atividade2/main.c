#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i;
    float resposta, divisor;

    resposta = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (i=1; i <= numero;i++) {
        divisor = i;
        resposta = resposta + (1/divisor);
    }

    printf("\nResposta: %f\n", resposta);
    return 0;
}
