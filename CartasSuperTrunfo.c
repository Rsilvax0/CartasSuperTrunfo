#include <stdio.h>


int main() {

  // variaveis carta1

    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPercapita1;

  // variaveis carta 2
    
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPercapita2;

    // Cadastro carta1

  printf("Cadastro da Carta 1:\n");
  printf("Digite o Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Digite o Codigo da Carta (ex: A01): ");
  scanf("%s", codigo1);
  
  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade1); // lê string com espaço

  printf("Digite a População: ");
  scanf("%d", &populacao1);

  printf("Digite a Area em km²: ");
  scanf("%f", &area1);

  printf("Digite o PIB (em bilhoes de reais); ");
  scanf("%f", &pib1);

  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos1);

  // Calculo de Carta 1

  densidade1 = populacao1 / area1;
  pibPercapita1 = (pib1 * 1000000000) / populacao1; //PIB EM REAIS

    // Cadastro carta2

  printf("Cadastro da Carta 2:\n");
  printf("Digite o Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Digite o Codigo da Carta (ex: B03): ");
  scanf("%s", codigo2);
  
  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade2); //lê string com espaço 

  printf("Digite a População: ");
  scanf("%d", &populacao2);

  printf("Digite a Area em km²: ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhoes de reais); ");
  scanf("%f", &pib2);

  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos2);

  // Calculo de Carta 2

  densidade2 = populacao2 / area2;
  pibPercapita2 = (pib2 * 1000000000) / populacao2; //PIB EM REAIS

  // Exibição dos Dados 

  printf("\n--- Carta 1 ---\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per capita: %.2f reais\n", pibPercapita1);
  
  printf("\n --- Carta 2 ---\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per capita: %.2f reais\n", pibPercapita2);

  return 0;

} 
