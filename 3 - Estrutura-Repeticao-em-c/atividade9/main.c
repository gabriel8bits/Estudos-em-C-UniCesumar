#include <stdio.h>
#include <string.h>

int main()
{
    char comodo[20] = "";
    int largura, comprimento, area;

    area = 0;

    while(strcmp(comodo, "fim") != 0 && strcmp(comodo, "FIM") != 0) {

        printf("Digite o nome do cômodo: ");
        scanf("%s", &comodo);

        if(strcmp(comodo, "fim") != 0 && strcmp(comodo, "FIM") != 0) {

            printf("Digite a largura: ");
            scanf("%d", &largura);
            printf("Digite o comprimento: ");
            scanf("%d", &comprimento);

            area = area + (largura * comprimento);
        }
    }

    printf("\nÁrea total da casa: %d m2\n", area);

    return 0;
}
