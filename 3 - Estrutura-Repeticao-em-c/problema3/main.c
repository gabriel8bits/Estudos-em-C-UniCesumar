#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, fat, i;

    printf("Informe um numero: ");
    scanf("%d", &num);

    fat = 1;

    for(i = 1; i <= num; i++)
        fat = fat * i;

    printf("\nO fatorial de %d é: %d\n", num, fat);


    return 0;
}
