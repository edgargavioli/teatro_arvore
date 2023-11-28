#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Poltronas* ordenarArvore(Poltronas* raiz){
    Nodo* lista = NULL;
    percorreEmOrdem(raiz, &lista);

    int tamanhoLista = 0;
    Nodo* temp = lista;

    while(temp != NULL){
        temp = temp->prox;
        tamanhoLista++;
    }

    if(lista != NULL){
        raiz = balancearArvore(&lista, 0, tamanhoLista - 1);
        liberarLista(lista);
        return raiz;
    }

}
