#include <stdio.h>

int main()
{
    int vetorA[10];
    int i, acha, busca;

    for (i=0;i<10;i++) {

        printf("Digite o %d elemento: ", i);
        scanf("%d", &vetorA[i]);

    }

    printf("Informe o elemento que deseja buscar: ");
    scanf("%d", &busca);

    i = 0;
    acha = 0;

    while ((acha == 0) && (i < 10)) {

        if (vetorA[i] == busca) {
            acha = 1;
        } else {
            i++;
        }
    }

    if (acha == 1) {
        printf("\nO elemento %d foi achado na posição %d.", busca, i);
    } else {
        printf("\nO elemento não foi encontrado.\n");
    }

    return 0;
}
