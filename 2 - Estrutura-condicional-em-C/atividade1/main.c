#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, maior, menor;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    printf("\nDigite o segundo numero: ");
    scanf("%d", &num);

    if(num > maior){
        maior = num;
    }
    if(num < menor){
        menor = num;
    }

    printf("\nDigite o terceiro numero: ");
    scanf("%d", &num);

    if(num > maior){
        maior = num;
    }
    if(num < menor){
        menor = num;
    }

    printf("\nDigite o quarto numero: ");
    scanf("%d", &num);

    if(num > maior){
        maior = num;
    }
    if(num < menor){
        menor = num;
    }

    printf("\nDigite o quinto numero: ");
    scanf("%d", &num);

    if(num > maior){
        maior = num;
    }
    if(num < menor){
        menor = num;
    }

    printf("\nO maior numero foi: %d", maior);
    printf("\nO menor numero foi: %d\n", menor);

    return 0;
}
