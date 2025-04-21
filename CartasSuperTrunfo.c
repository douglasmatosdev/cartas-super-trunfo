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
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao;
    float area;
    float PIB;
    int numero_pontos_turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &numero_pontos_turisticos);

    // linha em branco
    printf("\n");

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Dados da Cidade:\n");
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos);  

    return 0;
}