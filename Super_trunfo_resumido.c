#include <stdio.h>


int main () {
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

      // ****Aqui estou comparando os atributos das cartas****
      printf("area -");
      if  (area1 > area2 ? 1 : 0)
        printf("Carta 1 é maior\n");
      else if (area1 < area2 ? 1 : 0)
        printf("Carta 2 é maior\n");
      else
        printf("As cartas são iguais\n");
      
      printf("percapita -");
      if (percapita1 > percapita2 ? 1 : 0)
        printf("Carta 1 é maior\n");
      else if (percapita1 < percapita2 ? 1 : 0)
        printf("Carta 2 é maior\n");
      else
        printf("As cartas são iguais\n");

      printf("PIB -");
      if (pib1 > pib2 ? 1 : 0)
        printf("Carta 1 é maior\n");
      else if (pib1 < pib2 ? 1 : 0)
        printf("Carta 2 é maior\n");
      else
        printf("As cartas são iguais\n");
    
      printf("Densidade -");
      if (densidade1 < densidade2 ? 1 : 0)
        printf("Carta 1 é maior\n");
      else if (densidade1 > densidade2 ? 1 : 0)
        printf("Carta 2 é maior\n");
      else
        printf("As cartas são iguais\n");
    
      printf("pontos - ");
      if (pontos1 > pontos2 ? 1 : 0)
        printf("Carta 1 é maior\n");
      else if (pontos1 < pontos2 ? 1 : 0)
        printf("Carta 2 é maior\n");
      else
        printf("As cartas são iguais\n");
      
      printf("power -");
      if (power1 > power2 ? 1 : 0)
        printf("Carta 1 é maior\n");
      else if (power1 < power2 ? 1 : 0)
        printf("Carta 2 é maior\n");
      else
        printf("As cartas são iguais\n");

      printf("populaçaop");
      if (populacao1 > populacao2 ? 1 : 0)
        printf("Carta 1 é maior\n");
      else if (populacao1 < populacao2 ? 1 : 0)
        printf("Carta 2 é maior\n");
      else
        printf("As cartas são iguais\n");
    printf("\n");

    // Resultado da comparação
    if (power1 > power2)
        printf("RESULTADO: A CARTA 1 (Recife) venceu!\n");
    else if (power2 > power1)
        printf("RESULTADO: A CARTA 2 (Fortaleza) venceu!\n");
    else
        printf("RESULTADO: Empate!\n");

    return 0;
}
