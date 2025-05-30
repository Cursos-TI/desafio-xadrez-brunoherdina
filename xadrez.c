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

int main() {
    int i;
    
    // Movimentação do Bispo (5 casas na diagonal superior direita)
    printf("\nMovimentação do Bispo - Diagonal Superior Direita:\n");
    for (i = 1; i <= MOVIMENTO_BISPO; i++) {
        printf("Movimento %d: Direita e Cima\n", i);
    }
    
    // Movimentação da Torre (5 casas para a direita)
    printf("\nMovimentação da Torre - Direita:\n");
    for (i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf("Movimento %d: Direita\n", i);
    }
    
    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimentação da Rainha - Esquerda:\n");
    for (i = 1; i <= MOVIMENTO_RAINHA; i++) {
        printf("Movimento %d: Esquerda\n", i);
    }

    // Movimentação do Cavalo (em L - para baixo e para a esquerda)
    printf("\nMovimentação do Cavalo - Em L (Baixo e Esquerda):\n");
    int movimento = 1;
    for (i = 1; i <= 1; i++) {
        int j = 1;
        // Primeiro movimento: vertical (para baixo)
        do {
            printf("Passo %d: Baixo\n", j);
            j++;
        } while (j <= MOVIMENTO_CAVALO_VERTICAL);
        
        // Segundo movimento: horizontal (para a esquerda)
        printf("Passo %d: Esquerda\n", j);
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
