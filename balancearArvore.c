#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Poltronas* balancearArvore(Poltronas* arrayPoltronas[], int inicio, int fim){
    if(inicio>fim){
        return NULL;
    }

    int meio = (inicio + fim) / 2;

    Poltronas* raiz = criar(arrayPoltronas[meio], arrayPoltronas[meio]->disponivel);
    raiz->esquerda = balancearArvore(arrayPoltronas, inicio, meio - 1);
    raiz->direita = balancearArvore(arrayPoltronas, meio + 1, fim);

    return raiz;
}
