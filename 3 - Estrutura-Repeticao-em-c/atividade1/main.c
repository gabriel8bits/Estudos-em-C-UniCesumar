#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, somaNum, maior, menor, qtdade, par, impar;

    somaNum = 0;
    qtdade = 0;
    par = 0;
    impar = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    while (num != 0) {

        if ( num > maior)
            maior = num;

        if (num < menor)
            menor = num;

        if ( num % 2 == 0)
            par++;
        else
            impar++;

        somaNum = somaNum + num;
        qtdade++;

        printf("Informe um numero inteiro: ");
        scanf("%d", &num);
    }

    printf("\nA media dos valores foi de: %d", somaNum / qtdade);
    printf("\nO maior numero foi: %d", maior);
    printf("\nO menor numero foi: %d", menor);
    printf("\nA quantidade de numeros pares foi: %d", par);
    printf("\nA quantidade de numeros impares foi: %d\n", impar);

    return 0;
}
