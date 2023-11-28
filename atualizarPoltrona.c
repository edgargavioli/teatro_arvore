#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Poltronas* atualizarPoltrona(Poltronas* raiz, int valorBusca, int novaDisponibilidade){
    if(raiz == NULL){
        return raiz;
    }

    if(valorBusca < raiz->poltrona){
        raiz->esquerda = atualizarPoltrona(raiz->esquerda, valorBusca, novaDisponibilidade);
    }else if(valorBusca > raiz->poltrona){
        raiz->direita = atualizarPoltrona(raiz->direita, valorBusca, novaDisponibilidade);
    } else if (valorBusca == raiz->poltrona){
        raiz->disponivel = novaDisponibilidade;
        printf("Poltrona atualizada!\n");
    } else {
        printf("Poltrona não encontradad!\n");
    }

    return raiz;
}
