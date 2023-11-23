#include <stdio.h>

main()
{
    int vetor[20];
    int i, j, k;
    int repetir;

    printf("\nInsira os numeros inteiros:\n");

    for (i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 20; i++)
    {
        repetir = 0;

        for (j = 0; j < i; j++)
        {
            if (vetor[i] == vetor[j])
            {
                repetir = 1;
                break;
            }
        }

        if (!repetir)
        {
            printf("\n %d ", vetor[i]);
        }
    }
}