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
        if(novoValor == 1 || novoValor == 0){
            verdadeiro = 1;
        }else{
            printf("Digite um valor valido: 1 ou 0\n\n");
        }
    }while(verdadeiro != 1);

    *raiz = atualizarPoltrona(*raiz, valorBusca, novoValor);
}
