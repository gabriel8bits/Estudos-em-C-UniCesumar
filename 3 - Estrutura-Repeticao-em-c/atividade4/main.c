#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float soma;

    for (i = 200; i <= 500; i++)
        if (i % 2 == 0)
            soma = soma + i;

    printf("\nA soma de todos os numeros impares entre 200 e 500 é: %.0f\n", soma);

    return 0;
}
