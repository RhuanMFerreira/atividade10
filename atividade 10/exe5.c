#include <stdio.h>

main()
{
    int vetor[10];
    int r;
    int i, count = 0;

    printf("Digite 10 números inteiros:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o número r:\n");
    scanf("%d", &r);

    printf("Múltiplos de %d:\n", r);

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] % r == 0)
        {
            printf("%d ", vetor[i]);
            count++;
        }
    }

    if (count == 0)
    {
        printf("Nenhum múltiplo de %d encontrado.\n", r);
    }
}