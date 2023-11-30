#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

void menuInserir(Poltronas** raiz) {
    int numPoltrona, disponivel, valido;
    printf("Digite o numero da poltrona a ser inserida: ");
    scanf("%d", &numPoltrona);
    do{
        printf("Qual a disponibilidade da Poltrona? 1. Ocupada, 0. Disponivel: ");
        scanf("%d", &disponivel);
    if(disponivel == 1 || disponivel == 0){
        valido = 1;
    }else{
        printf("Digite um valor valido: 1 ou 0\n\n");
    }
    }while(valido != 1);

    *raiz = inserir(*raiz, numPoltrona, disponivel);
    printf("Poltrona %d inserida na arvore.\n", numPoltrona);
}
