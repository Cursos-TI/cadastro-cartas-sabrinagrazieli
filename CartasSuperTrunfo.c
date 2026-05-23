#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // CARTA 1  - TURIM

  char estado1;
  char codigo1[4];
  char cidade1[50];

  int população1;
  float area1;
  float  pib1;
  int pontos1;

  // CARTA 2 - ROMA

  char estado2;
  char codigo2[4];
  char cidade2[50];

  int população2;
  float area2;
  float pib2;
  int pontos2;


  // Área para entrada de dados

  printf("Cadastro da Carta 1\n");

  printf("Estado:");
  scanf("%c", &estado1);

  printf ("Codigo:  ");
  scanf("%s", codigo1);

  printf("Cidade:  ");
  scanf("%s", cidade1);

  printf("População: ");
  scanf("%d",  &população1);

  printf("Area: ");
  scanf("%f", &area1);

  printf("PIB:  ");
  scanf("%f", &pib1);

  printf("Pontos Turísticos: ");
  scanf("%d", &pontos1); 
  

 // CARTA 2

  printf("Cadastro da Carta 2\n");

  printf("Estado:  ");
  scanf("%c", &estado2);

  printf ("Codigo:  ");
  scanf("%s", codigo2);

  printf("Cidade:  ");
  scanf("%s", cidade2);

  printf("População: ");
  scanf("%d",  &população2);

  printf("Area: ");
  scanf("%f", &area2);

  printf("PIB:  ");
  scanf("%f", &pib2);

  printf("Pontos Turísticos: ");
  scanf("%d", &pontos2); 
  
  // Área para exibição dos dados da cidade


    printf("\n--- CARTA 1 ---\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", população1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    // ===== CARTA 2 =====

    printf("\n--- CARTA 2 ---\n");

    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", população2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);

return 0;
} 
