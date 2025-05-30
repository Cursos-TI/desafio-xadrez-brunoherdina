#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Constantes para definir o número de casas de movimento para cada peça
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8
#define MOVIMENTO_CAVALO_VERTICAL 2    // Movimento vertical do cavalo (L)
#define MOVIMENTO_CAVALO_HORIZONTAL 1  // Movimento horizontal do cavalo (L)

// Função recursiva para movimentação da Torre
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;
    
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para movimentação do Bispo
void moverBispoRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) return;
    
    printf("Direita e Cima\n");
    moverBispoRecursivo(casasRestantes - 1);
}

// Função com loops aninhados para movimentação do Bispo
void moverBispoLoops(int casas) {
    printf("\nMovimentação do Bispo com Loops Aninhados:\n");
    // Loop externo para movimento vertical
    for (int vertical = 1; vertical <= casas; vertical++) {
        // Loop interno para movimento horizontal
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Movimento %d: ", vertical);
            printf("Direita e Cima\n");
        }
    }
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;
    
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

int main() {
    // Movimentação da Torre (recursiva)
    printf("\nMovimentação da Torre - Recursiva:\n");
    moverTorre(MOVIMENTO_TORRE);
    
    // Movimentação do Bispo (recursiva)
    printf("\nMovimentação do Bispo - Recursiva:\n");
    moverBispoRecursivo(MOVIMENTO_BISPO);
    
    // Movimentação do Bispo (loops aninhados)
    moverBispoLoops(MOVIMENTO_BISPO);
    
    // Movimentação da Rainha (recursiva)
    printf("\nMovimentação da Rainha - Recursiva:\n");
    moverRainha(MOVIMENTO_RAINHA);
    
    // Movimentação do Cavalo (loops complexos - duas casas para cima e uma para direita)
    printf("\nMovimentação do Cavalo - Em L (Cima e Direita):\n");
    
    // Loop externo para controlar o movimento completo em L
    for (int movimento = 1; movimento <= 1; movimento++) {
        int passos_vertical = 0;
        int passos_horizontal = 0;
        
        // Loop para movimento vertical (para cima)
        while (passos_vertical < MOVIMENTO_CAVALO_VERTICAL) {
            printf("Cima\n");
            passos_vertical++;
            
            // Se ainda não completou o movimento vertical, continua
            if (passos_vertical < MOVIMENTO_CAVALO_VERTICAL) {
                continue;
            }
            
            // Após completar o movimento vertical, move para direita
            if (passos_horizontal < MOVIMENTO_CAVALO_HORIZONTAL) {
                printf("Direita\n");
                passos_horizontal++;
            }
        }
    }

    return 0;
}
