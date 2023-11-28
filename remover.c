#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Poltronas* remover(Poltronas* raiz, int valor) {
    if (raiz == NULL) {
        printf("Valor %d não encontrado...\n", valor);
        return raiz;
    }

    if (valor < raiz->poltrona) {
        raiz->esquerda = remover(raiz->esquerda, valor);
    } else if (valor > raiz->poltrona) {
        raiz->direita = remover(raiz->direita, valor);
    } else {
        // Caso o valor seja igual ao valor do nó
        if (raiz->esquerda == NULL) {
            Poltronas* temp = raiz->direita;
            free(raiz);
            return temp;
        } else if (raiz->direita == NULL) {
            Poltronas* temp = raiz->esquerda;
            free(raiz);
            return temp;
        }

        // Caso o nó tenha dois filhos
        Poltronas* temp = encontrarMinimo(raiz->direita);
        raiz->poltrona = temp->poltrona;
        raiz->direita = remover(raiz->direita, temp->poltrona);
    }

    return raiz;
}

