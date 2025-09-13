#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

float calcularDensidadePopulacional(int populacao, float area) {
    float densidade = populacao / area;
    return densidade;
}

float calcularPIBcapita(float pib, int populacao) {
    float pib_capita = (pib * 1000000000) / populacao;
    return pib_capita;
}

float calcularSuperPoder(int populacao, float area, float pib, int pontos_turisticos,
                         float pibCapita, float densidadePopulacional){
    float super_poder = populacao + area + pib + pontos_turisticos + pibCapita - densidadePopulacional;
    return super_poder;
    }

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char estado1, cidade1[50], codigo1[4];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area1, pib1, densidadePopulacional1, pibCapita1, superPoder1;

    char estado2, cidade2[50], codigo2[4];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2, densidadePopulacional2, pibCapita2, superPoder2;

    printf("\n(Atenção: Por favor não use caracteres acentuados nem o ç, atualmente não funciona)\n");

    printf("\nCarta 1:\n");
    printf("Digite o nome do estado da carta 1: ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1: ");
    scanf(" %s", &codigo1);
    getchar(); //consumir \n para nao atrapalhar o fgets ja que tava dando problema
    printf("Digite o nome da cidade da carta 1: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    printf("Digite o número da população da carta 1: ");
    scanf(" %d", &populacao1);
    printf("Digite o valor da área da carta 1(km²): ");
    scanf(" %f", &area1);
    printf("Digite o valor do PIB da carta 1(em bilhões de R$): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf(" %d", &pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Digite o nome do estado da carta 2: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2: ");
    scanf(" %s", &codigo2);
    getchar(); //consumir \n para nao atrapalhar o fgets ja que tava dando problema
    printf("Digite o nome da cidade da carta 2: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    printf("Digite o número da população da carta 2: ");
    scanf(" %d", &populacao2);
    printf("Digite o valor da área da carta 2(km²): ");
    scanf(" %f", &area2);
    printf("Digite o valor do PIB da carta 2(em bilhões de R$): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf(" %d", &pontos_turisticos2);

    densidadePopulacional1 = calcularDensidadePopulacional(populacao1, area1);
    pibCapita1 = calcularPIBcapita(pib1, populacao1);
    superPoder1 = calcularSuperPoder(populacao1, area1, pib1, pontos_turisticos1, pibCapita1, densidadePopulacional1);

    densidadePopulacional2 = calcularDensidadePopulacional(populacao2, area2);
    pibCapita2 = calcularPIBcapita(pib2, populacao2);
    superPoder2 = calcularSuperPoder(populacao2, area2, pib2, pontos_turisticos2, pibCapita2, densidadePopulacional2);

    printf("\nCarta 1:");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidadePopulacional1);
    printf("\nPIB per Capita: %.2f reais", pibCapita1);

    printf("\n\nCarta 2:");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidadePopulacional2);
    printf("\nPIB per Capita: %.2f reais", pibCapita2);

    printf("\n\nComparação das Cartas:");
    printf("\nPopulação: Carta %d venceu (%d)", (populacao2 > populacao1) + 1, (populacao1 > populacao2));
    printf("\nÁrea: Carta %d venceu (%d)", (area2 > area1) + 1, (area1 > area2));
    printf("\nPIB: Carta %d venceu (%d)", (pib2 > pib2) + 1, (pib1 >pib2));
    printf("\nPontos Turísticos: Carta %d venceu (%d)", (pontos_turisticos2 > pontos_turisticos1) + 1,
                                                    (pontos_turisticos1 > pontos_turisticos2));
    printf("\nDensidade Populacional: Carta %d venceu (%d)", (densidadePopulacional2 < densidadePopulacional1) + 1,
                                                        (densidadePopulacional1 < densidadePopulacional2));
    printf("\nPIB per Capita: Carta %d venceu (%d)", (pibCapita2 > pibCapita1) + 1, (pibCapita1 > pibCapita2));
    printf("\nSuper Poder: Carta %d venceu (%d)", (superPoder2 > superPoder1) + 1, (superPoder1 > superPoder2));

    return 0;
}
