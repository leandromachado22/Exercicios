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

    // 4. Movimento do Cavalo em "L"
    printf("--- Movimento do Cavalo ---\n");

    int movimentos_baixo = 2;
    int movimentos_esquerda = 1;

    for (int i = 0; i < movimentos_baixo; i++) {
        printf("Baixo\n");

        if (i == movimentos_baixo - 1) { 
            int j = 0;
            
            while (j < movimentos_esquerda) {
                printf("Esquerda\n");
                j++;
            }
        }
    }
                                                                                                                                                                    printf("\n"); // Linha em branco para separar a saída (caso haja mais código no futuro)
    return 0;
}