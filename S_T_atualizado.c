#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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

   // srand(time(0));
    //area1 = 1;
    //area2 = 0;
    //pib1 = 1;
    //pib2 = 0;
    //populacao1 = 1;
    //populacao2 = 0;
    //pontos1 =1;
    //pontos2 = 0;
    //densidade1 = 1;
    //densidade2 = 0;
    //percapita1 = 1;
    //percapita2 = 0;
    //power1 = 1;
    //power2 = 0;

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
    printf("\n");
    
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
    
    densidade2 =  (populacao2/ area2);
    percapita2  =   (pib2 / populacao2);

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
    printf("PIB Per percapita: %f\n", percapita1);

    printf("\n");
    
    printf("Carta 2\n");
    printf("Estado: %s \n", nome2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("Área: %.1f \n", area2);
    printf("PIB: %.1f \n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %f\n", densidade2);
    printf("PIB Per Capita: %f\n", percapita2);
    printf("power1: %f\n", power1);
    printf("power2: %f\n", power2);

    printf("***Carta 1***");
    printf("Escolha um atributo\n");
    printf("1. area\n");
    printf("2. percapita\n");
    printf("3. PIB\n");
    printf("4. Densidade\n");
    printf("5. pontos");
    printf("6. power:\n");
    printf("7. populaçao:\n");
    printf(" Escolha uma opçao");
    scanf("%d", &nome1);

  
    switch (Nome1)
    {
    case 1:
      printf("area -"); 
     resultado1 = area1 > area2 ? 1 : 0;
      break; 
      case 2:
      printf("percapita -"); 
 resultado1 = percapita1 > percapita2 ? 1 : 0;
      break;
      case 3:
      printf("PIB -");
resultado1 = pib1 > pib2 ? 1 : 0;
      break;
      case 4:
      printf("Densidade -");
resultado1 = densidade1 < densidade2 ? 1 : 0;
      break;
      case 5:
      printf("pontos -");
resultado1 = pontos1 > pontos2 ? 1 : 0;
      case 6:
      printf("power -");
resultado1 = power1 > power2 ? 1 : 0;
      break;
      case 7:
      printf("populaçaop");
      resultado1 = populacao1 > populacao2 ? 1 : 0;
      break;
    } 
    printf("\n");
    printf("***carta 2***");
    printf("escolha um atributo: \n");
    printf("1. area\n");
    printf("2. percapita\n");
    printf("3. PIB\n");
    printf("4. Densidade\n");
    printf("5. pontos: \n");
    printf("6. power:\n");
    printf("7. populaçao:\n");
    printf("escolha uma opçao: \n");
  
    scanf("%d", &Nome2);

    switch (Nome2)
    {
    case 1:
      printf("area -");
      resultado2 = area1 > area2 ? 1 : 0;
      break;
    
      case 2:
      printf("percapita -");
      resultado2 = percapita1 > percapita2 ? 1 : 0;
      break;

      case 3:
      printf("PIB -");
      resultado2 = pib1 > pib2 ? 1 : 0;
      break;

      case 4:
      printf("Densidade -");
      resultado2 = densidade1 < densidade2 ? 1 : 0;
      break;

      case 5:
      printf("pontos - ");
      resultado2 = pontos1 > pontos2 ? 1 : 0;
      
      case 6:
      printf("power -");
      resultado2 = power1 > power2 ? 1 : 0;
      break;
      case 7:
      printf("populaçaop");
      resultado2 = populacao1 > populacao2 ? 1 : 0;
      break;

    default:

      break;
    }
    printf("\n");
    if (resultado1 && resultado2)
    {
      printf("Parabens voce venceu!\n");
    } else if (resultado1 =! resultado2){
      printf("voce empatou!\n");
    } else{
      printf("voce perdeu\n");
    } 


    return 0;
    }