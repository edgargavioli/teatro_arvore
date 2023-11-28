#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

void menuOrdenar(Poltronas* raiz) {
    if (raiz == NULL) {
        printf("A arvore esta vazia.\n");
        return;
    }

    int tamanhoArray = contarNos(raiz);
    Poltronas** arrayPoltronas = (Poltronas**)malloc(tamanhoArray * sizeof(Poltronas*));

    ordenarArvore(raiz, arrayPoltronas, tamanhoArray);

    printf("Arvore ordenada:\n");
    for (int i = 0; i < tamanhoArray; i++) {
        printf("%d ", arrayPoltronas[i]->poltrona);
    }
    printf("\n");

    free(arrayPoltronas);
}
