#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, estadoCivil, pessoas, casadas, solteiras, separadas, viuvas;
    float peso, mediaIdade, mediaPeso;

    estadoCivil = 0;
    mediaIdade = 0;
    mediaPeso = 0;
    pessoas = 0;
    casadas = 0;
    solteiras = 0;
    separadas = 0;
    viuvas = 0;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    while (idade != 0) {

        mediaIdade += idade;

        printf("Informe seu peso:(kg) ");
        scanf("%f", &peso);

        mediaPeso += peso;

        printf("Estado Civil:\n1 - Solteiro(a)\n2 - Casado(a)\n3 - Viuvo(a)\n4 - Separado(a)\n");
        scanf("%d", &estadoCivil);

        switch (estadoCivil) {
            case 1:
                solteiras++;
                break;
            case 2:
                casadas++;
                break;
            case 3:
                viuvas++;
                break;
            case 4:
                separadas++;
                break;
            default:
                printf("Opção invalida!\n");
                break;
        }

        pessoas++;

        printf("\nInforme sua idade: ");
        scanf("%d", &idade);
    }

    printf("\nA quantidade de pessoas casadas é: %d", casadas);
    printf("\nA quantidade de pessoas solteiras é: %d", solteiras);
    printf("\nA quantidade de pessoas separadas é: %d", separadas);
    printf("\nA quantidade de pessoas viuvas é: %d", viuvas);
    printf("\nA media da idade das pessoas é: %.2f", mediaIdade / pessoas);
    printf("\nA media do peso das pessoas é: %.2f\n", mediaPeso / pessoas);

    return 0;
}
