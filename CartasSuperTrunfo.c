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

  //
  switch (menu) {
    case 1:
        //Calcular super poder
        float superPoder1 = (float)pop1 + area1 + pib1 + (float)turismo1 + pibcapta1 + (1.0 / densidadepop1);
        float superPoder2 = (float)pop2 + area2 + pib2 + (float)turismo2 + pibcapta2 + (1.0 / densidadepop2);

        //Modulo switch
        //selecionar opção de compararação de cartas
        //opções
        int compara1;

        printf("Propriedade das comparações: Escolha o primeiro atributo \n");
        printf("------------------------\n");
        printf("1 - População\n");
        printf("2 - Area\n");
        printf("3 - Pib\n");
        printf("4 - Turismo\n");
        printf("5 - Pib per capta\n");
        printf("6 - Densidade Populacional\n");
        printf("7 - Super Poder\n");
        scanf("%d", &compara1);
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
        //saida 2
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



        switch (compara1) {
            case 1:
            printf("%s\n",(pop1 > pop2) ? "carta 1 Venceu!" : (pop1 < pop2) ? "carta 2 Venceu!" : "Empate!");
            printf("População da %s é %d, população da %s é %d\n", cidade1,  pop1, cidade2, pop2);
            break;
            case 2:
            printf("%s\n",(area1 > area2) ? "carta 1 Venceu!" : (area1 < area2) ? "carta 2 Venceu!" : "Empate!");
            printf("Area da %s é %f, area da %s é %f\n", cidade1,  area1, cidade2, area2);
            break;
            case 3:
            printf("%s\n",(turismo1 > turismo2) ? "carta 1 Venceu!" : (turismo1 < turismo2) ? "carta 2 Venceu!" : "Empate!");
            printf("Turismo da %s é %d, turismo da %s é %d\n", cidade1,  turismo1, cidade2, turismo2);
            break;
            case 4:
            printf("%s\n",(pib1 > pib2) ? "carta 1 Venceu!" : (pib1 < pib2) ? "carta 2 Venceu!" : "Empate!");
            printf("PIB da %s é %f, PIB da %s é %f\n", cidade1,  pib1, cidade2, pib2);
            break;
            case 5:
            printf("%s\n",(pibcapta1 > pibcapta2) ? "carta 1 Venceu!" : (pibcapta1 < pibcapta2) ? "carta 2 Venceu!" : "Empate!");
            printf("PIB per capita da %s é %.2f, PIB per capita da %s é %.2f\n", cidade1,  pibcapta1, cidade2, pibcapta2);
            break;
            case 6:
            printf("%s\n",(densidadepop1 < densidadepop2) ? "carta 1 Venceu!" : (densidadepop1 > densidadepop2) ? "carta 2 Venceu!" : "Empate!");
            printf("Densidade populacional da %s é %.2f, densidade populacional da %s é %.2f\n", cidade1,  densidadepop1, cidade2, densidadepop2);
            break;
            case 7:
            printf("%s\n",(superPoder1 > superPoder2) ? "carta 1 Venceu!" : (superPoder1 < superPoder2) ? "carta 2 Venceu!" : "Empate!");
            printf("Super poder da %s é %.2f, super poder da %s é %.2f\n", cidade1,  superPoder1, cidade2, superPoder2);
            break;
            default:
            printf("Opção inválida!");
            break;
        };

        // Comparação 2
        int compara2;

        printf("Escolha o segundo atributo:\n");
        printf("------------------------\n");
        printf("1 - População\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - PIB per capita\n");
        printf("5 - Densidade populacional\n");
        printf("6 - Super poder\n");
        printf("7 - Sorte\n");
        printf("8 - Desistir\n");
        printf("------------------------\n");
        scanf("%d", &compara2);

        if (compara1 == compara2) {
            printf("Você escolheu a mesma opção\n");
        } else {
            switch (compara2) {
                case 1:
                printf("%s\n",(pop1 > pop2) ? "carta 1 Venceu!" : (pop1 < pop2) ? "carta 2 Venceu!" : "Empate!");
                printf("População da %s é %d, população da %s é %d\n", cidade1,  pop1, cidade2, pop2);
                break;
                case 2:
                printf("%s\n",(area1 > area2) ? "carta 1 Venceu!" : (area1 < area2) ? "carta 2 Venceu!" : "Empate!");
                printf("Area da %s é %f, area da %s é %f\n", cidade1,  area1, cidade2, area2);
                break;
                case 3:
                printf("%s\n",(turismo1 > turismo2) ? "carta 1 Venceu!" : (turismo1 < turismo2) ? "carta 2 Venceu!" : "Empate!");
                printf("Turismo da %s é %d, turismo da %s é %d\n", cidade1,  turismo1, cidade2, turismo2);
                break;
                case 4:
                printf("%s\n",(pib1 > pib2) ? "carta 1 Venceu!" : (pib1 < pib2) ? "carta 2 Venceu!" : "Empate!");
                printf("PIB da %s é %f, PIB da %s é %f\n", cidade1,  pib1, cidade2, pib2);
                break;
                case 5:
                printf("%s\n",(pibcapta1 > pibcapta2) ? "carta 1 Venceu!" : (pibcapta1 < pibcapta2) ? "carta 2 Venceu!" : "Empate!");
                printf("PIB per capita da %s é %.2f, PIB per capita da %s é %.2f\n", cidade1,  pibcapta1, cidade2, pibcapta2);
                break;
                case 6:
                printf("%s\n",(densidadepop1 < densidadepop2) ? "carta 1 Venceu!" : (densidadepop1 > densidadepop2) ? "carta 2 Venceu!" : "Empate!");
                printf("Densidade populacional da %s é %.2f, densidade populacional da %s é %.2f\n", cidade1,  densidadepop1, cidade2, densidadepop2);
                break;
                case 7:
                printf("%s\n",(superPoder1 > superPoder2) ? "carta 1 Venceu!" : (superPoder1 < superPoder2) ? "carta 2 Venceu!" : "Empate!");
                printf("Super poder da %s é %.2f, super poder da %s é %.2f\n", cidade1,  superPoder1, cidade2, superPoder2);
                break;
                default:
                printf("Opção inválida!");
                break;
            };
        };


      break;

      case 2:
        printf("Regras do Jogo\n");
        printf("4. O CONFRONTO: \n");
        printf("=== REGRAS DO SUPER TRUNFO ===\n");

        printf("OBJETIVO: Ganhar todas as cartas dos adversarios.\n\n");

        printf("COMO JOGAR: O jogador da vez escolhe um atributo de sua carta e compara com os oponentes.\n\n");

        printf("REGRA DE VITORIA:\n");
        printf("- No atributo DENSIDADE POPULACIONAL: Vence quem tiver o MENOR valor.\n");
        printf("- Nos DEMAIS atributos: Vence quem tiver o MAIOR valor.\n\n");

        printf("EMPATE: Em caso de valores iguais.\n\n");
      break;

      case 3:
        printf("encerrando jogo\n");
      return 0;
      break;

      default:
        printf("opção invalida\n");
      return 0;

  }
  printf("------------------------\n");


  return 0;
}
