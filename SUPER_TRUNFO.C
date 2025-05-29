#include <stdio.h>
#include <stdlib.h>


int main () {

    char nome1[50], nome2[50];
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    float power1, power2;
    int resultado1, resultado2;
    int Nome1, Nome2;
    float inverso1, inverso2;
 

    printf("***Cadastre sua primeira carta***\n");
    
    printf("Digite o nome do estado: \n");
    scanf("%s", &nome1);
    // Nome do estado: PERNAMBUCO
    printf("Código da cidade: \n");
    scanf("%s", &codigo1);
    // Código da cidade: PE
    printf("Nome da cidade: \n");
    scanf("%s", &cidade1);
    // Nome da cidade: RECIFE
    printf("Populaçao: \n");
    scanf("%lu", &populacao1);
    // População: 1661000 milhoes
    printf("PIB da cidade: \n");
    scanf("%f", &pib1);
    // PIB da cidade: 65.0000 bilhoes
    printf("Área da cidade: \n");
    scanf("%f", &area1);
    // Área da cidade: 218.0 KM²
    printf("Pontos turísticos da cidade: \n");
    scanf("%d", &pontos1);  // Pontos turísticos: 10
  
    densidade1 = (float) populacao1 / area1;//aqui estou calculando a densidade populacional
    percapita1 =  (float) pib1 *1000000000 / populacao1 ;// aqui estou calculando o PIB per capita
    inverso1 = (float) area1 / populacao1;

    printf("***Cadastre sua segunda carta***\n");
    printf("Nome do estado: \n");
    scanf("%s", &nome2);
    // Nome do estado: CEARÁ
    printf("Código da cidade: \n");
    scanf("%s", &codigo2);
    // Código da cidade: CE
    printf("Nome da cidade: \n");
    scanf("%s", &cidade2);
    // Nome da cidade: FORTALEZA
    printf("Populaçao:\n");
    scanf("%lu", &populacao2);
    // População: 2703000 milhoes
    printf("Área da cidade: \n");
    scanf("%f", &area2);
    // Área da cidade: 314.0 KM²
    printf("PIB da cidade: \n");
    scanf("%f", &pib2);
    // PIB da cidade: 78.0 bilhoes
    printf("Pontos turísticos: \n");
    scanf("%d", &pontos2); 
    // Pontos turísticos: 15
    printf("\n");
    
    densidade2 = (float) populacao2/ area2;// aqui estou calculando a densidade populacional 
    percapita2  =  (float) pib2 *1000000000 / populacao2;// aqui estou calculando o PIB per capita
    inverso2 = (float) area2 / populacao2;

    power1 = (area1 + pib1 *1000000000 + percapita1 + inverso1 + populacao1 + pontos1);// aqui estou calculando o super poder das cartas
   //multipliquei o pib que é um float por um inteiro para o resultado final ser float.                                                             // o super poder é a soma de todos os atributos da carta
    power2 = (area2 + pib2 *1000000000 + percapita2 + inverso2 + populacao2 + pontos2);

    resultado1 = (power1 > power2);// aqui estou comparando o super poder das cartas
    // se o super poder da carta 1 for maior que o da carta 2, resultado1 será verdadeiro (1)
    resultado2 = (power2 > power1);

  
    printf("Cartas cadrastadas com sucesso! \n");
    printf("Aqui estão suas cartas:\n)");
    printf("\n");
    
    printf("Carta 1\n");
    printf("Estado: %s \n", nome1);//estado: PERNAMBUCO
    printf("Código: %s \n", codigo1);// Código da cidade: PE
    printf("Cidade: %s \n", cidade1);// Cidade: RECIFE
    printf("População: %lu \n", populacao1);// População: 16610000
    printf("Área: %.1f \n", area1);// Área: 218.0
    printf("PIB: %.1f \n", pib1);// PIB: 65.0 bolhoes
    printf("Pontos turísticos: %d\n", pontos1);// Pontos turísticos: 10
    printf("Densidade populacional: %f\n",densidade1);
    printf("PIB Per percapita: %.1f\n", percapita1);
    printf("power1: %f\n", power1);
   
    printf("\n");
    
    printf("Carta 2\n");
    printf("Estado: %s \n", nome2);// Estado: CEARÁ
    printf("Código: %s \n", codigo2);// Código da cidade: CE
    printf("Cidade: %s \n", cidade2);// Cidade: FORTALEZA
    printf("População: %lu \n", populacao2);// População: 2703000
    printf("Área: %.1f \n", area2);// Área: 314.0
    printf("PIB: %.1f \n", pib2);// PIB: 78.0 bilhoes
    printf("Pontos turísticos: %d\n", pontos2);//pontos turísticos: 15
    printf("Densidade populacional: %f\n", densidade2);
    printf("PIB Per Capita: %.1f\n", percapita2);
    printf("power2: %f\n", power2);
    printf("\n");

    printf("comparação de cartas:\n");

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
