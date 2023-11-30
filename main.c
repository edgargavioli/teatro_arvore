#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"
int main()
{
    Poltronas* raiz = NULL;
    int opcao;

    do{
        printf("\nMenu:\n");
        printf("1. Inserir Poltrona\n");
        printf("2. Listar Poltronas\n");
        printf("3. Ordenar Poltronas\n");
        printf("4. Excluir elemento\n");
        printf("5. Limpar arvore\n");
        printf("6. Atualizar Poltrona\n");
        printf("7. Mostrar Arvore\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                menuInserir(&raiz);
                system("cls");
                printf("Poltrona inserida com sucesso");
                break;
            case 2:
                system("cls");
                printf("N Poltrona || Disponibilidade\n");
                exibirInOrder(raiz);
                break;
            case 3:
                menuOrdenar(&raiz);
                system("cls");
                printf("Poltronas ordenadas com sucesso");
                break;
            case 4:
                menuRemover(&raiz);
                system("cls");
                printf("Poltrona removida com sucesso");
                break;
            case 5:
                liberarArvore(raiz);
                raiz = NULL;
                system("cls");
                printf("Arvore liberada com sucesso");
                break;
            case 6:
                menuAtualizar(&raiz);
                system("cls");
                printf("Status atualizado com sucesso");
                break;
            case 7:
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
