#include <stdio.h>

int main()
{
    float vetorX[5];
    float vetorY[5];
    int i;
    float produtoEscalar = 0.0;

    printf("Digite os 5 números reais para o vetor X:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &vetorX[i]);
    }

    printf("Digite os 5 números reais para o vetor Y:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &vetorY[i]);
    }

    for (i = 0; i < 5; i++)
    {
        produtoEscalar += vetorX[i] * vetorY[i];
    }

    printf("Vetor X:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%.2f ", vetorX[i]);
    }

    printf("\nVetor Y:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%.2f ", vetorY[i]);
    }

    printf("\nProduto Escalar: %.2f\n", produtoEscalar);

    return 0;
}