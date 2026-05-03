#include <stdio.h>

int main() {
    printf("--- Simulador de Movimentos de Xadrez ---\n\n");

    // --- MOVIMENTAÇÃO DA TORRE ---
    // Usando o loop FOR: Ideal para quando sabemos exatamente o número de repetições.
    printf("Movimentando a Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }
    printf("\n");

    // --- MOVIMENTAÇÃO DO BISPO ---
    // Usando o loop WHILE: Executa enquanto a condição for verdadeira.
    printf("Movimentando o Bispo (5 casas na Diagonal Cima/Direita):\n");
    int casaBispo = 1;
    while (casaBispo <= 5) {
        printf("Casa %d: Cima, Direita\n", casaBispo);
        casaBispo++;
    }
    printf("\n");

    // --- MOVIMENTAÇÃO DA RAINHA ---
    // Usando o loop DO-WHILE: Garante que o movimento aconteça pelo menos uma vez.
    printf("Movimentando a Rainha (8 casas para a Esquerda):\n");
    int casaRainha = 1;
    do {
        printf("Casa %d: Esquerda\n", casaRainha);
        casaRainha++;
    } while (casaRainha <= 8);
    printf("\n");

    // --- Movimento do Cavalo ---
    printf("Movimento do Cavalo em L (2 casas para Baixo e 1 para esquerda):\n");
    int casaCavalo = 1;
    while (casaCavalo--)
    {
        for (int i = 0; i < 2; i++) {
            printf("Casa: Baixo\n", casaCavalo); // Imprime "Baixo" duas vezes
        }
        printf("Casa: Esquerda\n", casaCavalo); // Imprime "Esquerda" uma vez
        
    }
    printf("\n");
    return 0;
}