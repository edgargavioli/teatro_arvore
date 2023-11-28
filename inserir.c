#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Poltronas* inserir(Poltronas* raiz, int poltrona, int disponivel){
    if(raiz == NULL){
        return criar(poltrona, disponivel);
    }

    if(poltrona < raiz->poltrona){
        raiz->esquerda = inserir(raiz->esquerda, poltrona, disponivel);
    }else if(poltrona > raiz->poltrona){
        raiz->direita = inserir(raiz->direita, poltrona, disponivel);
    }

    return raiz;
}
