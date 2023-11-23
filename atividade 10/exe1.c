#include <stdio.h>

main()
{
    int vetor[10];
    int i, j;

    printf("\nInsira os valores inteiros:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Valores iguais encontrados:\n");

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (vetor[i] == vetor[j])
            {
                printf("%d\n", vetor[i]);
            }
        }
    }
}