#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30];
    int idade;

    printf("\nDigite seu nome: ");
    scanf("%s", &nome);
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("\nNome: %s \n", nome);
    printf("Idade: %d \n", idade);

    if(idade < 18)
    {
        printf("Sua mensalidade é de R$50,00\n");
    }
    else
    {
        if ((idade >= 18) && (idade <= 29))
        {
            printf("Sua mensalidade é de R$70,00\n");
        }
        else
        {
            if((idade > 29) && (idade <= 45))
            {
                printf("Sua mensalidade é de R$90,00\n");
            }
            else
            {
                if((idade > 45) && (idade <= 65))
                {
                    printf("Sua mensalidade é de R$130,00\n");
                }
                else
                {
                    if((idade > 65) && (idade <= 100))
                    {
                        printf("Sua mensalidade é de R$170,00\n");
                    }
                    else
                    {
                        printf("Erro! idade invalida.\n");
                    }
                }
            }
        }
    }

    return 0;
}
