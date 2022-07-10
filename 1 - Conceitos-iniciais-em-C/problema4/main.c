#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num1, num2, total;

    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);

    total = pow(num1, num2);

    printf("\nO numero %.1f elevado a %.1f é igual a: %.2f\n", num1, num2, total);

    return 0;
}
