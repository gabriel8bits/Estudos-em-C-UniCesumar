#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, aumento, novoSal;
    int cod;

    printf("\nInforme seu salario: R$");
    scanf("%f", &sal);
    printf("Informe o codico do cargo: ");
    scanf("%d", &cod);

    if(cod == 1) {

        aumento = sal * 0.4;
        novoSal = sal + aumento;

        printf("\nCargo: Servente\n");
        printf("Aumento: R$%.2f\n", aumento);
        printf("Novo salario: R$%.2f\n", novoSal);

    } else {

        if(cod == 2) {

            aumento = sal * 0.35;
            novoSal = sal + aumento;

            printf("\nCargo: Pedreiro\n");
            printf("Aumento: R$%.2f\n", aumento);
            printf("Novo salario: R$%.2f\n", novoSal);

        } else {

            if(cod == 3) {

                aumento = sal * 0.20;
                novoSal = sal + aumento;

                printf("\nCargo: Mestre de Obras\n");
                printf("Aumento: R$%.2f\n", aumento);
                printf("Novo salario: R$%.2f\n", novoSal);

            } else {

                if(cod == 4) {

                    aumento = sal * 0.10;
                    novoSal = sal + aumento;

                    printf("\nCargo: Tecnico de Segurança\n");
                    printf("Aumento: R$%.2f\n", aumento);
                    printf("Novo salario: R$%.2f\n", novoSal);

                } else {
                    printf("\nErro! Codico invalido.\n");
                }
            }
        }
    }

    return 0;
}
