#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;

    for(i=1; i < 30; i++) {

        if(i % 3 == 0)
            printf("O número %d é divisivel por 3.\n", i);

        if(i % 7 == 0)
            printf("O número %d é divisivel por 7.\n", i);

    }

    return 0;
}
