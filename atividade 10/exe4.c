#include <stdio.h>

main()
{
    int vetor[10];
    int i;

    printf("Digite 10 numeros inteiros:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] < 0)
        {
            vetor[i] = 0;
        }
    }

    printf("Vetor modificado:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
}