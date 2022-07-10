#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, ant, suc;

    printf("Digite um numero: ");
    scanf("%d", &num );

    ant = num - 1;
    suc = num + 1;

    printf("\nO numero sucessor é: %d", suc);
    printf("\nO numero antecessor é: %d\n", ant);

    return 0;
}
