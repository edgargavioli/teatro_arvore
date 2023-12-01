#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"
int main()
{
    char ascii_art[][39] = {
"        _____          _              ",
"       |_   _|        | |             ",
"         | | ___  __ _| |_ _ __ ___   ",
"         | |/ _ \/ _` | __| '__/ _ \  ",
"         | |  __/ (_| | |_| | | (_) | ",
"         \_/\___|\__,_|\__|_|  \___/  "
    };

    // Print the ASCII art
    for (int i = 0; i < 6; ++i) {
        printf("%s\n", ascii_art[i]);
    }
        char ascii_art2[][44] = {
            "___  ___                  _                ",
            "|  \/  |                 (_)               ",
            "| .  . | __ _  __ _  __ _ ___   _____ _ __ ",
            "| |\/| |/ _` |/ _` |/ _` | \ \ / / _ \ '__|",
            "| |  | | (_| | (_| | (_| | |\ V /  __/ |   ",
            "\_|  |_/\__,_|\__, |\__,_|_| \_/ \___|_|   ",
            "               __/ |                       ",
            "              |___/                        "
        };
        for (int i = 0; i < 8; ++i) {
            printf("%s\n", ascii_art2[i]);
        }
    printf("Aperte [ENTER] para acessar o sistema...");
    scanf(stdin);
    system("cls");
    Poltronas* raiz = NULL;
    int opcao;

    do{
        printf("1. Inserir Poltrona\n");
        printf("2. Listar Poltronas Disponiveis\n");
        printf("3. Listar Poltronas\n");
        printf("4. Ordenar Poltronas\n");
        printf("5. Excluir Poltrona\n");
        printf("6. Limpar arvore\n");
        printf("7. Atualizar Poltrona\n");
        printf("8. Mostrar Arvore\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                menuInserir(&raiz);
                system("cls");
                printf("Poltrona inserida com sucesso\n");
                break;
            case 2:
                system("cls");
                printf("N Poltrona || Disponibilidade\n");
                exibirInOrderDisponiveis(raiz);
                break;
            case 3:
                system("cls");
                printf("N Poltrona || Disponibilidade\n");
                exibirInOrder(raiz);
                break;
            case 4:
                menuOrdenar(&raiz);
                system("cls");
                printf("Poltronas ordenadas com sucesso\n");
                break;
            case 5:
                menuRemover(&raiz);
                system("cls");
                printf("Poltrona removida com sucesso\n");
                break;
            case 6:
                liberarArvore(raiz);
                raiz = NULL;
                system("cls");
                printf("Arvore liberada com sucesso\n");
                break;
            case 7:
                menuAtualizar(&raiz);
                system("cls");
                printf("Status atualizado com sucesso\n");
                break;
            case 8:
                system("cls");
                printf("Raiz da arvore: ");
                printf("%d %d\n", raiz->poltrona, raiz->disponivel);
                printf("Em ordem:\n\n");
                exibirInOrder(raiz);
                printf("Em pos ordem:\n\n");
                exibirPostOrder(raiz);
                printf("Em pre ordem:\n\n");
                exibirPreOrder(raiz);
                break;
            case 0:
                printf("Saindo do programa.\n");
                liberarArvore(raiz);
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n\n");
        }

    }while(opcao != 0);


    return 0;
}
