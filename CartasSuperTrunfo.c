#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char estado1;
  char estado2;
  char codigo1[10], codigo2[10];
  char nomeCidade1[50], nomeCidade2[50];\
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;
  printf("-- CADASTRO DE CARTAS SUPER TRUMFO --\n\n");

  /*cadastro da primeira carta*/
  printf("Digite o estado da carta de 'A' a 'H': ");
  scanf(" %c", &estado1);
  printf("Digite o codigo da carta: ");
  scanf("%s", &codigo1);
  printf("Digite o nome da cidade: ");
  scanf("%s", &nomeCidade1);
  printf("Digite a população da cidade: ");
  scanf("%d", &populacao1);
  printf("Digite a área da cidade em Km²: ");
  scanf("%f", &area1);
  printf("Digite o Produto Interno Bruto: ");
  scanf("%f", &pib1);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos1);

  /*cadastro da segunda carta*/
  printf("\n\nDigite o estado da carta de 'A' a 'H': ");
  scanf(" %c", &estado2);
  printf("Digite o codigo da carta: ");
  scanf("%s", &codigo2);
  printf("Digite o nome da cidade: ");
  scanf("%s", &nomeCidade2);
  printf("Digite a população da cidade: ");
  scanf("%d", &populacao2);
  printf("Digite a área da cidade em Km²: ");
  scanf("%f", &area2);
  printf("Digite o Produto Interno Bruto: ");
  scanf("%f", &pib2);
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  /*exibindo as cartas*/
  printf("\n-- CARTA 1 --\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("Produto Interno Bruto: %.2f\n", pib1);
  printf("Pontos Turísticos: %d\n", pontosTuristicos1);

  printf("\n-- CARTA 2 --\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("Produto Interno Bruto: %.2f\n", pib2);
  printf("Pontos Turísticos: %d\n", pontosTuristicos2);

return 0;
} 
