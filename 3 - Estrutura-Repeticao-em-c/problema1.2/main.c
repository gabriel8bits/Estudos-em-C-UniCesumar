#include <stdio.h>
#include <stdlib.h>

int main()
{
    int par, impar, num;

    par = 0;
    impar = 0;

    do
    {

        printf("Digite um numero qualquer: ");
        scanf("%d", &num);

        if(num % 2 == 0) {
            par++;
        } else {
            impar++;
        }

    }
    while(num != 0);

    printf("\nA quantidade de numeros pares foi: %d", par);
    printf("\nA quantidade de numeros impares foi: %d\n", impar);

    return 0;
}
