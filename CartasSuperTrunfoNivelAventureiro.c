#include <stdio.h>

// Pais -> 8 cartas/estado -> 4 cidades
// A01, A02, A03, A04
// B01, B02, B03, B04
// C01, C02, C03, C04
// D01, D02, D03, D04
// E01, E02, E03, E04
// F01, F02, F03, F04
// G01, G02, G03, G04
// H01, H02, H03, H04

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Douglas

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    float densidade1, densidade2;
    float PIB_PER_CAPITA1, PIB_PER_CAPITA2;
    int numero_pontos_turisticos1, numero_pontos_turisticos2;
    char codigo1[4], codigo2[4]; // Exemplo: "A01", "B02", etc. Espera 3 caracteres + '\0' para o terminador de string

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código (Exemplo: \"A01\", \"B02\", etc.): ");
    scanf("%s", codigo1);
    printf("Digite a população da cidade (Exemplo: 30000): ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade (Exemplo: 254.000): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (Exemplo: 678.235): ");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos da cidade (Exemplo: 23): ");
    scanf("%d", &numero_pontos_turisticos1);
    // Cálculo da densidade demográfica
    densidade1 = (float)populacao1 / area1;
    // Cálculo do PIB per capita
    PIB_PER_CAPITA1 = PIB1 / populacao1;

    // linha em branco
    printf("\n");

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código (Exemplo: \"A01\", \"B02\", etc.): ");
    scanf("%s", codigo2); // Limit input to 2 characters to prevent buffer overflow
    printf("Digite a população da cidade (Exemplo: 30000): ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (Exemplo: 254.000): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (Exemplo: 678.235): ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos da cidade (Exemplo: 23): ");
    scanf("%d", &numero_pontos_turisticos2);
    // Cálculo da densidade demográfica
    densidade2 = (float)populacao2 / area2;
    // Cálculo do PIB per capita
    PIB_PER_CAPITA2 = PIB2 / (float)populacao2;

    // linha em branco
    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Dados da Cidade 1:\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área:  km² %.3f\n", area1);
    printf("PIB: R$ %.3f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos1);
    printf("Densidade Demográfica: %.3f\n", densidade1);
    printf("PIB per Capita: R$%.3f\n", PIB_PER_CAPITA1);

    // linha em branco
    printf("\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Dados da Cidade 2:\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área:  km² %.3f\n", area2);
    printf("PIB: R$ %.3f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade Demográfica: %.3f\n", densidade2);
    printf("PIB per Capita: R$ %.3f\n", PIB_PER_CAPITA2);
    // linha em branco
    printf("\n");

    return 0;
}