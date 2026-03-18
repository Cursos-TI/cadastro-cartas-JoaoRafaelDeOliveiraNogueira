#include <stdio.h>
#include <ctype.h>
int main(){
  /*jogo supertrumfo. Antes de ler as linhas de codigo, eu João Rafael, criei um sistema de "entendimendo simbolico(ES)" do codigo.
   ">>>>>>" para cadastros: entradas do usuario
   "-----]" para calculos e processos: tudo que use operadores logicos, estruturas de decisao, e operacaoes matematicas.
   "-----)" para exibicoes: tudo que for mostrado como resposta na tela pro usuario.
   "//////" para comentarios: para comentar dentro da mesma estutura que ja tem um (ES).

   sistema para entender facilmente o raciocinio do codigo (pq nem eu sei que diabo eu codei as vezes(importante que funciona), e assim eu entendo).
   espero que o proximo programador siga o mesmo sistema. Boa sorte, que Deus te abencoe aqui...
  */
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
   short int comparacao1 = 0;
   short int comparacao2 = 0;
  printf("-- CADASTRO DE CARTAS SUPER TRUMFO --\n\n");

  /*>>>>>>>>>>>>>>>>>> cadastro da primeira carta >>>>>>>>>>>>>>>>>>*/
  printf("Digite o estado da carta de 'A' a 'H': ");
  scanf(" %c", &estado1);
  printf("Digite o codigo da carta: ");
  scanf("%s", &codigo1);
  printf("Digite o nome do pais: ");
  scanf("%s", &nomeCidade1);
  printf("Digite a populacao do pais: ");
  scanf("%d", &populacao1);
  printf("Digite a area do pais em (km2): ");
  scanf("%f", &area1);
  printf("Digite o Produto Interno Bruto: ");
  scanf("%f", &pib1);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos1);

  /*>>>>>>>>>>>>>>>>>> cadastro da segunda carta >>>>>>>>>>>>>>>>>>*/
  printf("\n\nDigite o estado da carta de 'A' a 'H': ");
  scanf(" %c", &estado2);
  printf("Digite o codigo da carta: ");
  scanf("%s", &codigo2);
  printf("Digite o nome do pais: ");
  scanf("%s", &nomeCidade2);
  printf("Digite a populacao do pais: ");
  scanf("%d", &populacao2);
  printf("Digite a area do pais em (Km2): ");
  scanf("%f", &area2);
  printf("Digite o Produto Interno Bruto: ");
  scanf("%f", &pib2);
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos2);

  /*--------------------] calculo  e processo de densidade e per capita [--------------------*/
    densidadepopulacional1 = populacao1 / area1;
    densidadepopulacional2 = populacao2 / area2;

    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;
  
    /*--------------------] calculo: super poder das cartas [--------------------*/
    float super1 = ((float)populacao1 + (float)area1 + (float)pontosTuristicos1 + (float)pibpercapita1) - (densidadepopulacional1 / 1000);
    float super2 = ((float)populacao2 + (float)area2 + (float)pontosTuristicos2 + (float)pibpercapita2) - (densidadepopulacional2 / 1000);
    ///////////////////// nao mexa nessa porra, isso é engenharia de alto nivel. Tava dando um erro de que, mesmo a carta 1 vencendo ou a carta 2, a outra carta ficava com poder maior pelo fato da deicisao de densidade, ganha quem tiver o menor numero, desse jeito o poder de quem ganhar no atributo de densidade sempre ficar maior, ja que la no if de densidade no case 2, é adicionado mais 1000 pontos na variavel super, de quem ganhar./////////////////////
    


  /*--------------------) exibindo as cartas (--------------------*/
  printf("\n-- CARTA 1 --\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome do pais: %s\n", nomeCidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f (km2)\n", area1);
  printf("Produto Interno Bruto: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("densidade populacional: %.2f\n",densidadepopulacional1);
  printf("PIB per capita: %.2f\n",pibpercapita1);

  printf("\n-- CARTA 2 --\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome do pais: %s\n", nomeCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f (Km2)\n", area2);
  printf("Produto Interno Bruto: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("densidade populacional: %.2f\n",densidadepopulacional2);
  printf("PIB per capita: %.2f\n\n",pibpercapita2);

  /*>>>>>>>>>>>>>>>>>> filtro de escolha: o usuario tem 2 opcoes de escolhas da comparacao das cartas. >>>>>>>>>>>>>>>>>> */
  short int opcaoEntrada;
  short int opcao1;
  printf("----MENU DE ESCOLHA----\n");
  printf("Digite(1): para escolhe um atributo especifico apenas para comparar\nDigite(2): para escolher que todos os atributos sejam comparados automaticamente\nDigite(3): para sair.\n[DIGITE AQUI A OPCAO DESEJADA]: ");
  scanf("%d",&opcaoEntrada);

  /* --------------------] opcao de entrada geral, para a escolha do tipo de comparacao que o usuario deseja [--------------------*/
   switch (opcaoEntrada)
  {
  case 1:
   /*>>>>>>>>>>>>>>>>>> MENU DE COMPARACAO DE ATRIBUTOS ESPECIFICOS ESCOLHIDOS PELO USUARIOS. >>>>>>>>>>>>>>>>>> */
  printf("------[MENU DE ATRIBUTOS]------\n");
  printf("Digite(01): para populacao\nDigite(2): para area\nDigite(3): para produto interno bruto. PIB\nDigite(4): para pontos turisticos\nDigite(5): para densidade populacional\nDigite(6): para PIB per capita.\n[DIGITE AQUI A OPCAO DESEJADA]:");
  scanf("%d",&opcao1);
  switch (opcao1)
  {
  /////////////////////sim, é um switch dentro de outro switch, e foda-se, importante que ta DANDO CERTO, nao sei baseia pelas chaves no codigo pq nem eu sei onde abre e fecha/////////////////////

  /*--------------------] comparacao das cartas no atributo e exibicao: case1: poulacao, case2: area, case3: pib, case4: pontos turisticos, case5: densidade populacional, case6: pib per capita [--------------------*/
  case 1:
  if (populacao1 > populacao2)
  {
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: populacao\n");
  printf("valor do atributo de cada carta: CARTA1[%d] e CARTA2[%d]\n",populacao1,populacao2);
  printf("carta vencendora: CARTA1!!!\n");
  }
  else if (populacao2 > populacao1)
  {
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: populacao\n");
  printf("valor do atributo de cada carta: CARTA1[%d] e CARTA2[%d]\n",populacao1,populacao2);
  printf("carta vencendora: CARTA2!!!\n");
  }
  else{
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: populacao\n");
  printf("valor do atributo de cada carta: CARTA1[%d] e CARTA2[%d]\n",populacao1,populacao2);
  printf("****E M P A T E****\n");
  }break;
              
  case 2:
    if (area1 > area2)
  {
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: area(km2)\n");
  printf("valor do atributo de cada carta: CARTA1[%.2f] e CARTA2[%.2f]\n",area1,area2);
  printf("carta vencendora: CARTA1!!!\n");
  }
  else if (area2 > area1)
  {
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: area(km2)\n");
  printf("valor do atributo de cada carta: CARTA1[%.2f] e CARTA2[%.2f]\n",area1,area2);
  printf("carta vencendora: CARTA2!!!\n");
  }
  else{
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: area(km2)\n");
  printf("valor do atributo de cada carta: CARTA1[%.2f] e CARTA2[%.2f]\n",area1,area2);
  printf("****E M P A T E****\n");
  }break;
  
  case 3:
  if (pib1 > pib2)
  {
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: produto interno bruto PIB\n");
  printf("valor do atributo de cada carta: CARTA1[%.2f] e CARTA2[%.2f]\n",pib1,pib2);
  printf("carta vencendora: CARTA1!!!\n");
  }
  else if (pib2 > pib1)
  {
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: produto interno bruto PIB\n");
  printf("valor do atributo de cada carta: CARTA1[%.2f] e CARTA2[%.2f]\n",pib1,pib2);
  printf("carta vencendora: CARTA2!!!\n");
  }
  else{
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: produto interno bruto PIB\n");
  printf("valor do atributo de cada carta: CARTA1[%.2f] e CARTA2[%.2f]\n",pib1,pib2);
  printf("****E M P A T E****\n");
  }break;

  case 4:
  if (pontosTuristicos1 > pontosTuristicos2)
  {
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: pontos turisticos\n");
  printf("valor do atributo de cada carta: CARTA1[%d] e CARTA2[%d]\n",pontosTuristicos1,pontosTuristicos2);
  printf("carta vencendora: CARTA1!!!\n");
  }
  else if (pontosTuristicos2 > pontosTuristicos1)
  {
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: pontos turisticos\n");
  printf("valor do atributo de cada carta: CARTA1[%d] e CARTA2[%d]\n",pontosTuristicos1,pontosTuristicos2);
  printf("carta vencendora: CARTA2!!!\n");
  }
  else{
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: pontos turisticos\n");
  printf("valor do atributo de cada carta: CARTA1[%d] e CARTA2[%d]\n",pontosTuristicos1,pontosTuristicos2);
  printf("****E M P A T E****\n");
  }break;

  case 5:
  if (densidadepopulacional1 < densidadepopulacional2)
  {
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: densidade populacional\n");
  printf("valor do atributo de cada carta: CARTA1[%.2f] e CARTA2[%.2f]\n",densidadepopulacional1,densidadepopulacional2);
  printf("carta vencendora: CARTA1!!!\n");
  }
  else if (densidadepopulacional2 < densidadepopulacional1)
  {
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: densidade populacional\n");
   printf("valor do atributo de cada carta: CARTA1[%.2f] e CARTA2[%.2f]\n",densidadepopulacional1,densidadepopulacional2);
  printf("carta vencendora: CARTA2!!!\n");
  }
  else{
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: densidade populacional\n");
   printf("valor do atributo de cada carta: CARTA1[%.2f] e CARTA2[%.2f]\n",densidadepopulacional1,densidadepopulacional2);
  printf("****E M P A T E****\n");
  }break;

  case 6:
  if (pibpercapita1 > pibpercapita2)
  {
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: PIB PER CAPITA\n");
  printf("valor do atributo de cada carta: CARTA1[%.2f] e CARTA2[%.2f]\n",pibpercapita1,pibpercapita2);
  printf("carta vencendora: CARTA1!!!\n");
  }
  else if (pibpercapita2 > pibpercapita1)
  {
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: PIB PER CAPITA\n");
  printf("valor do atributo de cada carta: CARTA1[%.2f] e CARTA2[%.2f]\n",pibpercapita1,pibpercapita2);
  printf("carta vencendora: CARTA2!!!\n");
  }
  else{
  printf("----) RESPOSTA DA COMPARACAO (----\n");
  printf("nome dos paises: %s e %s\n",nomeCidade1,nomeCidade2);
  printf("atributo comparado: PIB PER CAPITA\n");
  printf("valor do atributo de cada carta: CARTA1[%.2f] e CARTA2[%.2f]\n",pibpercapita1,pibpercapita2);
  printf("****E M P A T E****\n");
  }break;
  /////////////////////porra, da pra entender, se tu se esforçar um pouco, tu entende tranquilo, e sobre a questão da variavel nomecidade, é que usei o codigo fonte antigo, então fiquei com preguiça de mudar nome da variavel e ter que mudar em todos os parametros./////////////////////
 }
 break;

///////////////////// comparacao de cartas de uma vez só, compara todos o atributos e mostra o resultado, e mais o resultado de super poder de cada carta. Aqui separa os homens dos Muleques./////////////////////
  case 2:
   printf("----) CARTA VENCENDORA (----\n");
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
    /////////////////////essa foi a forma que achei de resolver o problema de carta ganhando nos atributos, mas perdendo no poder. NAO MEXA!!!!/////////////////////
    super1 += 1000.00;
    comparacao1++;
  }
  else{
    printf("densidade populacional: CARTA2 VENCEU\n");
    super2 += 1000.00;
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
  
  if (comparacao1 > comparacao2)
  {
    printf("CARTA1 VENCE COM %d pontos\nseu super poder e: %.2f\n",comparacao1,super1);
    printf("CARTA2 perde COM %d pontos\nseu super poder e: %.2f\n",comparacao2,super2);
  }
  else{
    printf("CARTA2 VENCE COM %d pontos\nseu super poder e: %.2f\n",comparacao2,super2);
    printf("CARTA1 perde COM %d pontos\nseu super poder e: %.2f\n",comparacao1,super1);
  }break;
  
  case 3:
  printf("saida bem sucedida!!!");
  break;

  default:
  printf("\n--- NOTIFICACAO DO SISTEMA: NAO HA ESTA OPCAO NO MENU[voce digitou: %d] ---\n",opcaoEntrada);
  printf("De estop no programa e run novamente caso queira usar de novo");
  printf("------------------------------------------------------\n");
  break;
}
  return 0;

    
}