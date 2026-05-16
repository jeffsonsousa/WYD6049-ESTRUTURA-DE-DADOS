#include <stdio.h>

// Definindo o tamanho do vetor para o algoritmo funcionar
#define TAMANHO 10

void insertion(int *v) {
    int i, j, aux;

    for (i = 0; i < TAMANHO - 1; i++) {
        j = i + 1;              // j aponta para o primeiro elemento não ordenado

        // Enquanto o elemento à esquerda for maior e não chegarmos no início do vetor
        while (j > 0 && v[j-1] > v[j]) {   // Corrigido para verificar j > 0 primeiro (evita erro de índice)
            aux      = v[j-1];
            v[j-1]   = v[j];               // move o elemento para a esquerda
            v[j]     = aux;
            j--;                           // avança j para a esquerda
        }
    }
}

int main() {
    // Vetor de teste desordenado
    int meuVetor[TAMANHO] = {12, 11, 13, 5, 6, 1, 99, 22, 30, 4};
    int k;

    printf("Vetor original:\n");
    for (k = 0; k < TAMANHO; k++) {
        printf("%d ", meuVetor[k]);
    }

    // Chamada do algoritmo de inserção
    insertion(meuVetor);

    printf("\n\nVetor ordenado (Insertion Sort):\n");
    for (k = 0; k < TAMANHO; k++) {
        printf("%d ", meuVetor[k]);
    }

    printf("\n");

    return 0;
}