#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    int i, j;
    char nome[5][300];
    float notas[5][3];
    int idade[5];
    float media[5];
    float somaNotas = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Nome do aluno: ");
        gets(nome[i]);

        printf("Digite sua idade: ");
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite uma nota: ");
            scanf("%f", &notas[i][j]);

            somaNotas += notas[i][j];
        }
          
    
        fflush(stdin);
        media[i] = somaNotas / j;
        somaNotas = 0;
    }

    printf("\n Mostrando os Resultados \n");

    for (i = 0; i < 5; i++)
    {
        printf("\n Nome do aluno: %s \n", nome[i]);
        printf("Idade: %d \n", idade[i]);
            
        for (j = 0; j < 3; j++)
        {
            printf("Nota: %1.f \n", notas[i][j]);
        } 


        printf("Media: %2.f \n", media[i]);

        if (media[i] >= 7)
        {
            printf("Aprovado! \n");
        }
        else if (media[i] >= 5 && media[i] < 7)
        {
            printf("Recuperação. \n");
        }
        else if (media[i] < 5)
        {
            printf("Reprovado. \n");
        }
    }

    return 0;
}
