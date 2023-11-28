#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"
#include "listaEncadeada.h"

Nodo* criarNodo(Nodo* lista, int poltrona, int disponivel){
    Nodo* novoNodo = (Nodo*)malloc(sizeof(Nodo));

    if(novoNodo == NULL){
        printf("Erro ao alocar memória para o novo nodo da lista\n");
        exit(EXIT_FAILURE);
    }

    novoNodo->poltrona = poltrona;
    novoNodo->disponivel = disponivel;
    novoNodo->prox = lista;

    return novoNodo;
}

void liberarLista(Nodo* lista) {
    Nodo* atual = lista;
    Nodo* proximo;

    while (atual != NULL) {
        proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
}
