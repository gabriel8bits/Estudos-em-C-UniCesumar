#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, par, impar, num;

    par = 0;
    impar = 0;

    printf("\nDigite um numero qualquer: ");
    scanf("%d", &num);

    while (num != 0) {

        if (num % 2 == 0) {
            par++;
        } else {
            impar++;
        }

        printf("Digite um numero qualquer: ");
        scanf("%d", &num);
    }

    printf("\nA quantidade de numeros pares foi: %d", par);
    printf("\nA quanidade de numeros impares foi: %d\n", impar);

    return 0;
}
