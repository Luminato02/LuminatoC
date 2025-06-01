#include <stdio.h>


int main () {
   
    int primeiroAtributo, segundoAtributo;
    int resultado1, resultado2;
    // Dados fixos para Recife
    char nome1[] = "Pernambuco";
    char codigo1[] = "PE";
    char cidade1[] = "Recife";
    unsigned long int populacao1 = 1661000;
    float area1 = 218.0;
    float pib1 = 65.0; // em bilhões
    int pontos1 = 10;
    float densidade1;

    // Dados fixos para Fortaleza
    char nome2[] = "Ceara";
    char codigo2[] = "CE";
    char cidade2[] = "Fortaleza";
    unsigned long int populacao2 = 2703000;
    float area2 = 314.0;
    float pib2 = 78.0; // em bilhões
    int pontos2 = 15;
    float densidade2;
    
    // Cálculos para Recife
    float percapita1 = (pib1 * 1000000000) / populacao1;
    float inverso1 = area1 / populacao1;
    float power1 = populacao1 + area1 + (pib1 * 1000000000) + pontos1 + percapita1 + inverso1;
    densidade2 = (float) populacao2/ area2;
    // Cálculos para Fortaleza
    float percapita2 = (pib2 * 1000000000) / populacao2;
    float inverso2 = area2 / populacao2;
    float power2 = populacao2 + area2 + (pib2 * 1000000000) + pontos2 + percapita2 + inverso2;

    // Impressão dos resultados
    printf("*** CARTA 1 ***\n");
    printf("Estado: %s\n", nome1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: %.1f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("PIB per capita: %.2f\n", percapita1);
    printf("Inverso da densidade: %.8f\n", inverso1);
    printf("Super Poder: %.2f\n\n", power1);

    printf("*** CARTA 2 ***\n");
    printf("Estado: %s\n", nome2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: %.1f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("PIB per capita: %.2f\n", percapita2);
    printf("Inverso da densidade: %.8f\n", inverso2);
    printf("Super Poder: %.2f\n\n", power2);

    printf("comparações de atributos:\n");
    printf("escolha o atributo para comparar:\n");
    printf("1 - Área\n");
    printf("2 - PIB per capita\n");
    printf("3 - Inverso da densidade\n");
    printf("4 - População\n");
    printf("5 - Pontos turísticos\n");
    printf("6 - Super Poder\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 1:
        printf("Comparando Área:\n");   
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 2:
        printf("Comparando PIB per capita:\n");
        resultado1 = percapita1 > percapita2 ? 1 : 0;
        break;
    case 3:
        printf("Comparando Inverso da densidade:\n");
        resultado1 = inverso1 > inverso2 ? 1 : 0;
        break;
    case 4:
        printf("Comparando População:\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 5:
        printf("Comparando Pontos turísticos:\n");
        resultado1 = pontos1 > pontos2 ? 1 : 0;
        break;
    case 6:
        printf("Comparando Super Poder:\n");
        resultado1 = power1 > power2 ? 1 : 0;
        break;
    default:
        break;
    }
        printf("escolja o segundo atributo para comparar:\n");
        printf("Escolha atributo diferente do primeiro:\n");
        printf("1 - Área\n");
        printf("2 - PIB per capita\n");
        printf("3 - Inverso da densidade\n");
        printf("4 - População\n");
        printf("5 - Pontos turísticos\n");
        printf("6 - Super Poder\n");
        printf("Digite o número do atributo: ");
        scanf("%d", &segundoAtributo);

        if (primeiroAtributo == segundoAtributo) {
            printf("Escolha um atributo diferente do primeiro.\n");
            return 1; // Encerra o programa se os atributos forem iguais
        }else {
            switch (segundoAtributo)
            {
            case 1:
                printf("Comparando Área:\n");
                resultado2 = area1 > area2 ? 1 : 0;
                break;
            case 2:
                printf("Comparando PIB per capita:\n");
                resultado2 = percapita1 > percapita2 ? 1 : 0;
                break;
            case 3:
                printf("Comparando Inverso da densidade:\n");
                resultado2 = inverso1 > inverso2 ? 1 : 0;
                break;
            case 4:
                printf("Comparando População:\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                break;
            case 5:
                printf("Comparando Pontos turísticos:\n");
                resultado2 = pontos1 > pontos2 ? 1 : 0;
                break;
            case 6:
                printf("Comparando Super Poder:\n");
                resultado2 = power1 > power2 ? 1 : 0;
                break;
            default:
                break;
            }
        }if (resultado1 && resultado2) {
            printf("parabens voce venceu!\n");
        } else if (resultado1 != resultado2) {
            printf("você empatou!\n");
        } else {
            printf("infelizmente você perdeu!\n");
        }
    return 0;
    }

    
        
