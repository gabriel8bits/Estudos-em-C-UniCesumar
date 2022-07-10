#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base1, base2, altura, area;

    printf("Informe a base maior: ");
    scanf("%f", &base1);
    printf("Informe a base menor: ");
    scanf("%f", &base2);
    printf("Informe o valor da altura: ");
    scanf("%f", &altura);

    area = ((base1 + base2) * altura) / 2;

    printf("\nA área do trapézio é: %.2f\n", area);

    return 0;
}
