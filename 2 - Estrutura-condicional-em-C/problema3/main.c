#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("\nInforme sua idade: ");
    scanf("%d", &idade);

    if((idade < 18) || (idade > 65))
    {
        printf("Eleitor facultativo.\n");
    }
    else
    {
        if((idade >= 18) && (idade <65))
        {
            printf("Eleitor obrigatorio.\n");
        }
        else
        {
            printf("Erro! Informe uma idade valida.\n");
        }
    }

    return 0;
}
