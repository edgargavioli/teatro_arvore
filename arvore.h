#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED
#include "listaEncadeada.h"

typedef struct {
    int poltrona;
    int disponivel;
    struct Poltrona *direita;
    struct Poltrona *esquerda;
}Poltronas;

Poltronas* criar(int numPoltrona, int diponibilidade);

Poltronas* inserir(Poltronas* raiz, int poltrona, int disponivel);

void percorreEmOrdem(Poltronas* raiz, Nodo** lista);

Poltronas* ordenarArvore(Poltronas* raiz);

Poltronas* balancearArvore(Nodo** lista, int inicio, int fim);

int contar(Poltronas* raiz);

Poltronas* encontrarMinimo(Poltronas* raiz);

Poltronas* remover(Poltronas* raiz, int valor);

Poltronas* encontrar(Poltronas* raiz, int valor);

Poltronas* atualizarPoltrona(Poltronas* raiz, int valorBusca, int novaDisponibilidade);

void liberarArvore(Poltronas* raiz);

void menuOrdenar(Poltronas** raiz);

void menuInserir(Poltronas** raiz);

void menuRemover(Poltronas** raiz);


#endif // ARVORE_H_INCLUDED
