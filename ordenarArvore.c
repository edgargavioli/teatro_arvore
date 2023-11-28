#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Poltronas* ordenarArvore(Poltronas* raiz, Poltronas* arrayPoltronas[], int tamanho){
    int index = 0;
    percorreEmOrdem(raiz, arrayPoltronas, &index);

    for(int i = 0; i < tamanho - 1; i++) {
        for(int j = 0; j < tamanho - i - 1; j++){
            if(arrayPoltronas[j]->poltrona > arrayPoltronas[j + 1]->poltrona){
                Poltronas* temp = arrayPoltronas[j];
                arrayPoltronas[j] = arrayPoltronas[j];
                arrayPoltronas[j + 1] = temp;
            }
        }
    }

    return balancearArvore(arrayPoltronas, 0, tamanho - 1);
}
