#include <stdio.h>

int main() {

  // CARTA 1  

  char estado1;
  char codigo1[4];
  char cidade1[50];

  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontos1;

  double densidade1;
  double pibpercapita1;

  // CARTA 2 - ROMA

  char estado2;
  char codigo2[4];
  char cidade2[50];

  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontos2;

  double densidade2;
  double pibpercapita2;

  // Área para entrada de dados

  printf("Cadastro da Carta 1\n");

  printf("Estado: ");
  scanf(" %c", &estado1);

  printf ("Codigo:  ");
  scanf("%s", codigo1);

  printf("Cidade:  ");
  scanf("%s", cidade1);

  printf("Populacao: ");
  scanf("%u",  &populacao1);

  printf("Area: ");
  scanf("%f", &area1);

  printf("PIB:  ");
  scanf("%f", &pib1);

  printf("Pontos Turísticos: ");
  scanf("%d", &pontos1); 

    //calculos
  densidade1 =  populacao1 / area1;
  pibpercapita1 =  pib1 / populacao1;

 // CARTA 2

  printf("Cadastro da Carta 2\n");

  printf("Estado:  ");
  scanf(" %c", &estado2);

  printf ("Codigo:  ");
  scanf("%s", codigo2);

  printf("Cidade:  ");
  scanf("%s", cidade2);

  printf("Populacao: ");
  scanf("%u",  &populacao2);

  printf("Area: ");
  scanf("%f", &area2);

  printf("PIB:  ");
  scanf("%f", &pib2);

  printf("Pontos Turísticos: ");
  scanf("%d", &pontos2); 
  
    // Calculos
  densidade2 =  populacao2 / area2;
  pibpercapita2 =  pib2 / populacao2;
 

  // Área para exibição dos dados da cidade


    printf("\n--- CARTA 1 ---\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("Pib per Capita: %f\n", pibpercapita1);
    
    
    // ===== CARTA 2 =====

    printf("\n--- CARTA 2 ---\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB per Capita: %f\n", pibpercapita2);
    

    
return 0;
} 