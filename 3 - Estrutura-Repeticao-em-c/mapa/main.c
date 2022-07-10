#include <stdio.h>

int main()
{
    int dividendo, divisor, quociente, resto;

    printf("Informe o dividendo: ");
    scanf("%d", &dividendo);

    printf("Informe o divisor: ");
    scanf("%d", &divisor);

    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    printf("\nO quociente da divisão é: %d", quociente);
    printf("\nO resto da divisão é: %d\n", resto);

    return 0;
}
