#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"
#include "listaEncadeada.h"

void percorreEmOrdem(Poltronas* raiz, Nodo** lista){
    if(raiz == NULL){
        return;
    }

    percorreEmOrdem(raiz->direita, lista);
    *lista = criarNodo(*lista, raiz->poltrona, raiz->disponivel);
    percorreEmOrdem(raiz->esquerda, lista);
}
