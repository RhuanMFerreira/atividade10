
#include <stdio.h>
#include <math.h>

int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    double soma = 0.0, media, desvioPadrao = 0.0;

    // Calculando a média
    for (int i = 0; i < n; i++)
    {
        soma += vetor[i];
    }
    media = soma / n;

    // Calculando a soma dos quadrados das diferenças
    for (int i = 0; i < n; i++)
    {
        desvioPadrao += pow(vetor[i] - media, 2);
    }

    // Finalizando o cálculo do desvio padrão
    desvioPadrao = sqrt(desvioPadrao / (n - 1));

    printf("A média dos elementos do vetor é: %.2f\n", media);
    printf("O desvio padrão é: %.2f\n", desvioPadrao);

    return 0;
}
