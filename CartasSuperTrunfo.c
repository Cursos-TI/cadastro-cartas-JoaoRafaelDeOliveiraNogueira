#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
  /*jogo supertrumfo. Antes de ler as linhas de codigo, eu João Rafael, criei um sistema de "entendimendo simbolico(ES)" do codigo.
   ">>>>>>" para cadastros: entradas do usuario
   "-----]" para calculos e processos: tudo que use operadores logicos, estruturas de decisao, e operacaoes matematicas.
   "-----)" para exibicoes: tudo que for mostrado como resposta na tela pro usuario.
   "//////" para comentarios: para comentar dentro da mesma estutura que ja tem um (ES).
   
   sistema para entender facilmente o raciocinio do codigo (pq nem eu sei que diabo eu codei as vezes(importante que funciona), e assim eu entendo).
   espero que o proximo programador siga o mesmo sistema. Boa sorte, que Deus te abencoe aqui...
  */
///////////////////primeiramente BOM DIA, nao sou muito bom com codigozinhos, mas vamos la!!!/////////////////////////////////
   char estado1;
   char estado2;
   char codigo1[10], codigo2[10];
   char nomeCidade1[50], nomeCidade2[50];
   int populacao1 = 100;
   int populacao2 = 100;
   float area1 = 100;
   float area2 = 100;
   float pib1, pib2;
   int pontosTuristicos1, pontosTuristicos2;
   float densidadepopulacional1, pibpercapita1;
   float densidadepopulacional2, pibpercapita2;
   short int comparacao1 = 0;
   short int comparacao2 = 0;
  // printf("-- CADASTRO DE CARTAS SUPER TRUMFO --\n\n");

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
    float super1 = ((float)populacao1 + (float)area1 + (float)pontosTuristicos1 + (float)pibpercapita1) - (1 / densidadepopulacional1);
    float super2 = ((float)populacao2 + (float)area2 + (float)pontosTuristicos2 + (float)pibpercapita2) - (1 / densidadepopulacional2);
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
   short int atributo1;
   short int atributo2;
   short int empate1 = 0;
   short int empate2 = 0;
   char indetificadorDeAtributo1[100];
   char indetificadorDeAtributo2[100];
   float recebementoDeDado1;
   float recebementoDeDado2;
   float cart_atrib1;
   float cart_atrib2;
   float soma1;
   float soma2;
   char resposta[100];
   char vencedor1[20];
   char vencedor2[20];
   
  printf("----MENU DE ESCOLHA----\n");
  printf("Digite(1): para escolhe dois atributos especificos apenas para comparar\n");
  printf("Digite(2): para escolher que todos os atributos sejam comparados automaticamente\n");
  printf("Digite(3): para sair.\n");
  printf("[DIGITE AQUI A OPCAO DESEJADA]: ");
  scanf("%hd",&opcaoEntrada);

/*--------------------] processos de escolhas do tipo de resposta [--------------------*/
  switch (opcaoEntrada)
  {
  case 1:
  printf("------[MENU DE ATRIBUTOS(escolha o primeiro atributo)]------\n");
  printf("Digite(1): para populacao\n");
  printf("Digite(2): para area\nDigite(3): para produto interno bruto. PIB\n");
  printf("Digite(3): para produto interno bruto. PIB\n");
  printf("Digite(4): para pontos turisticos\n");
  printf("Digite(5): para densidade populacional\n");
  printf("Digite(6): para PIB per capita.\n");
  printf("[DIGITE AQUI A OPCAO DESEJADA]: ");
  scanf("%hd", &atributo1);

   if (atributo1 > 6 ||  atributo1 < 1)
  {
    printf("reinicie o codigo, a opcao: [%d] nao existe",atributo1);
    break;
  }

  printf("\n------[MENU DE ATRIBUTOS(escolha o segundo atributo)]------\n");
  printf("Digite(1): para populacao\n");
  printf("Digite(2): para area\nDigite(3): para produto interno bruto. PIB\n");
  printf("Digite(3): para produto interno bruto. PIB\n");
  printf("Digite(4): para pontos turisticos\n");
  printf("Digite(5): para densidade populacional\n");
  printf("Digite(6): para PIB per capita.\n");
  printf("[DIGITE AQUI A OPCAO DESEJADA]: ");
  scanf("%hd", &atributo2);
  
  if (atributo2 > 6 ||  atributo2 < 1)
  {
    printf("reinicie o codigo, a opcao: [%d] nao existe",atributo2);
    break;
  }
  if(atributo1 == atributo2){
    printf("reinicie o codigo, Deve escolher atributos D I F E R E N T E S de comparacao!!!!");
    break;
  }


/*--------------------] comparacao do primiero atributo escolhidos pelo usuario [--------------------*/
          switch(atributo1)
          {
                  case 1:
                  if (populacao1 > populacao2)
                  {
                    strcpy(vencedor1, "populacao1");
                  }
                  else if (populacao2 > populacao1)
                  {
                    strcpy(vencedor1, "populacao2");
                  }
                  else{
                    empate1 = 1;
                  }
                  strcpy(indetificadorDeAtributo1, "POPULACAO");
                  recebementoDeDado1 = populacao1;
                  cart_atrib2 = populacao2;
                  
                  break;
        
                  case 2:
                  if (area1 > area2)
                  {
                    strcpy(vencedor1, "area1");
                  }
                  else if (area2 > area1)
                  {
                    strcpy(vencedor1, "area2");
                  }
                  else{
                    empate1 = 1;
                  }
                   strcpy(indetificadorDeAtributo1, "AREA");
                   recebementoDeDado1 = area1;
                   cart_atrib2 = area2;
                   break;
        
                  case 3:
                  if (pib1 > pib2)
                  {
                    strcpy(vencedor1, "pib1");
                  }
                    else if (pib2 > pib1)
                  {
                    strcpy(vencedor1, "pib2");
                  }
                  else{
                    empate1 = 1;
                  }
                  strcpy(indetificadorDeAtributo1, "PRODUTO INTERNO BRUTO. PIB");
                  recebementoDeDado1 = pib1;
                  cart_atrib2 = pib2;
                  break;
        
                  case 4:
                  if (pontosTuristicos1 > pontosTuristicos2)
                  {
                    strcpy(vencedor1,"pontos1");
                  }
                  else if (pontosTuristicos2 > pontosTuristicos1)
                  {
                    strcpy(vencedor1, "pontos2");
                  }
                  else{
                    empate1 = 1;
                  }
                  strcpy(indetificadorDeAtributo1, "PONTOS TURISTICOS");
                  recebementoDeDado1 = pontosTuristicos1;
                  cart_atrib2 = pontosTuristicos2;
                  break;

                  case 5:
                  if (densidadepopulacional1 < densidadepopulacional2)
                  {
                    strcpy(vencedor1,"densidade1");
                  }
                  else if (densidadepopulacional2 < densidadepopulacional1)
                  {
                    strcpy(vencedor1,"densidade2");
                  }
                  else{
                    empate1 = 1;
                  }
                  strcpy(indetificadorDeAtributo1, "DENSIDADE POPULACIONAL");
                  recebementoDeDado1 = densidadepopulacional1;
                  cart_atrib2 = densidadepopulacional2;
                  break;

                  case 6:
                  if (pibpercapita1 > pibpercapita2)
                  {
                    strcpy(vencedor1,"pibpercapita1");
                  }
                  else if (pibpercapita2 > pibpercapita1)
                  {
                    strcpy(vencedor1,"pibpercapita2");
                  }
                  else{
                    empate1 = 1;
                  }
                  strcpy(indetificadorDeAtributo1, "PIB PER CAPITA");
                  recebementoDeDado1 = pibpercapita1;
                  cart_atrib2 = pibpercapita2;
                  break;
        }

/*--------------------] comparacao do segundo atributo escolhidos pelo usuario [--------------------*/
        switch(atributo2)
        {
                  case 1:
                  if (populacao1 > populacao2)
                  {
                    strcpy(vencedor2, "populacao1");
                  }
                  else if (populacao2 > populacao1)
                  {
                    strcpy(vencedor2, "populacao2");
                  }
                  else{
                    empate2 = 1;
                  }
                  strcpy(indetificadorDeAtributo2, "POPULACAO");
                  recebementoDeDado2 = populacao2;
                  cart_atrib1 = populacao1;
                  break;

                  case 2:
                  if (area1 > area2)
                  {
                    strcpy(vencedor2, "area1");
                  }
                  else if (area2 > area1)
                  {
                    strcpy(vencedor2, "area2");
                  }
                  else{
                    empate2 = 1;
                  }
                  strcpy(indetificadorDeAtributo2, "AREA");
                  recebementoDeDado2 = area2;
                  cart_atrib1 = area1;
                  break;

                  case 3:
                  if (pib1 > pib2)
                  {
                    strcpy(vencedor2, "pib1");
                  }
                    else if (pib2 > pib1)
                  {
                    strcpy(vencedor2, "pib2");
                  }
                  else{
                    empate2 = 1;
                  }
                  strcpy(indetificadorDeAtributo2, "PRODUTO INTERNO BRUTO. PIB");
                  recebementoDeDado2 = pib2;
                  cart_atrib1 = pib1;
                  break;

                  case 4:
                  if (pontosTuristicos1 > pontosTuristicos2)
                  {
                    strcpy(vencedor2,"pontos1");
                  }
                  else if (pontosTuristicos2 > pontosTuristicos1)
                  {
                    strcpy(vencedor2, "pontos2");
                  }
                  else{
                    empate2 = 1;
                  }
                  strcpy(indetificadorDeAtributo2, "PONTOS TURISTICOS");
                  recebementoDeDado2 = pontosTuristicos2;
                  cart_atrib1 = pontosTuristicos1;
                  break;

                  case 5:
                  if (densidadepopulacional1 < densidadepopulacional2)
                  {
                    strcpy(vencedor2,"densidade1");
                  }
                  else if (densidadepopulacional2 < densidadepopulacional1)
                  {
                    strcpy(vencedor2,"densidade2");
                  }
                  else{
                    empate2 = 1;
                  }
                  strcpy(indetificadorDeAtributo2, "DENSIDADE POPULACIONAL");
                  recebementoDeDado2 = densidadepopulacional2;
                  cart_atrib1 = densidadepopulacional1;
                  break;

                  case 6:
                  if (pibpercapita1 > pibpercapita2)
                  {
                    strcpy(vencedor2,"pibpercapita1");
                  }
                  else if (pibpercapita2 > pibpercapita1)
                  {
                    strcpy(vencedor2,"pibpercapita2");
                  }
                  else{
                    empate2 = 1;
                  }
                  strcpy(indetificadorDeAtributo2, "PIB PER CAPITA");
                  recebementoDeDado2 = pibpercapita2;
                  cart_atrib1 = pibpercapita1;
                  break;
        } 
                 
                 soma1 = recebementoDeDado1 + cart_atrib1;
                 soma2 = cart_atrib2 + recebementoDeDado2;
                 if(soma1 > soma2){
                  strcpy(resposta, "CARTA1 VENCEU");
                 }
                 else if(soma2 > soma1){
                  strcpy(resposta, "CARTA2 VENCEU");
                 }
                 else{
                  strcpy(resposta, "****EMPATE****");
                 }
                 
                 
                
                 
                 
                 


      
          printf("*************************************************************\n");
          printf("*************************************************************\n");
          printf("****************** RESPOSTA DA COMPARACAO *******************\n");
          printf("*************************************************************\n");
          printf("*************************************************************\n");
          printf("ATRIBUTOS ESCOLHIDOS: %s e %s\n", indetificadorDeAtributo1,indetificadorDeAtributo2);
          printf("CARTA1:\n");
          printf("%s: %.2f\n",indetificadorDeAtributo1,recebementoDeDado1);
          printf("%s: %.2f\n",indetificadorDeAtributo2,cart_atrib1);
          printf("soma dos atributos sao: %.2f\n", soma1);

          printf("CARTA2:\n");
          printf("%s: %.2f\n",indetificadorDeAtributo1,cart_atrib2);
          printf("%s: %.2f\n",indetificadorDeAtributo2,recebementoDeDado2);
          printf("soma dos atributos sao: %.2f\n",soma2);
          printf("--------------------------- V E N C E N D O R -----------------------------\n");
          printf("%s",resposta);
          break;
    
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
  
  if (comparacao1 > comparacao2)
  {
    printf("CARTA1 VENCE COM %d pontos\nseu super poder e: %.2f\n",comparacao1,super1);
    printf("CARTA2 perde COM %d pontos\nseu super poder e: %.2f\n",comparacao2,super2);
  }
  else{
    printf("CARTA2 VENCE COM %d pontos\nseu super poder e: %.2f\n",comparacao2,super2);
    printf("CARTA1 perde COM %d pontos\nseu super poder e: %.2f\n",comparacao1,super1);
  }
  break;
  
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