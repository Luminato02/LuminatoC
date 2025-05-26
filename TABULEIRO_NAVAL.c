#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
#define VAZIO '0'

char tabuleiro[TAM][TAM];

void inicializar_tabuleiro() {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = VAZIO;
}

void marcar(int x, int y, char simbolo) {
    if (x >= 0 && x < TAM && y >= 0 && y < TAM)
        tabuleiro[x][y] = simbolo;
}
void usar_cruz(int x, int y) {
    for (int i = 0; i < TAM; i++) marcar(i, y, 'C');  // Coluna
    for (int j = 0; j < TAM; j++) marcar(x, j, 'C');  // Linha
}

void usar_cone(int x, int y) {
    int largura = 1;
    for (int i = x; i < TAM; i++) {
        for (int j = y - largura / 2; j <= y + largura / 2; j++) {
            marcar(i, j, 'V');
        }
        largura += 2;
        if (largura > TAM) break;
    }
}
void usar_octaedro(int x, int y) {
    int alcance = 2;
    for (int dx = -alcance; dx <= alcance; dx++) {
        for (int dy = -alcance; dy <= alcance; dy++) {
            if (abs(dx) + abs(dy) <= alcance) {
                marcar(x + dx, y + dy, 'O');
            }
        }
    }
}
void imprimir_tabuleiro() {
    printf("   ");
    for (int i = 0; i < TAM; i++) printf("%2d", i);
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%2d ", i);
        for (int j = 0; j < TAM; j++) {
            printf("%2c", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    inicializar_tabuleiro();

    usar_cruz(12, 12);       // Cruz no centro
    usar_cone(1, 2);       // Cone no canto superior
    usar_octaedro(7, 7);   // Octaedro no canto inferior

    imprimir_tabuleiro();

    return 0;
}