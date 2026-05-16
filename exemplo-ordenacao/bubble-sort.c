#include <stdio.h>
// Definindo o tamanho do vetor para o algoritmo funcionar
#define TAMANHO 10
void bolha(int *v) {
    int troca = 1;           // flag: continua enquanto houver troca
    int i = 0;
    int aux;
    while (troca) {
        troca = 0;           // assume que não haverá troca nesta passagem
        while (i < TAMANHO - 1) {
            if (v[i] > v[i+1]) {        // par fora de ordem?
                aux    = v[i];
                v[i]   = v[i+1];        // troca os dois elementos
                v[i+1] = aux;
                troca  = 1;             // sinaliza que houve troca
            }
            i++;
        }
        i = 0;               // reinicia o índice para a próxima passagem
    }
}

int main() {
    // 1. Criando um vetor de teste desordenado
    int meuVetor[TAMANHO] = {54, 26, 93, 17, 77, 31, 44, 55, 20, 2};
    int j;

    printf("Vetor original:\n");
    for (j = 0; j < TAMANHO; j++) {
        printf("%d ", meuVetor[j]);
    }

    // 2. Chamada do algoritmo
    bolha(meuVetor);

    // 3. Exibição do vetor ordenado
    printf("\n\nVetor ordenado (Bubble Sort):\n");
    for (j = 0; j < TAMANHO; j++) {
        printf("%d ", meuVetor[j]);
    }
    
    printf("\n");

    return 0;
}