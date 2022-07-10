#include <stdio.h>
#include <stdlib.h>

int main()
{

    char sexo;
    float peso, altura;

    printf("Informe o sexo: [M/F] ");
    scanf("%c", &sexo);
    printf("Informe o altura: ");
    scanf("%f", &altura);

    if((sexo == 'F') || (sexo == 'f'))
    {

        peso = ((62.1 * altura) - 44.7);
    }
    else
    {
        if((sexo == 'M') || (sexo == 'm'))
        {
            peso = ((72.7 * altura) - 58);
        }

    }

    printf("\nO sexo é: %c", sexo);
    printf("\nA altura é: %.2f", altura);
    printf("\nO peso ideal é: %.2f\n", peso);

    return 0;
}
