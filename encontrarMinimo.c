#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Poltronas* encontrarMinimo(Poltronas* raiz){
    while(raiz->esquerda != NULL){
        raiz = raiz->esquerda;
    }

    return raiz;
}
