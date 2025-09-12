#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

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
    int populacao1,pontos_turisticos1;
    float area1, pib1;

    char estado2, cidade2[50], codigo2[4];
    int populacao2,pontos_turisticos2;
    float area2, pib2;

    printf("\nAtenção: Por favor não use caracteres acentuados nem o ç, atualmente nao funciona\n");

    printf("\nCarta 1:\n");
    printf("Digite o nome do Estado da Carta 1: ");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta 1: ");
    scanf(" %s", &codigo1);
    getchar(); //consumir \n para nao atrapalhar o fgets ja que tava dando problema
    printf("Digite o Nome da Cidade da Carta 1: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    printf("Digite o número da População da Carta 1: ");
    scanf(" %d", &populacao1);
    printf("Digite o valor da Área da Carta 1: ");
    scanf(" %f", &area1);
    printf("Digite o valor do PIB da Carta 1: ");
    scanf(" %f", &pib1);
    printf("Digite o Número de Pontos Turísticos da Carta 1: ");
    scanf(" %d", &pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Digite o nome do Estado da Carta 2: ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta 2: ");
    scanf(" %s", &codigo2);
    getchar(); //consumir \n para nao atrapalhar o fgets ja que tava dando problema
    printf("Digite o Nome da Cidade da Carta 2: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    printf("Digite o número da População da Carta 2: ");
    scanf(" %d", &populacao2);
    printf("Digite o valor da Área da Carta 2: ");
    scanf(" %f", &area2);
    printf("Digite o valor do PIB da Carta 2: ");
    scanf(" %f", &pib2);
    printf("Digite o Número de Pontos Turísticos da Carta 2: ");
    scanf(" %d", &pontos_turisticos2);

    printf("\nCarta 1:");
    printf("\nEstado: %c", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("\nPopulação: %d", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f bilhões de reais", pib1);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos1);

    printf("\n\nCarta 2:");
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontos_turisticos2);

    return 0;
}
