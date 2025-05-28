#include <stdio.h>
#include <stdlib.h>


int main () {

    char nome1[50], nome2[50];
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    float power1, power2;
    int resultado1, resultado2;
    int Nome1, Nome2;

 

    printf("***Cadastre sua primeira carta***\n");
    
    printf("Digite o nome do estado: \n");
    scanf("%s", &nome1);
    
    printf("Código da cidade: \n");
    scanf("%s", &codigo1);
    
    printf("Nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Populaçao: \n");
    scanf("%d", &populacao1);
    
    printf("PIB da cidade: \n");
    scanf("%f", &pib1);
    
    printf("Área da cidade: \n");
    scanf("%f", &area1);
    
    printf("Pontos turísticos da cidade: \n");
    scanf("%d", &pontos1);
    
    densidade1 = (float)(populacao1 / area1);
    percapita1 =  (float)(pib1 / populacao1 );
    
    printf("***Cadastre sua segunda carta***\n");
    printf("Nome do estado: \n");
    scanf("%s", &nome2);
    
    printf("Código da cidade: \n");
    scanf("%s", &codigo2);
    
    printf("Nome da cidade: \n");
    scanf("%s", &cidade2);
    
    printf("Populaçao:\n");
    scanf("%d", &populacao2);
    
    printf("Área da cidade: \n");
    scanf("%f", &area2);
    
    printf("PIB da cidade: \n");
    scanf("%f", &pib2);
    
    printf("Pontos turísticos: \n");
    scanf("%d", &pontos2); 
    printf("\n");
    
    densidade2 = (float) (populacao2/ area2);
    percapita2  =  (float) (pib2 / populacao2);

    power1 = (area1 + pib1 + percapita1 + densidade1 + populacao1);
    power2 = (area2 + pib2 + percapita2 + densidade2 + populacao2);

    resultado1 = (power1 > power2);
    resultado2 = (power2 > power1);

  
    printf("Cartas cadrastadas com sucesso! \n");
    printf("Aqui estão suas cartas:\n)");
    printf("\n");
    
    printf("Carta 1\n");
    printf("Estado: %s \n", nome1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("Área: %.1f \n", area1);
    printf("PIB: %.1f \n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %f\n",densidade1);
    printf("PIB Per percapita: %.1f\n", percapita1);
    printf("power1: %1.f\n", power1);

    printf("\n");
    
    printf("Carta 2\n");
    printf("Estado: %s \n", nome2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("Área: %.1f \n", area2);
    printf("PIB: %.1f \n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %f\n", densidade2);
    printf("PIB Per Capita: %.1f\n", percapita2);
    printf("power2: %.1f\n", power2);
    printf("\n");

    printf("comparação de cartas:\n");

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
     
    return 0;
}
