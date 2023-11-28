#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

void percorreEmOrdem(Poltronas* raiz, Poltronas* arrayPoltronas[], int* index){
    if(raiz == NULL){
        return;
    }

    percorreEmOrdem(raiz->esquerda, arrayPoltronas, index);
    arrayPoltronas[(*index)++] = raiz;
    percorreEmOrdem(raiz->direita,arrayPoltronas, index);
}
