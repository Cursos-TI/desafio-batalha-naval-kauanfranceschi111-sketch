#include <stdio.h>

int main() {
    int i, j;
    int tabuleiro[10][10] = {0};
    
    int linhaV = 1, colunaV = 2;
    int linhaH = 5, colunaH = 4;
    int tamanho = 3;

    for(i = 0; i < tamanho; i++) tabuleiro[linhaV+i][colunaV] = 3;
    for(i = 0; i < tamanho; i++) tabuleiro[linhaH][colunaH+i] = 3;

    printf("=== TABULEIROS ===\n");
    for(i = 0; i < 10; i++) {
        for( j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

}

    
    