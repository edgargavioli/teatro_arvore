#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Poltronas* encontrar(Poltronas* raiz, int valor){
    if(raiz == NULL){
        return NULL;
    }

    if(valor < raiz->poltrona){
        return encontrar(raiz->esquerda, valor);
    } else if(valor > raiz->poltrona){
        return encontrar(raiz->direita, valor);
    } else {
        return raiz;
    }
}
