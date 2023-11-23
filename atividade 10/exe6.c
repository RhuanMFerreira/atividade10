#include <stdio.h>

main()
{
    int vetor[50];
    int i;

    for (i = 0; i < 50; i++)
    {
        vetor[i] = i + 5;
    }

    printf("Vetor:\n");

    for (i = 0; i < 50; i++)
    {
        printf("(%+d) ", vetor[i]);
    }
}