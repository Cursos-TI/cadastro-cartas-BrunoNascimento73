#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1;     // Uma letra de 'A' a 'H' (representando um dos oito estados).
  char codigo1[20]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
  char cidade1[20]; // O nome da cidade.
  int pop1;         // O número de habitantes da cidade
  float area1;      // A área da cidade em quilômetros quadrados.
  float pib1;       // A área da cidade em quilômetros quadrados.
  int turismo1;     // A quantidade de pontos turísticos na cidade.

  char estado2;     // Uma letra de 'A' a 'H' (representando um dos oito estados).
  char codigo2[20]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
  char cidade2[20]; // O nome da cidade.
  int pop2;         // O número de habitantes da cidade
  float area2;      // A área da cidade em quilômetros quadrados.
  float pib2;       // A área da cidade em quilômetros quadrados.
  int turismo2;     // A quantidade de pontos turísticos na cidade.

  // Área para entrada de dados
  printf("Insira um estado da letra 'A' a 'H': ");
  scanf("%c", &estado1);

  printf("Insira o codigo deste estado de e 01 a 04: ");
  scanf("%s", codigo1);

  printf("Insira uma cidade deste estado: ");
  scanf("%s", cidade1);

  printf("Insira a população: ");
  scanf("%d", &pop1);

  printf("Insira a area: ");
  scanf("%f", &area1);

  printf("Insira o pib: ");
  scanf("%f", &pib1);

  printf("Quantidade de atrações de turismo: ");
  scanf("%d", &turismo1);

  // entrada 2

  printf("Insira um estado da letra 'A' a 'H': ");
  scanf(" %c", &estado2);

  printf("Insira o codigo deste estado de e 01 a 04: ");
  scanf("%s", codigo2);

  printf("Insira uma cidade deste estado: ");
  scanf("%s", cidade2);

  printf("Insira a população: ");
  scanf("%d", &pop2);

  printf("Insira a area: ");
  scanf("%f", &area2);

  printf("Insira o pib: ");
  scanf("%f", &pib2);

  printf("Quantidade de atrações de turismo: ");
  scanf("%d", &turismo2);
  printf("\n");

  // Funcoes de calculo media popu e pip percapta
  float pibcapta1, pibcapta2;
  float densidadepop1, densidadepop2;

  // calculando pip percapta
  pibcapta1 =(float)pib1/pop1;
  pibcapta2 =(float)pib2/pop2;
  // calculando densidade populacional
  densidadepop1 = pop1/area1;
  densidadepop2 = pop2/area2;

  // Área para exibição dos dados da cidade
  // saida 1
  printf("o estado é: %c\n", estado1);
  printf("o codigo é: %s\n", codigo1);
  printf("a cidade é %s \n", cidade1);
  printf("a população é %d \n", pop1);
  printf("a area é %f \n", area1);
  printf("este é o pib %f \n", pib1);
  printf("este é o turismo %d \n", turismo1);
  printf("este é seu pib per capta: %f \n", pibcapta1);
  printf("esta é usa densidade populacional: %f \n", densidadepop1);
  printf("\n");
  // saida 2
  printf("-------------------------\n");
  printf("o estado é: %c\n", estado2);
  printf("o codigo é: %s\n", codigo2);
  printf("a cidade é %s \n", cidade2);
  printf("a população é %d \n", pop2);
  printf("a area é %f \n", area2);
  printf("este é o pib %f \n", pib2);
  printf("este é o turismo %d \n", turismo2);
  printf("este é seu pib per capta: %.2f \n", pibcapta2);
  printf("esta é usa densidade populacional: %.2f \n", densidadepop2);
  printf("\n");
  printf("-------------------------\n");
  //Calcular super poder
  float superPoder1 = (float)pop1 + area1 + pib1 + turismo1 + pibcapta1 + (1.0 / densidadepop1);
  float superPoder2 = (float)pop2 + area2 + pib2 + (float)turismo2 + pibcapta2 + (1.0 / densidadepop2);
  //Comparar cartas
  int resultadoPop = pop1 > pop2;
  int resultadoArea = area1 > area2;
  int resultadoPib = pib1 > pib2;
  int resultadoTurismo = turismo1 < turismo2;
  int resultadoCapta = pibcapta1 > pibcapta2;
  int resultadoDensidade = densidadepop1 > densidadepop2;
  int resultadoSuperPoder = superPoder1 > superPoder2;


  //resultado da comparação
  printf("Batalha das cartas:\n");
  printf("população carta 1 venceu? %d\n", resultadoPop);
  printf("Área a carta 1 venceu? %d\n",resultadoArea);
  printf("Pib a carta 1 venceu:? %d\n",resultadoPib);
  printf("Pontos turisticos a carta 2 venceu? %d \n",resultadoTurismo);
  printf("Densidade populacional a carta 1 venceu? %d \n",resultadoDensidade);
  printf("pib per capta a carta 1 venceu? %d \n",resultadoCapta);
  printf("Super poder a carta 1 venceu? %d \n",resultadoSuperPoder);
  
  return 0;
}
