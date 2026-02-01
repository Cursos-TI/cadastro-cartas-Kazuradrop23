#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    //variaveis carta 1
        char estado[20];
        char codigo[20];
        char cidade[20];
        int populacao;
        float areakm;
        float pib;
        int pontosTuristicos;

    //variaveis carta 2
        char estado2[20];
        char codigo2[20];
        char cidade2[20];
        int populacao2;
        float areakm2;
        float pib2;
        int pontosTuristicos2;

    // Área para entrada de dados
    //começo entrada de dados carta 1

        printf("Insira o estado: \n");
        scanf("%s", &estado);

        printf("Insira o código: \n");
        scanf("%s", &codigo);

        printf("Insira o nome da cidade: \n");
        scanf("%s", &cidade);

        printf("Insira a população: \n");
        scanf("%d", &populacao);

        printf("Insira a area em km² da cidade: \n");
        scanf("%f", &areakm);

        printf("Insira o PIB da cidade: \n");
        scanf("%f", &pib);

        printf("Insira a quantidade de pontos turísticos: \n");
        scanf("%d" , &pontosTuristicos);
      //fim entrada de dados carta 1

      //começo entrada de dados carta 2

        printf("Vamos agora criar a carta 2 \n");

        printf("Insira o estado: \n");
        scanf("%s", &estado2);

        printf("Insira o código: \n");
        scanf("%s", &codigo2);

        printf("Insira o nome da cidade: \n");
        scanf("%s", &cidade2);

        printf("Insira a população: \n");
        scanf("%d", &populacao2);

        printf("Insira a area em km² da cidade: \n");
        scanf("%f", &areakm2);

        printf("Insira o PIB da cidade: \n");
        scanf("%f", &pib2);

        printf("Insira a quantidade de pontos turísticos: \n");
        scanf("%d" , &pontosTuristicos2);

      //Fim entrada de dados carta 2

      // Área para exibição dos dados da cidade

      //Exibição dos dados da carta 1

        printf("Carta 1: \n Estado: %s\n Código: %s\n", estado, codigo);

        printf("Cidade: %s\n População: %d \n", cidade, populacao);

        printf("Area em km²: %.2fkm²\n PIB: %.2f Bilhões de reais\n", areakm, pib);

        printf("Numero de pontos turísticos: %d\n", pontosTuristicos);

      //Fim da Exibição dos dados carta 1

      //Começo Exibição dos dados carta 2

        printf("Carta 2: \n Estado: %s\n Codigo: %s\n", estado2, codigo2);

        printf("Cidade: %s\n População: %d \n", cidade2, populacao2);

        printf("Area em km²: %.2fkm²\n PIB: %.2f Bilhões de reais\n", areakm2, pib2);

        printf("Numero de pontos turísticos: %d\n", pontosTuristicos2);

      //Fim da exibição dos dados carta 2
        return 0;
} 
