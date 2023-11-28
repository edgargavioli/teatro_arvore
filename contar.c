#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"


int contarNos(Poltronas* raiz) {
    if (raiz == NULL) {
        return 0;
    } else {
        return 1 + contarNos(raiz->esquerda) + contarNos(raiz->direita);
    }
}
