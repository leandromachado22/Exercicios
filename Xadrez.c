#include <stdio.h>

int main() {
    // 1. Movimento da Torre: 5 casas para a direita
    printf("--- Movimento da Torre ---\n");

    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // 2. Movimento do Bispo: 5 casas para cima e à direita
    
    printf("--- Movimento do Bispo ---\n");
    
    int casas_bispo = 0;
    while (casas_bispo < 5) {
        printf("Cima, Direita\n");
        casas_bispo++;
    }
    printf("\n");

    // 3. Movimento da Rainha: 8 casas para a esquerda
    
    printf("--- Movimento da Rainha ---\n");

    int casas_rainha = 0;
    do {
        printf("Esquerda\n");
        casas_rainha++;
    } while (casas_rainha < 8);
    printf("\n");

    return 0;
}