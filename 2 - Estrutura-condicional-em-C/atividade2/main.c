#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    if((num % 3 == 0) && (num % 7 == 0)) {
        printf("\nO numero %d é divisivel por 7 e por 3.\n", num);
    } else {
        printf("\nO numero %d NÃO é divisivel por 7 e por 3.\n", num);
    }

    return 0;
}
