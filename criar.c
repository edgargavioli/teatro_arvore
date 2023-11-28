#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Poltronas* criar(int numPoltrona, int disponibilidade){
    Poltronas* novaPoltrona = (Poltronas*)malloc(sizeof(Poltronas));
    novaPoltrona->poltrona = numPoltrona;
    novaPoltrona->disponivel = disponibilidade;
    novaPoltrona->esquerda = NULL;
    novaPoltrona->direita = NULL;

    return novaPoltrona;
}

