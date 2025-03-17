int main () {

    char nome1[50], nome2[50];
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    float power1, power2;
    int resultado1, resultado2;

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
    scanf("%d", &turisticos1);
    
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
    scanf("%d", &turisticos2); 
    
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
    printf("Pontos turísticos: %d\n", turisticos1);
    printf("Densidade populacional: %f\n",densidade1);
    printf("PIB Per percapita: %f\n", percapita1);

    printf("\n");
    
    printf("Carta 2\n");
    printf("Estado: %s \n", nome2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("Área: %.1f \n", area2);
    printf("PIB: %.1f \n", pib2);
    printf("Pontos turísticos: %d\n", turisticos2);
    printf("Densidade populacional: %f\n", densidade2);
    printf("PIB Per Capita: %f\n", percapita2);

    if (pib1 > pib2)
    {
    printf("O estado %s tem o maior PIB\n", nome1);
    } else {
      printf("O estado %s tem o maior PIB\n", nome2);
    }
    if (area1 > area2)
    {
    printf(" O estado %s tem a maior area\n", nome1);
    } else {
      printf("O estado %s tem a maior area\n", nome2);
    }
    if (populacao1 > populacao2)
    { printf("O estado %s tem a maior populaçao\n",nome1);
    } else { 
      printf("O estado %s tem a maior populaçao\n",nome2);
    }
    if (turisticos1 > turisticos2){
      printf("O estado %s  tem mais pontos turisticos\n", nome1);
    } else {
      printf("O estado %s tem mais pontos turisticos\n", nome2);
    }
    if (densidade1 > densidade2) {
      printf("O estado %s tem amaior densidade populacional\n", nome1);
    } else{
      printf("O estado %s tem a maior densidade popilacional\n",nome2);
    }
    if(percapita1 > percapita2) {
      printf("O estado %s tem a maior renda per percapita\n", nome1);
    } else {
      printf("O estado %s tem a maior renda per percapita\n",nome2);
    }
    return 0;
    }