#include <stdio.h>

int main() {
    
    // Variáveis carta 1
    char estado[20];
    char codigo[20];
    char cidade[20];
    int populacao;
    float areakm;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
    float superpoder;

    // Variáveis carta 2
    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float areakm2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superpoder2;
    //Entrada de dados - Carta 1

    printf("***Inicio Do Jogo***\n");

    printf("***Cadastro Carta 1*** \n");

    printf("Insira o estado: \n");
    scanf("%s", &estado);

    printf("Insira o código: \n");
    scanf("%s", &codigo);

    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Insira a população : \n");
    scanf("%d", &populacao);

    printf("Insira a área em km² da cidade: \n");
    scanf("%f", &areakm);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("***Fim Cadastro Carta 1***\n");

    // Cálculos para a carta 1

    densidade = (float) populacao / areakm;
    pibPerCapita = pib * 1000000000 / (float) populacao;
    superpoder = (float) populacao + areakm + pib + (float) pontosTuristicos + pibPerCapita + (1.0 / densidade);

    //Entrada de dados - Carta 2

    printf("***Cadastro Carta 2***\n");

    printf("Insira o estado: \n");
    scanf("%s", &estado2);

    printf("Insira o código: \n");
    scanf("%s", &codigo2);

    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Insira a população: \n");
    scanf("%d", &populacao2);

    printf("Insira a área em km² da cidade: \n");
    scanf("%f", &areakm2);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("***Fim Cadastro Carta 2***\n");

    // Cálculos para a carta 2
    
    densidade2 = (float) populacao2 / areakm2;
    pibPerCapita2 = pib2 * 1000000000 / (float) populacao2;
    superpoder2 = (float) populacao2 + areakm2 + pib2 + (float) pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibição dos dados - Carta 1

    printf("Carta 1:\n");

    printf("Estado: %s\nCódigo: %s\n", estado, codigo);

    printf("Nome da Cidade: %s\nPopulação: %d\n", cidade, populacao);

    printf("Área: %.2f km²\nPIB: %.2f bilhões de reais\n", areakm, pib);

    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade);

    printf("PIB per Capita: %.2f reais\n", pibPerCapita);

    // Exibição dos dados - Carta 2

    printf("Carta 2:\n");

    printf("Estado: %s\n Código: %s\n", estado2, codigo2);

    printf("Nome da Cidade: %s\n População: %d\n", cidade2, populacao2);

    printf("Área: %.2f km² \n PIB: %.2f bilhões de reais \n", areakm2, pib2);

    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    //Comparação das cartas

    printf("Comparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao>populacao2);

    printf("Área: Carta 1 venceu (%d)\n", areakm> areakm2);

    printf("PIB: Carta 1 venceu (%d)\n",pib > pib2);

    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos> pontosTuristicos2);

    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade< densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n",pibPerCapita > pibPerCapita2);

    printf("Super Poder: Carta 1 venceu (%d)\n",superpoder>superpoder2);

    printf("***Fim De Jogo***\n");
    

    return 0;
}
