#include <stdio.h>

int main() {
        //variáveis carta 1 
    char codigo_da_cidade [50];
    char estado[50];
    char nome[50]; 
    unsigned long int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;
    float super_poder;

     //variáveis carta 2
    char codigo_da_cidade2 [50];
    char estado2[50];
    char nome2[50]; 
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;
    float super_poder2;

    //variáveis de comparação
    unsigned long int resultado_populacao;
    float resultado_area;
    float resultado_pib;
    int resultado_numero_pontos_turisticos;
    float resultado_densidade_populacional;
    float resultado_pib_per_capita;
    float resultado_super_poder;
    
      //Entrada carta 1
    printf ("Digite os dados da carta 1:\n");

    printf ("Digite o estado: ");
    fgets(estado, sizeof(estado), stdin);

    printf ("Digite o codigo da cidade: ");
    fgets(codigo_da_cidade, sizeof(codigo_da_cidade), stdin);

    printf ("Digite o nome da cidade: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a população total: ");
    scanf ("%lu",&populacao);

    printf("Digite a área da cidade: ");
    scanf("%f",&area);

    printf ("Digite o pib da cidade: ");
    scanf("%f",&pib);

    printf ("Digite a quantidade de pontos turísticos: ");
    scanf ("%d", &numero_pontos_turisticos);

    float densidade_populacional = populacao /  area;
    float pib_per_capita = pib / populacao;
    float super_poder = populacao + area + pib + numero_pontos_turisticos + pib_per_capita + (1/densidade_populacional);

    getchar();

        //Entrada carta 2

    printf ("Digite os dados da carta 2:\n");

    printf ("Digite o estado: ");
    fgets(estado2, sizeof(estado2), stdin);

    printf ("Digite o codigo da cidade: ");
    fgets(codigo_da_cidade2, sizeof(codigo_da_cidade2), stdin);

    printf ("Digite o nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);

    printf("Digite a população total: ");
    scanf ("%lu",&populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f",&area2);

    printf ("Digite o pib da cidade: ");
    scanf("%f",&pib2);

    printf ("Digite a quantidade de pontos turísticos: ");
    scanf ("%d", &numero_pontos_turisticos2);

    float densidade_populacional2 = populacao2 /  area2;
    float pib_per_capita2 = pib2 / populacao2;
    float super_poder2 = populacao2 + area2 + pib2 + numero_pontos_turisticos2 + pib_per_capita2 + (1/densidade_populacional2);

    //Comparações entre as cartas 

    resultado_populacao = populacao > populacao2;
    resultado_area = area > area2;
    resultado_pib = pib > pib2;
    resultado_numero_pontos_turisticos = numero_pontos_turisticos > numero_pontos_turisticos2;
    resultado_pib_per_capita = pib_per_capita > pib_per_capita2;
    resultado_densidade_populacional = densidade_populacional > densidade_populacional2;
    resultado_super_poder = super_poder > super_poder2;

    //saída carta 1

    printf ("\n--- Carta 1 ---\n");
    printf ("\n--- Dados da Cidade ---\n");
    printf ("Estado: %s", estado);
    printf ("Código da cidade: %s", codigo_da_cidade);
    printf ("Nome da cidade: %s", nome);
    printf ("População: %lu\n", populacao);
    printf ("Área: %.2f km²\n", area);
    printf ("PIB: %.2f bilhões\n", pib);
    printf ("Número de pontos turísticos: %d\n", numero_pontos_turisticos);
    printf ("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
    printf ("PIB per capita: %.2f\n", pib_per_capita);
    printf ("super poder: %.2f\n", super_poder);

    //saída carta 2
    
    printf ("\n--- Carta 2 ---\n");
    printf ("\n--- Dados da Cidade ---\n");
    printf ("Estado: %s",estado2);
    printf ("Código da cidade: %s",codigo_da_cidade2);
    printf ("Nome da cidade: %s",nome2);
    printf ("População: %lu\n",populacao2);
    printf ("Área: %.2f km²\n",area2);
    printf ("PIB: %.2f bilhões\n",pib2);
    printf ("Número de pontos turísticos: %d\n",numero_pontos_turisticos2);
    printf ("Densidade populacional: %.2f hab/km²\n",densidade_populacional2);
    printf ("PIB per capita: %.2f\n",pib_per_capita2);
    printf ("super poder: %.2f\n", super_poder2);

    // Saída das comparações 
    
    printf ("--comparação entre as cartas--\n");
    printf ("População da carta 1 é maior? = %d\n",resultado_populacao );
    printf ("Área da carta 1 é maior? = %d\n",resultado_area);
    printf ("PIB da carta 1 é maior? = %d\n",resultado_pib);
    printf ("Número de pontos turísticos da carta 1 é maior? = %d\n",resultado_numero_pontos_turisticos);
    printf ("Densidade populacional da carta 1 é maior? = %d\n",resultado_densidade_populacional);
    printf ("Pib per capita da carta 1 é maior? = %d\n",resultado_pib_per_capita);
    printf ("Super Poder da carta 1 é maior? = %d\n",resultado_super_poder);

    return 0;
}