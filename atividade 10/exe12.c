#include <stdio.h>

int main()
{
    int vetor[100];
    int i, numero = 1, contador = 0;

    while (contador < 100)
    {
        if (numero % 7 != 0 && numero % 10 != 7)
        {
            vetor[contador] = numero;
            contador++;
        }
        numero++;
    }

    printf("Os primeiros 100 naturais que não são múltiplos de 7 ou terminam com 7 são:\n");

    for (i = 0; i < 100; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}