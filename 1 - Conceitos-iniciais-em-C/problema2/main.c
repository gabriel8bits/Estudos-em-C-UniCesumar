#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, media;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &n2);
    printf("\nDigite a terceira nota: ");
    scanf("%f", &n3);
    printf("\nDigite a quarta nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("\nA media foi de: %.2f\n", media);

    return 0;
}
