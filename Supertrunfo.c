#include <stdio.h>

int main() {
    char estado[20];
    char ccarta[20];
    char nomecidade[50];
    int populacao;
    float areakm;
    float pib;
    int pontoturi;

    // Variáveis carta 2
    char estado2[20];
    char ccarta2[20];
    char nomecidade2[50];
    int populacao2;
    float areakm2;
    float pib2;
    int pontoturi2;

    // Carta 1
    printf("Digite seu estado (sigla): ");
    scanf(" %19s", estado);

    printf("Digite o código da sua carta: ");
    scanf(" %19s", ccarta);

    printf("Digite o nome da sua cidade: ");
    scanf(" %[^\n]", nomecidade);  // permite ler espaços no nome

    printf("Digite o numero de habitantes da sua cidade: ");
    scanf("%i", &populacao);

    printf("Digite a área em KM2 da sua cidade: ");
    scanf("%f", &areakm);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%i", &pontoturi);

    // Carta 2
    printf("\nAgora as informações da segunda carta\n");

    printf("Digite seu estado (sigla): ");
    scanf(" %19s", estado2);

    printf("Digite o código da sua carta: ");
    scanf(" %19s", ccarta2);

    printf("Digite o nome da sua cidade: ");
    scanf(" %[^\n]", nomecidade2);  // permite ler espaços no nome

    printf("Digite o numero de habitantes da sua cidade: ");
    scanf("%i", &populacao2);

    printf("Digite a área em KM2 da sua cidade: ");
    scanf("%f", &areakm2);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%i", &pontoturi2);

    // Saída
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", ccarta);
    printf("Cidade: %s\n", nomecidade);
    printf("População: %i\n", populacao);
    printf("Área: %.2f km²\n", areakm);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %i\n", pontoturi);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", ccarta2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %i\n", pontoturi2);

    return 0;
}
