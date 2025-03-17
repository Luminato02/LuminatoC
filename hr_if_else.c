#include <stdio.h>
int main (){

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a Temperatura: \n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade:\n");
    scanf("%f", &umidade);

    printf("Entre com o estoque: \n");
    scanf("%u",&estoque);

    if (temperatura > 30)
    {
        printf("a temperatura esta alta!\n");
    } else {
        printf("temperatura esta dentro dos parametros!\n");
    }
    if (umidade > 50)
    {
     printf("a umidade esta alta!\n");
    } else {
        printf("umidade esta dentro dos parametros\n");
    }
     if (estoque > estoqueMinimo){
        printf("estoque acima do minimo\n");
     } else{
        printf("estoque abaixo do minimo\n");
     }
       
    
    
}