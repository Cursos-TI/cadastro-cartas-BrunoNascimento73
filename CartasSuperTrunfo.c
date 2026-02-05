#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  int menu;
  printf("Super Trunfo \n");
  printf("------------------------\n");
  printf("Menu:\n");
  printf("1 - Começar o Jogo\n");
  printf("2 - Regras\n");
  printf("3 - encerrar Jogo\n");
  scanf("%d", &menu);
  printf("------------------------\n");

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1 = 'A';                // Uma letra de 'A' a 'H' (representando um dos oito estados).
  char codigo1[20] = "A01";          // A letra do estado seguida de um número de 01 a 04 (ex: A01, B04)
  char cidade1[20] = "Sao Paulo";    // O nome da cidade.
  int pop1 = 12325232;               // O número de habitantes da cidade
  float area1 = 1521.11;             // A área da cidade em quilômetros quadrados.
  float pib1 = 1250.50;              // A área da cidade em quilômetros quadrados.
  int turismo1 = 50;                 // A quantidade de pontos turísticos na cidade.

  char estado2 = 'B';                // Uma letra de 'A' a 'H' (representando um dos oito estados).
  char codigo2[20] = "B01";          // A letra do estado seguida de um número de 01 a 04 (ex: A01, B04)
  char cidade2[20] = "Rio de Janeiro";    // O nome da cidade.
  int pop2 = 12325232;               // O número de habitantes da cidade
  float area2 = 1521.11;             // A área da cidade em quilômetros quadrados.
  float pib2 = 1250.50;              // A área da cidade em quilômetros quadrados.
  int turismo2 = 50;                 // A quantidade de pontos turísticos na cidade.
  // Funcoes de calculo media popu e pip per capta
  float pibcapta1, pibcapta2;
  float densidadepop1, densidadepop2;

  // calculando pip percapta
  pibcapta1 =(float)pib1/pop1;
  pibcapta2 =(float)pib2/pop2;

  // calculando densidade populacional
  densidadepop1 = pop1/area1;
  densidadepop2 = pop2/area2;


  switch (menu) {
      case 1:


        //Calcular super poder
        float superPoder1 = (float)pop1 + area1 + pib1 + (float)turismo1 + pibcapta1 + (1.0 / densidadepop1);
        float superPoder2 = (float)pop2 + area2 + pib2 + (float)turismo2 + pibcapta2 + (1.0 / densidadepop2);

        //Comparar cartas
        int resultadoPop = pop1 > pop2;
        int resultadoArea = area1 > area2;
        int resultadoPib = pib1 > pib2;
        int resultadoTurismo = turismo1 < turismo2;
        int resultadoCapta = pibcapta1 > pibcapta2;
        int resultadoDensidade = densidadepop1 > densidadepop2;
        int resultadoSuperPoder = superPoder1 > superPoder2;

        //Modulo switch
        //selecionar opção de comparação
        //opções
        int comp;

        printf("Propriedade das comparações: \n");
        printf("------------------------\n");
        printf("1 - População\n");
        printf("2 - Area\n");
        printf("3 - Pib\n");
        printf("4 - Turismo\n");
        printf("5 - Pib per capta\n");
        printf("6 - Densidade Populacional\n");
        scanf("%d", &comp);
        printf("------------------------\n");

        // Área para exibição dos dados da cidade
        // saida 1
        printf("o estado é: %c\n", estado1);
        printf("o codigo é: %s\n", codigo1);
        printf("a cidade é %s \n", cidade1);
        printf("a população é %d \n", pop1);
        printf("a area é %f \n", area1);
        printf("este é o turismo %d \n", turismo1);
        printf("este é o pib %f \n", pib1);
        printf("este é seu pib per capta: %f \n", pibcapta1);
        printf("esta é usa densidade populacional: %f \n", densidadepop1);
        printf("------------------------\n");
        printf("o estado é: %c\n", estado2);
        printf("a cidade é %s \n", cidade2);
        printf("a população é %d \n", pop2);
        printf("a area é %f \n", area2);
        printf("este é o turismo %d \n", turismo2);
        printf("este é o pib %f \n", pib2);
        printf("este é seu pib per capta: %.2f \n", pibcapta2);
        printf("esta é usa densidade populacional: %.2f \n", densidadepop2);

        printf("\n");

        switch (comp) {
            case 1:
            printf("população\n");
            if (pop1 > pop2) {
                printf("carta 1 Ganhou\n");
                printf("População da Cidade %s é %d população da Cidade %s é %d\n", cidade1, pop1, cidade2, pop2);
            } else if (pop1 < pop2) {
                printf("carta 2 Ganhou\n");
                printf("População da Cidade %s é %d população da Cidade %s é %d\n", cidade1, pop1, cidade2, pop2);
            }else {
                printf("EMPATE!\n");
                printf("População da Cidade %s é %d população da Cidade %s é %d\n", cidade1, pop1, cidade2, pop2);
            }
            break;
            case 2:
            printf("area\n");
            if (area1 > area2) {
                printf("carta 1 Ganhou\n");
                printf("Area da Cidade %s é %.2f população da Cidade %s é %.2f\n", cidade1, area1, cidade2, area2);
            } else if (area1 < area1) {
                printf("carta 2 Ganhou\n");
                printf("Area da Cidade %s é %.2f população da Cidade %s é %.2f\n", cidade1, area1, cidade2, area2);
            }else {
                printf("EMPATE!\n");
                printf("Area da Cidade %s é %.2f população da Cidade %s é %.2f\n", cidade1, area1, cidade2, area2);
            }
            break;
            case 3:
            printf("Pib");
            if (pib1 > pib2) {
                printf("carta 1 Ganhou\n");
                printf("PIB da Cidade %s é %.2f - PIB da Cidade %s é %.2f\n", cidade1, pib1, cidade2, pib2);
            } else if (pib1 < pib2) {
                printf("carta 2 Ganhou\n");
                printf("PIB da Cidade %s é %.2f - PIB da Cidade %s é %.2f\n", cidade1, pib1, cidade2, pib2);
            }else {
                printf("EMPATE!\n");
                printf("PIB da Cidade %s é %.2f - PIB da Cidade %s é %.2f\n", cidade1, pib1, cidade2, pib2);
            }
            break;
            case 4:

            break;
            case 5:

            break;
            case 6:

            break;


            default:
            printf("error\n");

        };


      break;

      case 2:
      printf("Regras do Jogo\n");

      break;

      case 3:
      printf("encerrando jogo\n");
      break;

      default:
      printf("opção invalida\n");
  }
  printf("------------------------\n");


  return 0;
}
