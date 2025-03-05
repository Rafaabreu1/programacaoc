#include <stdio.h>

int main() {
    // Variáveis carta 1 
    char codigo_da_cidade[50], estado[50], nome[50];
    unsigned long int populacao;
    float area, pib;
    int numero_pontos_turisticos;s

    // Variáveis carta 2
    char codigo_da_cidade2[50], estado2[50], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int numero_pontos_turisticos2;

    // Variáveis de comparação
    int resultado_populacao, resultado_area, resultado_pib;
    int resultado_numero_pontos_turisticos;
    int resultado_densidade_populacional, resultado_pib_per_capita, resultado_super_poder;

    // Entrada carta 1
    printf("Digite os dados da carta 1:\n");

    printf("Digite o estado: ");
    fgets(estado, sizeof(estado), stdin);

    printf("Digite o código da cidade: ");
    fgets(codigo_da_cidade, sizeof(codigo_da_cidade), stdin);

    printf("Digite o nome da cidade: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a população total: ");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos);

    float densidade_populacional = populacao / area;
    float pib_per_capita = pib / populacao;
    float super_poder = populacao + area + pib + numero_pontos_turisticos + pib_per_capita + (1.0 / densidade_populacional);

    getchar(); // Consumir quebra de linha pendente

    // Entrada carta 2
    printf("\nDigite os dados da carta 2:\n");

    printf("Digite o estado: ");
    fgets(estado2, sizeof(estado2), stdin);

    printf("Digite o código da cidade: ");
    fgets(codigo_da_cidade2, sizeof(codigo_da_cidade2), stdin);

    printf("Digite o nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);

    printf("Digite a população total: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos2);

    float densidade_populacional2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;
    float super_poder2 = populacao2 + area2 + pib2 + numero_pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);

    // Comparações entre as cartas
    resultado_populacao = (populacao > populacao2);
    resultado_area = (area > area2);
    resultado_pib = (pib > pib2);
    resultado_numero_pontos_turisticos = (numero_pontos_turisticos > numero_pontos_turisticos2);
    resultado_densidade_populacional = (densidade_populacional > densidade_populacional2);
    resultado_pib_per_capita = (pib_per_capita > pib_per_capita2);
    resultado_super_poder = (super_poder > super_poder2);

    // Saída carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s", estado);
    printf("Código da cidade: %s", codigo_da_cidade);
    printf("Nome da cidade: %s", nome);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per capita: %.2f\n", pib_per_capita);
    printf("Super poder: %.2f\n", super_poder);

    // Saída carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s", estado2);
    printf("Código da cidade: %s", codigo_da_cidade2);
    printf("Nome da cidade: %s", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Super poder: %.2f\n", super_poder2);

    // Saída das comparações
    printf("\n--- Comparação entre as cartas ---\n");
    printf("População da carta 1 é maior? %s\n", resultado_populacao ? "Sim" : "Não");
    printf("Área da carta 1 é maior? %s\n", resultado_area ? "Sim" : "Não");
    printf("PIB da carta 1 é maior? %s\n", resultado_pib ? "Sim" : "Não");
    printf("Número de pontos turísticos da carta 1 é maior? %s\n", resultado_numero_pontos_turisticos ? "Sim" : "Não");
    printf("Densidade populacional da carta 1 é maior? %s\n", resultado_densidade_populacional ? "Sim" : "Não");
    printf("PIB per capita da carta 1 é maior? %s\n", resultado_pib_per_capita ? "Sim" : "Não");
    printf("Super poder da carta 1 é maior? %s\n", resultado_super_poder ? "Sim" : "Não");

    return 0;
}
