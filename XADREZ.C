#include <stdio.h>
    //estou Utiliziando recursividade para simular os movimentos das peças de xadrez.
     void movertorre(int casas){

        if (casas > 0){
            printf("Torre - direita\n");
            movertorre(casas - 1);
        }
     }

     void moverbispo(int casas){

        if (casas > 0){
            printf("Bispo - diagonal direita cima\n");
            moverbispo(casas - 1);
        }
     }
     void moverrainha(int casas){

        if (casas > 0){
            printf("Rainha - esquerda\n");
            moverrainha(casas - 1);
        }
     }

     int main(){

        movertorre(5);
        moverbispo(5);
        moverrainha(8);
        int movimento = 1;
     //finalmente, estou utilizando um loop aninhados para simular o movimento do cavalo.

    while (movimento--)
    {
    
        for (int i = 0; i < 2; i++)
    {
            printf("Cavalo - cima\n");
        } printf("Cavalo - direita\n");
    }
    return 0;
       
}