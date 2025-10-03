#include <stdio.h>

int main() {
    // Variáveis carta 1
    char estado[20], ccarta[20], nomecidade[50];
    int populacao, pontoturi;
    float areakm, pib, densidade, pib_percapta;

    // Variáveis carta 2
    char estado2[20], ccarta2[20], nomecidade2[50];
    int populacao2, pontoturi2;
    float areakm2, pib2, densidade2, pib_percapta2;

    // Entrada Carta 1
    printf("Digite seu estado (sigla): ");
    scanf(" %19s", estado);

    printf("Digite o código da sua carta: ");
    scanf(" %19s", ccarta);

    printf("Digite o nome da sua cidade: ");
    scanf(" %[^\n]", nomecidade); 

    printf("Digite o numero de habitantes da sua cidade: ");
    scanf("%i", &populacao);

    printf("Digite a área em KM2 da sua cidade: ");
    scanf("%f", &areakm);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%i", &pontoturi);

    // Entrada Carta 2
    printf("\nAgora as informações da segunda carta\n");

    printf("Digite seu estado (sigla): ");
    scanf(" %19s", estado2);

    printf("Digite o código da sua carta: ");
    scanf(" %19s", ccarta2);

    printf("Digite o nome da sua cidade: ");
    scanf(" %[^\n]", nomecidade2);  

    printf("Digite o numero de habitantes da sua cidade: ");
    scanf("%i", &populacao2);

    printf("Digite a área em KM2 da sua cidade: ");
    scanf("%f", &areakm2);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%i", &pontoturi2);

    // cálculos
    densidade = populacao / areakm;
    pib_percapta = pib / populacao;

    densidade2 = populacao2 / areakm2;
    pib_percapta2 = pib2 / populacao2;

    // Saída das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", ccarta);
    printf("Cidade: %s\n", nomecidade);
    printf("População: %i\n", populacao);
    printf("Área: %.2f km²\n", areakm);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %i\n", pontoturi);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB per Capita: %.2f\n", pib_percapta);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", ccarta2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %i\n", pontoturi2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_percapta2);

    // === Comparação Avançada ===
    int op1, op2;
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;
    float soma1, soma2;

    // Menu 1ª escolha
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &op1);

    // Menu 2ª escolha (dinâmico)
    do {
        printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
        if (op1 != 1) printf("1 - População\n");
        if (op1 != 2) printf("2 - Área\n");
        if (op1 != 3) printf("3 - PIB\n");
        if (op1 != 4) printf("4 - Pontos turísticos\n");
        if (op1 != 5) printf("5 - Densidade demográfica\n");
        if (op1 != 6) printf("6 - PIB per capita\n");
        printf("Opção: ");
        scanf("%d", &op2);

        if (op2 == op1) {
            printf("⚠ Você não pode escolher o mesmo atributo duas vezes!\n");
        }
    } while (op2 == op1);

    // Função auxiliar para pegar valores
    switch(op1) {
        case 1: valor1_c1 = populacao; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = areakm; valor1_c2 = areakm2; break;
        case 3: valor1_c1 = pib; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontoturi; valor1_c2 = pontoturi2; break;
        case 5: valor1_c1 = densidade; valor1_c2 = densidade2; break;
        case 6: valor1_c1 = pib_percapta; valor1_c2 = pib_percapta2; break;
    }
    switch(op2) {
        case 1: valor2_c1 = populacao; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = areakm; valor2_c2 = areakm2; break;
        case 3: valor2_c1 = pib; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontoturi; valor2_c2 = pontoturi2; break;
        case 5: valor2_c1 = densidade; valor2_c2 = densidade2; break;
        case 6: valor2_c1 = pib_percapta; valor2_c2 = pib_percapta2; break;
    }

    // Soma dos atributos
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    // Regras especiais para densidade (menor vence)
    if (op1 == 5) soma1 += (valor1_c1 < valor1_c2) ? 1 : 0, soma2 += (valor1_c2 < valor1_c1) ? 1 : 0;
    if (op2 == 5) soma1 += (valor2_c1 < valor2_c2) ? 1 : 0, soma2 += (valor2_c2 < valor2_c1) ? 1 : 0;

    // Exibição
    printf("\n===== Resultado =====\n");
    printf("%s: %.2f pontos | %s: %.2f pontos\n", nomecidade, soma1, nomecidade2, soma2);

    if (soma1 > soma2) {
        printf("🏆 Vencedor: %s!\n", nomecidade);
    } else if (soma2 > soma1) {
        printf("🏆 Vencedor: %s!\n", nomecidade2);
    } else {
        printf("🤝 Empate!\n");
    }

    return 0;
}
