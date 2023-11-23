#include <stdio.h>

int main()
{
    int vetorA[10];
    int vetorB[10];
    int vetorC[10];
    int i;

    printf("Digite os 10 números inteiros para o vetor A:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite os 10 números inteiros para o vetor B:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetorB[i]);
    }

    // Calculando C = A - B
    for (i = 0; i < 10; i++)
    {
        vetorC[i] = vetorA[i] - vetorB[i];
    }

    printf("Resultado (C = A - B):\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vetorC[i]);
    }

    return 0;
}