#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAX_CONTATOS 9999

int main() {
    setlocale(LC_ALL, "portuguese");

    int opcao;
    int i;
    int numero[MAX_CONTATOS];
    char contato[MAX_CONTATOS][500];
    int totalContatos =0;

    do {
        printf("\n Menu: \n");
        printf("1 - Adicionar Contato e Número \n");
        printf("2 - Mostrar Contatos \n");
        printf("3 - Sair \n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (totalContatos < MAX_CONTATOS) {
                    printf("Digite o nome do contato: ");
                    getchar();  // Limpar o buffer de entrada
                    fgets(contato[totalContatos], sizeof(contato[totalContatos]), stdin);
                    contato[totalContatos][strcspn(contato[totalContatos], "\n")] = '\0';

                    printf("Digite o número do contato: ");
                    scanf("%d", &numero[totalContatos]);
                    totalContatos++;
                } else {
                    printf("Limite de contatos atingido.\n");
                }
                break;
            case 2:
                if (totalContatos > 0) {
                    printf("\nContatos na agenda:\n");
                    for (i = 0; i < totalContatos; i++) {
                        printf("Nome: %s, Número: %d\n", contato[i], numero[i]);
                    }
                } else {
                    printf("Nenhum contato cadastrado.\n");
                }
                break;
            case 3:
                printf("Finalizando.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}
