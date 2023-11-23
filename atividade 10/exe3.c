#include <stdio.h>

main()
{
    float vetor[5];
    int codigo;
    int i;

    printf("Digite 5 números reais:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%f", &vetor[i]);
    }

    printf("Digite um codigo (0 para sair, 1 para ordem direta, 2 para ordem inversa):\n");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 0:
        printf("Programa encerrado.\n");
        break;
    case 1:
        printf("Ordem direta:\n");
        for (i = 0; i < 5; i++)
        {
            printf("%.2f ", vetor[i]);
        }
        break;
    case 2:
        printf("Ordem inversa:\n");
        for (i = 4; i >= 0; i--)
        {
            printf("%.2f ", vetor[i]);
        }
        break;
    default:
        printf("Código inválido.\n");
        break;
    }
}