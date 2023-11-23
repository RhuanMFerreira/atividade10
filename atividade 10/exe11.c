#include <stdio.h>

int main()
{
    int numeroAluno[10];
    float alturaAluno[10];
    int alunoMaisBaixo, alunoMaisAlto;
    float alturaMaisBaixa, alturaMaisAlta;
    int i;

    // Ler os dados
    for (i = 0; i < 10; i++)
    {
        printf("Digite o número do aluno e a sua altura (em metros), separados por espaço:\n");
        scanf("%d %f", &numeroAluno[i], &alturaAluno[i]);

        if (i == 0)
        {
            alunoMaisBaixo = alunoMaisAlto = numeroAluno[i];
            alturaMaisBaixa = alturaMaisAlta = alturaAluno[i];
        }
        else
        {
            if (alturaAluno[i] < alturaMaisBaixa)
            {
                alunoMaisBaixo = numeroAluno[i];
                alturaMaisBaixa = alturaAluno[i];
            }
            if (alturaAluno[i] > alturaMaisAlta)
            {
                alunoMaisAlto = numeroAluno[i];
                alturaMaisAlta = alturaAluno[i];
            }
        }
    }

    // Mostrar os resultados
    printf("Aluno mais baixo:\nNúmero do aluno: %d\nAltura: %.2f metros\n", alunoMaisBaixo, alturaMaisBaixa);
    printf("Aluno mais alto:\nNúmero do aluno: %d\nAltura: %.2f metros\n", alunoMaisAlto, alturaMaisAlta);

    return 0;
}