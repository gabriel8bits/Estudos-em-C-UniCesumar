#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabuada, i;

    tabuada = 0;

    printf("Digite a tabuada que deseja ver: ");
    scanf("%d", &tabuada);

    for (i=1; i <= 10; i++)
        printf("%d X %d = %d\n", i, tabuada, i * tabuada);


    return 0;
}
