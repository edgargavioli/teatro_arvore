#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

void menuOrdenar(Poltronas** raiz) {
    if (raiz == NULL) {
        printf("A arvore esta vazia.\n");
        return;
    }

    *raiz = ordenarArvore(*raiz);

    printf("Arvore ordenada:\n");
}
