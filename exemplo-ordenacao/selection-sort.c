#include <stdio.h>

// Definindo o tamanho do vetor para o algoritmo funcionar
#define TAMANHO 10

void selecao(int *v) {
    int i, j, aux, minimo, pos_minimo;

    for (i = 0; i < TAMANHO - 1; i++) {
        minimo     = v[i];      // assume que o primeiro da parte não ordenada é o mínimo
        pos_minimo = i;

        for (j = i+1; j < TAMANHO; j++) {  // PASSO 1: busca o real mínimo
            if (minimo > v[j]) {
                minimo     = v[j];
                pos_minimo = j;
            }
        }
        if (pos_minimo != i) {              // PASSO 2: troca somente se necessário
            aux            = v[pos_minimo];
            v[pos_minimo]  = v[i];
            v[i]           = aux;
        }
    }
}

int main() {
    // Vetor de teste desordenado
    int meuVetor[TAMANHO] = {64, 25, 12, 22, 11, 90, 34, 1, 5, 45};
    int k;

    printf("Vetor original:\n");
    for (k = 0; k < TAMANHO; k++) {
        printf("%d ", meuVetor[k]);
    }

    // Chamada do algoritmo de seleção
    selecao(meuVetor);

    printf("\n\nVetor ordenado (Selection Sort):\n");
    for (k = 0; k < TAMANHO; k++) {
        printf("%d ", meuVetor[k]);
    }

    printf("\n");

    return 0;
}