#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdadeF, pessoas;
    float sal, somaS, somaF, maiorS;

    printf("\nInforme seu salario: R$");
    scanf("%f", &sal);

    qtdadeF = 0;
    somaS = 0;
    somaF = 0;
    maiorS = 0;

    while (sal != -1)
    {
        printf("Informe a quantidade de filhos: ");
        scanf("%d", &qtdadeF);

        pessoas++;

        if (sal > maiorS)
            maiorS = sal;

        somaF = somaF + qtdadeF;
        somaS = somaS + sal;

        printf("Informe seu salario: R$");
        scanf("%f", &sal);
    }


    printf("\nA media de salarios é: R$%.2f", somaS / pessoas);
    printf("\nA media de filhos é: %.2f", somaF / pessoas);
    printf("\nO maior salario foi de: R$%.2f\n", maiorS);


    return 0;
}
