#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int escolhaComputador;
    int escolhaJogador;
    srand(time(0));

    printf("Jogo de Jokenpô");
    printf("Escolha uma opiçao\n");
    printf("1. pedra\n");
    printf("2. papel\n");
    printf("3. tesoura\n");
    printf("Escolha uma opçao:");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    switch (escolhaJogador)
    {
        case 1:
        printf("Jogador Pedra -");
        break;
        case 2:
        printf("Jogador Papel - ");
        break;
        case 3:
        printf("Jogador Tesoura -");
        break;
    
    default:
    printf("Opçao invalida");
        break;
    }

    switch (escolhaComputador)
    {
        case 1:
        printf("Computador Pedra \n");
        break;
        case 2:
        printf("Computador Papel\n");
        break;
        case 3:
        printf("Computador Tesoura \n");
        break;

    }

    if (escolhaJogador == escolhaComputador)
    {
        printf("O jogo empatou\n");
    } else if ((escolhaJogador == 1) && (escolhaComputador == 3) ||
            (escolhaJogador == 2) && (escolhaComputador == 1) ||
            (escolhaJogador == 3) && (escolhaComputador == 2))   
    {
        printf("Voce ganhou\n");
    } else {
        printf("voce perdeu\n");
    }
    
    
}