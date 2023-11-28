#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

void liberarArvore(Poltronas* raiz){
    if(raiz == NULL){
        return;
    }

    liberarArvore(raiz->esquerda);
    liberarArvore(raiz->direita);
    free(raiz);
}
