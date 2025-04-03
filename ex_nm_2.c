#include <stdio.h>
int main(){

    int nota1, nota2, media;
    int opcao;

    printf("*** gerenciamento de notas***\n");
    printf("1. calcular media\n");
    printf("2. determinar status\n");
    printf("3. sair\n");
    printf("escplha uma opçao:");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("calcular a media\n");
        printf("digite a primeira nota:\n");
        scanf("%f", &nota1);
        printf("digite a segunda nota:\n");
        scanf("%f", &nota2);

        if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10))
        {
            media = (nota1 + nota2) / 2;
            printf("a media é: %d\n", media);
        } else {
            printf("nota invalida\n");
        }
        
        break;
    case 2:
        printf("determinar status\n");
        printf("digite sua media:\n");
        scanf("%d", &  media);

       // media >= 5 ? printf("aprovado\n") : printf("reprovado\n");
        if (media >= 7)
        {
            printf("aprovado");
        } else if (media >= 5)
        {
            printf("recuperaçao");
        } else {
            printf("reprovado");
        }

        break;
    case 3:
        printf("saindo do programa\n");
        break;    
    default:
    printf("opçao invalida\n");
        break;
    }
    
    return 0;
}