#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Poltronas* balancearArvore(Nodo** lista, int inicio, int fim){
    if(inicio>fim){
        return NULL;
    }

    int meio = (inicio + fim) / 2;

    Poltronas* esquerda = balancearArvore(lista, inicio, meio - 1);

    Poltronas* poltronas;

    poltronas = criar((*lista)->poltrona, (*lista)->disponivel);

    *lista = (*lista)->prox;

    Poltronas* direita = balancearArvore(lista, meio + 1, fim);

    poltronas->esquerda = esquerda;
    poltronas->direita = direita;

    return poltronas;
}
