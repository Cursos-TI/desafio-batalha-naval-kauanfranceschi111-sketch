#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main() {
    int tabuleiro[LINHA][COLUNA];
    int i, j;

    for(i = 0; i < LINHA; i++)
        for(j = 0; j < COLUNA; j++)
            tabuleiro[i][j] = 0;

    for(i = 0; i <= 4; i++)
        tabuleiro[i][3] = 3;

    for(j = 0; j <= 5; j++)
        tabuleiro[2][j] = 3;

    tabuleiro[5][2] = 1;
    for(j = 1; j <= 3; j++) tabuleiro[6][j] = 1;
    for(j = 0; j <= 4; j++) tabuleiro[7][j] = 1;

    tabuleiro[3][7] = 2;
    tabuleiro[4][6] = 2; tabuleiro[4][7] = 2; tabuleiro[4][8] = 2;
    tabuleiro[5][5] = 2; tabuleiro[5][6] = 2; tabuleiro[5][7] = 2; tabuleiro[5][8] = 2; tabuleiro[5][9] = 2;
    tabuleiro[6][6] = 2; tabuleiro[6][7] = 2; tabuleiro[6][8] = 2;
    tabuleiro[7][7] = 2;

    printf("  ");
    for(j = 0; j < COLUNA; j++) printf("%d ", j);
    printf("\n");

    // Imprime tabuleiro
    for(i = 0; i < LINHA; i++) {
        printf("%d ", i);
        for(j = 0; j < COLUNA; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }

    return 0;
}
