#ifndef LISTAENCADEADA_H_INCLUDED
#define LISTAENCADEADA_H_INCLUDED
#include "arvore.h"

typedef struct {
    int poltrona;
    int disponivel;
    struct Nodo* prox;
}Nodo;

Nodo* criarNodo(Nodo* lista, int poltrona, int disponivel);
void liberarLista(Nodo* lista);

#endif // LISTAENCADEADA_H_INCLUDED
