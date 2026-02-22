#include <stdio.h>

int main() {
    // --- Constantes do Nível Novato ---
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;

    // --- Movimentação Novato (Resumo) ---
    printf("--- Movimentação Novato ---\n");
    for (int i = 0; i < MOV_BISPO; i++) printf("Cima, Direita\n");
    printf("\n");

    // --- DESAFIO AVENTUREIRO: O CAVALO ---
    // Regra: Mover em L (Para baixo e para a esquerda)
    // Utilizaremos loops aninhados conforme solicitado.
    
    printf("Movimentação do Cavalo (Aventureiro):\n");

    // Loop externo para o movimento vertical (2 casas para Baixo)
    for (int i = 1; i <= 1; i++) { 
        int j = 0;
        while (j < 2) {
            printf("Baixo\n");
            j++;
        }
        
        // Loop interno para o movimento horizontal (1 casa para Esquerda)
        // No movimento em L simples, após as 2 casas verticais, movemos 1 horizontal
        int k = 0;
        while (k < 1) {
            printf("Esquerda\n");
            k++;
        }
    }

    return 0;
}
