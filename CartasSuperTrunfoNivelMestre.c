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
    int quantidade_de_cartas = 2; // Defina a quantidade de cartas que deseja cadastrar
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    unsigned long int populacao[2];
    float area[2];
    float PIB[2];
    float densidade[2];
    float PIB_PER_CAPITA[2];
    int numero_pontos_turisticos[2];
    char codigo[2][4]; // Exemplo: "A01", "B02", etc. Espera 3 caracteres + '\0' para o terminador de string
    float super_poder[2];
    char comparar[2]; // (s)sim / (n)nao

    printf("=====================================\n");
    printf("          Nivel Mestre              \n");
    printf("=====================================\n\n");

    for (int i = 0; i < quantidade_de_cartas; i++)
    {
        printf("Digite os dados da carta %d:\n", i + 1);
        printf("Digite o código (Exemplo: \"A01\", \"B02\", etc.): ");
        scanf("%s", codigo[i]);
        printf("Digite a população da cidade (Exemplo: 30000): ");
        scanf("%d", &populacao[i]);
        printf("Digite a área da cidade (Exemplo: 254.000): ");
        scanf("%f", &area[i]);
        printf("Digite o PIB da cidade (Exemplo: 678.235): ");
        scanf("%f", &PIB[i]);
        printf("Digite o número de pontos turísticos da cidade (Exemplo: 23): ");
        scanf("%d", &numero_pontos_turisticos[i]);

        // Cálculo da densidade demográfica
        densidade[i] = (float)populacao[i] / area[i];

        // Cálculo do PIB per capita
        PIB_PER_CAPITA[i] = PIB[i] / (float)populacao[i];

        // Super Poder: Soma de todos os atributos (inclusive os calculados), com a densidade populacional invertida antes da soma (1/densidade). Tipo: float.
        super_poder[i] = PIB_PER_CAPITA[i] + PIB[i] + numero_pontos_turisticos[i] + (1 / densidade[i]);

        // linha em branco
        printf("\n");
    }

    for (int i = 0; i < quantidade_de_cartas; i++)
    {

        // Exibição dos Dados das Cartas:
        // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
        // Exiba os valores inseridos para cada atributo da cidade, um por linha.
        printf("Dados da Cidade %d:\n", i + 1);
        printf("Código: %s\n", codigo[i]);
        printf("População: %d\n", populacao[i]);
        printf("Área:  km² %.3f\n", area[i]);
        printf("PIB: R$ %.3f\n", PIB[i]);
        printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos[i]);
        printf("Densidade Demográfica: %.3f\n", densidade[i]);
        printf("PIB per Capita: R$%.3f\n", PIB_PER_CAPITA[i]);

        // linha em branco
        printf("\n");
    }

    printf("Deseja comparar as cartas? (s/n): ");
    scanf(" %c", &comparar[0]); // Adicionando espaço antes de %c para ignorar espaços em branco
    int carta_vencedora; //(1 se a Carta 1 vence, 0 se a Carta 2 vence).
    if (comparar[0] == 's' || comparar[0] == 'S')
    {
        for (int i = 0; i < quantidade_de_cartas; i++)
        {

            printf("Dados da Cidade %d e da cidade %d\n", i + 1, i + 2);
            printf("Código: %s, Código: %s\n", codigo[i], codigo[i + 1]);
            printf("População: %d, população: %d\n", populacao[i], populacao[i + 1]);
            printf("Área:  km² %.3f, Área:  km² %.3f\n", area[i], area[i + 1]);
            printf("PIB: R$ %.3f, PIB: R$ %.3f\n", PIB[i], PIB[i + 1]);
            printf("Número de Pontos Turísticos: %d, Número de Pontos Turísticos: %d\n", numero_pontos_turisticos[i], numero_pontos_turisticos[i + 1]);
            printf("Densidade Demográfica: %.3f, Densidade Demográfica: %.3f\n", densidade[i], densidade[i + 1]);
            printf("PIB per Capita: R$%.3f, PIB per Capita: R$%.3f\n", PIB_PER_CAPITA[i], PIB_PER_CAPITA[i + 1]);
            printf("Super Poder: %.3f, Super Poder: %.3f\n", super_poder[i], super_poder[i + 1]);

            if (super_poder[i] > super_poder[i + 1] && densidade[i] < densidade[i + 1])
            {
                carta_vencedora = 1; // Carta 1 vence
            }
            else if (super_poder[i] > super_poder[i + 1] && densidade[i] > densidade[i + 1])
            {
                carta_vencedora = 0; // Carta 2 vence
            }
            else if (super_poder[i] < super_poder[i + 1] && densidade[i] < densidade[i + 1])
            {
                carta_vencedora = 1; // Carta 1 vence
            }
            else if (super_poder[i] < super_poder[i + 1])
            {
                carta_vencedora = 0; // Carta 2 vence
            }
            else
            {
                carta_vencedora = -1; // Empate
            }

            // linha em branco
            printf("\n");
        }
    }

    if (carta_vencedora == 1)
    {
        printf("A carta 1 venceu!\n");
    }
    else if (carta_vencedora == 0)
    {
        printf("A carta 2 venceu!\n");
    }
    else
    {
        printf("Empate!\n");
    }

    return 0;
}