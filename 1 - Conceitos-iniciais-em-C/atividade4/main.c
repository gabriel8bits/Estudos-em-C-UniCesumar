#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141593

int main()
{
    float r;

    printf("Digite o valor do raio: ");
    scanf("%f", &r);

    printf("\nO valor da Área: %.4f", pi * pow(r,2));
    printf("\nO valor do Perímetro: %.4f\n", 2 * pi * r);

    return 0;
}
