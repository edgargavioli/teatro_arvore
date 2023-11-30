#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

void exibirInOrder(Poltronas* raiz) {
    if (raiz != NULL) {
        exibirInOrder(raiz->esquerda);
        if(raiz->disponivel == 0){
            printf("         %d || Livre\n", raiz->poltrona);
        }else if(raiz->disponivel == 1){
            printf("         %d || Ocupada\n", raiz->poltrona);
        }
        exibirInOrder(raiz->direita);
    }
}

void exibirPreOrder(Poltronas* raiz) {
    if (raiz != NULL) {
        if(raiz->disponivel == 0){
            printf("         %d || Livre\n", raiz->poltrona);
        }else if(raiz->disponivel == 1){
            printf("         %d || Ocupada\n", raiz->poltrona);
        }
        exibirPreOrder(raiz->esquerda);
        exibirPreOrder(raiz->direita);
    }
}

void exibirPostOrder(Poltronas* raiz) {
    if (raiz != NULL) {
        exibirPostOrder(raiz->esquerda);
        exibirPostOrder(raiz->direita);
        if(raiz->disponivel == 0){
            printf("         %d || Livre\n", raiz->poltrona);
        }else if(raiz->disponivel == 1){
            printf("         %d || Ocupada\n", raiz->poltrona);
        }
    }
}
