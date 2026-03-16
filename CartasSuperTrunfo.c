#include <stdio.h>
#include <ctype.h>
int main(){
  char estado1;
  char estado2;
  char codigo1[10], codigo2[10];
  char nomeCidade1[50], nomeCidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;
  float densidadepopulacional1, pibpercapita1;
   float densidadepopulacional2, pibpercapita2;
  printf("-- CADASTRO DE CARTAS SUPER TRUMFO --\n\n");

  /*cadastro da primeira carta*/
  printf("Digite o estado da carta de 'A' a 'H': ");
  scanf(" %c", &estado1);
  printf("Digite o codigo da carta: ");
  scanf("%s", &codigo1);
  printf("Digite o nome da cidade: ");
  scanf("%s", &nomeCidade1);
  printf("Digite a populacao da cidade: ");
  scanf("%d", &populacao1);
  printf("Digite a area da cidade em (km2): ");
  scanf("%f", &area1);
  printf("Digite o Produto Interno Bruto: ");
  scanf("%f", &pib1);
  printf("Digite o numero de pontos turísticos: ");
  scanf("%d", &pontosTuristicos1);

  /*cadastro da segunda carta*/
  printf("\n\nDigite o estado da carta de 'A' a 'H': ");
  scanf(" %c", &estado2);
  printf("Digite o codigo da carta: ");
  scanf("%s", &codigo2);
  printf("Digite o nome da cidade: ");
  scanf("%s", &nomeCidade2);
  printf("Digite a populacao da cidade: ");
  scanf("%d", &populacao2);
  printf("Digite a area da cidade em (Km2): ");
  scanf("%f", &area2);
  printf("Digite o Produto Interno Bruto: ");
  scanf("%f", &pib2);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos2);

  /*calculo  e processo de densidade e per capita:*/
    densidadepopulacional1 = populacao1 / area1;
    densidadepopulacional2 = populacao2 / area2;

    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;
  
    /*calculo: super poder das cartas*/
    float super1 = ((float)populacao1 + (float)area1 + (float)pontosTuristicos1 + (float)pibpercapita1) - densidadepopulacional1;
    float super2 = ((float)populacao2 + (float)area2 + (float)pontosTuristicos2 + (float)pibpercapita1) - densidadepopulacional2;


  /*exibindo as cartas*/
  printf("\n-- CARTA 1 --\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f (km2)\n", area1);
  printf("Produto Interno Bruto: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("densidade populacional: %.2f\n",densidadepopulacional1);
  printf("PIB per capita: %.2f\n",pibpercapita1);

  printf("\n-- CARTA 2 --\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f (Km2)\n", area2);
  printf("Produto Interno Bruto: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("densidade populacional: %.2f\n",densidadepopulacional2);
  printf("PIB per capita: %.2f\n\n",pibpercapita2);

  /*comparacao de força de cada atributo das cartas*/
  short int comparacao1 = 0;
  short int comparacao2 = 0;
  if (populacao1 > populacao2)
  {
    printf("populacao: CARTA1 VENCEU\n");
    comparacao1++;
  }
  else{
    printf("populacao: CARTA2 VENCEU\n");
    comparacao2++;
  }
  if (area1 > area2)
  {
    printf("area: CARTA1 VENCEU\n");
    comparacao1++;
  }
  else{
    printf("area: CARTA2 VENCEU\n");
    comparacao2++;
  }
  if (pib1 > pib2)
  {
    printf("pib: CARTA1 VENCEU\n");
    comparacao1++;
  }
  else{
    printf("pib: CARTA2 VENCEU\n");
    comparacao2++;
  }
  if (pontosTuristicos1 > pontosTuristicos2)
  {
    printf("pontos turisticos: CARTA1 VENCEU\n");
    comparacao1++;
  }
  else{
    printf("pontos turisticos: CARTA2 VENCEU\n");
    comparacao2++;
  }
  if (densidadepopulacional1 < densidadepopulacional2)
  {
    printf("densidade populacional: CARTA1 VENCEU\n");
    comparacao1++;
  }
  else{
    printf("densidade populacional: CARTA2 VENCEU\n");
    comparacao2++;
  }
  if (pibpercapita1 > pibpercapita2)
  {
    printf("pib per capita: CARTA1 VENCEU\n\n");
    comparacao1++;
  }
  else{
    printf("pib per capita: CARTA2 VENCEU\n\n");
    comparacao2++;
  }

  /*mostrando pontuacao de cada carta*/
  printf("----) CARTA VENCENDORA (----\n");
  if (comparacao1 > comparacao2)
  {
    printf("CARTA1 VENCE COM %d pontos\nseu super poder e: %.2f\n",comparacao1,super1);
    printf("CARTA2 perde COM %d pontos\nseu super poder e: %.2f\n",comparacao2,super2);
  }
  else{
    printf("CARTA2 VENCE COM %d pontos\nseu super poder e: %.2f\n",comparacao2,super2);
    printf("CARTA1 perde COM %d pontos\nseu super poder e: %.2f\n",comparacao1,super1);
  }
  
  
  


  
    return 0;

    
}