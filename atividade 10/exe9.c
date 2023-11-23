#include <stdio.h>

int main()
{
    int vetor1[10];
    int vetor2[10];
    int resultado[20];
    int i, j = 0;

    printf("Digite 10 números inteiros para o primeiro vetor:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite 10 números inteiros para o segundo vetor:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 10; i++)
    {
        resultado[j++] = vetor1[i];
        resultado[j++] = vetor2[i];
    }

    printf("Vetor resultante:\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d ", resultado[i]);
    }

    return 0;
}