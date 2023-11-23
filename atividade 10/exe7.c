#include <stdio.h>

main()
{
    int vetor1[10];
    int vetor2[10];
    int i, j = 0;

    printf("Digite 10 números inteiros no intervalo (0,50):\n");

    for (i = 0; i < 10; i++)
    {
        do
        {
            scanf("%d", &vetor1[i]);
        } while (vetor1[i] <= 0 || vetor1[i] >= 50);

        if (vetor1[i] % 2 != 0)
        {
            vetor2[j] = vetor1[i];
            j++;
        }
    }

    printf("Vetor 1 e Vetor 2:\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d %d\n", vetor1[i], vetor2[i]);
    }
}