#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

void menuRemover(Poltronas** raiz){
    int valor = 0;
    printf("Digite o valor que deseja remvoer: ");
    scanf("%d", &valor);

    *raiz = remover(*raiz, valor);
}
