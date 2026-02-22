#include <stdio.h>

/**
 * Desafio de Xadrez - MateCheck
 * Nível Novato: Implementação de movimentação básica com loops.
 */

int main() {
    // Definição de constantes para os limites de movimentação (Requisito Funcional 1)
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_RAINHA = 8;

    // --- Movimentação do Bispo ---
    // Regra: 5 casas na diagonal superior direita.
    // Como o Bispo se move em diagonal, combinamos duas direções básicas.
    printf("Movimentação do Bispo:\n");
    for (int i = 1; i <= MOVIMENTO_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n"); // Linha em branco para separar as peças

    // --- Movimentação da Torre ---
    // Regra: 5 casas para a direita.
    // Utilizando a estrutura 'while' para variar os loops.
    printf("Movimentação da Torre:\n");
    int t = 0;
    while (t < MOVIMENTO_TORRE) {
        printf("Direita\n");
        t++;
    }
    printf("\n");

    // --- Movimentação da Rainha ---
    // Regra: 8 casas para a esquerda.
    // Utilizando a estrutura 'do-while' para completar a diversidade de loops.
    printf("Movimentação da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < MOVIMENTO_RAINHA);

    return 0;
}
