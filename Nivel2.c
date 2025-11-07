#include <stdio.h>

int main() {
    int i, j;
    int tabuleiro[10][10] = {0}; 
    int tamanho = 3;

    int linhaV = 5, colunaV = 6;
    int linhaH = 5, colunaH = 4;
    for(i = 0; i < tamanho; i++) tabuleiro[linhaV + i][colunaV] = 3;
    for(i = 0; i < tamanho; i++) tabuleiro[linhaH][colunaH + i] = 3;

    int linhaD1 = 0, colunaD1 = 0;
    for(i = 0; i < tamanho; i++) tabuleiro[linhaD1 + i][colunaD1 + i] = 3;

    int linhaD2 = 3, colunaD2 = 8;
    for(i = 0; i < tamanho; i++) tabuleiro[linhaD2 + i][colunaD2 - i] = 3;

    printf("=== TABULEIRO COMPLETO ===\n");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}