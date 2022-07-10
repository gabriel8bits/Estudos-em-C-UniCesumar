#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, pessoas;
    float altura, somaA, somaI;

    pessoas = 0;
    somaA = 0;
    somaI = 0;

    printf("Informe a idade: ");
    scanf("%d", &idade);

    while (idade != 0) {

        printf("Informe sua altura: ");
        scanf("%f", &altura);

        pessoas++;
        somaA = somaA + altura;
        somaI = somaI + idade;

        printf("Informe a idade: ");
        scanf("%d", &idade);

    }

    printf("\nA média de altura é: %.2f", somaA / pessoas);
    printf("\nA média de idade é: %.2f\n", somaI / pessoas);

    return 0;
}
