#include <stdio.h>

// ==========================================
// FUNÇÕES RECURSIVAS
// ==========================================

// 1. Função Recursiva para a Torre (5 casas para a direita)
void moverTorre(int casas) {
    // Condição de parada da recursividade
    if (casas == 0) {
        return; 
    }
    printf("Direita\n");
    // A função chama a si mesma diminuindo o número de casas
    moverTorre(casas - 1); 
}

// 2. Função Recursiva + Loops Aninhados para o Bispo (5 casas Cima/Direita)
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }
    
    // Loops aninhados exigidos para o movimento do Bispo:
    // Loop externo (vertical) e loop interno (horizontal) para 1 passo diagonal
    for (int v = 0; v < 1; v++) {
        printf("Cima, ");
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }
    
    // Chamada recursiva para a próxima casa
    moverBispo(casas - 1);
}

// 3. Função Recursiva para a Rainha (8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ==========================================
// FUNÇÃO PRINCIPAL
// ==========================================

int main() {
    
    // Chamando a movimentação da Torre
    printf("--- Movimento da Torre (Recursivo) ---\n");
    moverTorre(5);
    printf("\n");

    // Chamando a movimentação do Bispo
    printf("--- Movimento do Bispo (Recursivo + Aninhado) ---\n");
    moverBispo(5);
    printf("\n");

    // Chamando a movimentação da Rainha
    printf("--- Movimento da Rainha (Recursivo) ---\n");
    moverRainha(8);
    printf("\n");

    // Chamando a movimentação do Cavalo
    // Movimento: 2 para Cima, 1 para a Direita (Usando loops complexos, break e continue)
    printf("--- Movimento do Cavalo (Loops Complexos) ---\n");
    
    // Declarando múltiplas variáveis no loop for
    for (int i = 0, passos_cima = 0; i < 10; i++) { 
        
        // Condição para o movimento vertical
        if (passos_cima < 2) {
            printf("Cima\n");
            passos_cima++;
            continue; // Pula para a próxima iteração do 'for' imediatamente
        }
        
        // Loop aninhado para o movimento horizontal
        int passos_direita = 0;
        while (1) { // Loop infinito intencional
            if (passos_direita == 1) {
                break; // Interrompe o loop 'while' após 1 movimento
            }
            printf("Direita\n");
            passos_direita++;
        }
        
        // Após terminar o movimento em "L", interrompe o loop 'for' externo
        break; 
    }
    printf("\n");

    return 0;
}
