#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;
    
    srand(time(0));
    numeroComputador = rand() % 100 + 1;
    
    printf("Bem-vindo ao Jogo de Maior, Menor ou Igual!\n");
    printf("Você deve escolher um numero ou tipo de comparaçao:\n");
    printf("M. Maior:\n");
    printf("N. Menor:\n");
    printf("I. Igual:\n");
    printf("escolha uma opçao:\n");
scanf("%c", &tipoComparacao);

    printf("Digite o numero entre (1-100):\n");
    scanf("%d", &numeroJogador);
    ("o numero do comprintfputador é: %d\n", numeroComputador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
    printf("voce escolheu a opçao Maior:\n");

    resultado = numeroJogador > numeroComputador ? 1: 0;
  

    break;

    case 'N':
    case'n':
    printf("voce escolhee a opçao Menor:\n");
    resultado = numeroJogador < numeroComputador ? 1 : 0;
    

    break;
    case 'I':
    case 'i':
    printf("voce escolhee a opçao Igual:\n");
    resultado = numeroJogador == numeroComputador ? 1 : 0;
    
    
        break;
    default:
    printf("opçao invalida\n");
        break;
    }
    printf("o numero do comprintfputador é: %d e o do joagor é: %d\n", numeroComputador, numeroJogador);

    if (resultado == 1)
    {
        printf("parabens voce ganhou\n");
    } else {
        printf("infelizmente voce perdeu\n");
    }
    
}
