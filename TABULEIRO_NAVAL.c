#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20 // define o tamanho do tabuleiro
#define VAZIO '0'// define o espaço vazio no tabuleiro

char tabuleiro[TAM][TAM];

void inicializar_tabuleiro() {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = VAZIO;
}

void marcar(int x, int y, char simbolo) { //define a função (x,y)para marcar o tabuleiro
                                        // dentro dos limites do tabuleiro
    if (x >= 0 && x < TAM && y >= 0 && y < TAM)
        tabuleiro[x][y] = simbolo;
}
void usar_cruz(int x, int y) { //desenhei uma cruz no tabuleiro
    for (int i = 0; i < TAM; i++) marcar(i, y, 'C');  // Coluna
    for (int j = 0; j < TAM; j++) marcar(x, j, 'C');  // Linha
}

void usar_cone(int x, int y) { //desenhei um cone no tabuleiro
    int largura = 1;// define a largura inicial do cone
    for (int i = x; i < TAM; i++) { // percorre as linhas do tabuleiro
        for (int j = y - largura / 2; j <= y + largura / 2; j++) {// percorre as colunas do tabuleiro
            marcar(i, j, 'V');// marca o tabuleiro com o símbolo 'V'
        }
        largura += 2;   // aumenta a largura do cone a cada linha
        if (largura > TAM) break;// garante que a largura não ultrapasse o tamanho do tabuleiro
    }
}
void usar_octaedro(int x, int y) {// desenhei um octaedro no tabuleiro
    marcar(x, y, 'O'); // Marca o centro do octaedro
    int alcance = 2;// define o alcance do octaedro
    for (int dx = -alcance; dx <= alcance; dx++) {// percorre as linhas do tabuleiro
        for (int dy = -alcance; dy <= alcance; dy++) {// percorre as colunas do tabuleiro
            if (abs(dx) + abs(dy) <= alcance) {// verifica se a soma dos valores absolutos é menor ou igual ao alcance
                marcar(x + dx, y + dy, 'O');// marca o tabuleiro com o símbolo 'O'
            }
        }
    }
}
void imprimir_tabuleiro() {// imprime o tabuleiro na tela
    printf("   ");
    for (int i = 0; i < TAM; i++) printf("%2d", i);//
    printf("\n");

    for (int i = 0; i < TAM; i++) {//
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