#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"


void menuAtualizar(Poltronas** raiz) {
    int valorBusca, novoValor, verdadeiro;
    printf("Digite a poltrona que deseja atualizar os seus status: ");
    scanf("%d", &valorBusca);
    do{
        printf("Digite o novo status 1. Ocupada, 0. Disponivel: ");
        scanf("%d", &novoValor);
        if(novoValor == 1){
            verdadeiro = 1;
        }

        if(novoValor == 0){
            verdadeiro = 1;
        }
    }while(verdadeiro != 1);

    *raiz = atualizarPoltrona(*raiz, valorBusca, novoValor);
}

int main()
{
    Poltronas* raiz = NULL;
    int opcao;

    do{
        printf("\nMenu:\n");
        printf("1. Inserir Poltrona\n");
        printf("2. Ordenar e Exibir Arvore\n");
        printf("3. Excluir elemento\n");
        printf("4. Limpar arvore\n");
        printf("5. Atualizar Poltrona\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                menuInserir(&raiz);
                break;
            case 2:
                menuOrdenar(raiz);
                break;
            case 3:
                menuRemover(&raiz);
                break;
            case 4:
                liberarArvore(raiz);
                raiz = NULL;
                break;
            case 5:
                menuAtualizar(&raiz);
                break;
            case 0:
                printf("Saindo do programa.\n");
                liberarArvore(raiz);
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    }while(opcao != 0);


    return 0;
}
