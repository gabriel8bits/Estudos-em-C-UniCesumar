#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    float raizQ, quad;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    quad = pow(num, 2);
    raizQ = sqrt(num);

    printf("\nA raiz quadrada do numero %d é: %.4f\n", num, raizQ);
    printf("O quadrado do numero %d é: %.4f\n", num, quad);

    return 0;
}
