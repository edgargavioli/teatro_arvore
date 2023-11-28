#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

void menuInserir(Poltronas** raiz) {
    int numPoltrona, disponivel;
    printf("Digite o numero da poltrona a ser inserida: ");
    scanf("%d", &numPoltrona);
    printf("Qual a disponibilidade da Poltrona? 1. Ocupada, 0. Disponivel: ");
    scanf("%d", &disponivel);
    *raiz = inserir(*raiz, numPoltrona, disponivel);
    printf("Poltrona %d inserida na arvore.\n", numPoltrona);
}
