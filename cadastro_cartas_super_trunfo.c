#include <stdio.h>

int main() {

    char codigo_da_cidade [50];
    char estado[50];
    char nome[50]; 
    float populacao;
    double area;
    double pib;
    int numero_pontos_turisticos;

    char codigo_da_cidade2 [50];
    char estado2[50];
    char nome2[50]; 
    float populacao2;
    double area2;
    double pib2;
    int numero_pontos_turisticos2;
    

    printf ("Digite os dados abaixo\n");

    printf ("Digite o estado: ");
    fgets(estado, sizeof(estado), stdin);

    printf ("Digite o codigo da cidade: ");
    fgets(codigo_da_cidade, sizeof(codigo_da_cidade), stdin);

    printf ("Digite o nome da cidade: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a população total: ");
    scanf ("%f",&populacao);

    printf("Digite a área da cidade: ");
    scanf("%lf",&area);

    printf ("Digite o pib da cidade: ");
    scanf("%lf",&pib);

    printf ("Digite a quantidade de pontos turísticos: ");
    scanf ("%d", &numero_pontos_turisticos);

    double densidade_populacional = populacao /  area;
    double pib_per_capita = pib / populacao;

    getchar();

    printf ("Digite os dados abaixo\n");

    printf ("Digite o estado: ");
    fgets(estado2, sizeof(estado2), stdin);

    printf ("Digite o codigo da cidade: ");
    fgets(codigo_da_cidade2, sizeof(codigo_da_cidade2), stdin);

    printf ("Digite o nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);

    printf("Digite a população total: ");
    scanf ("%f",&populacao2);

    printf("Digite a área da cidade: ");
    scanf("%lf",&area2);

    printf ("Digite o pib da cidade: ");
    scanf("%lf",&pib2);

    printf ("Digite a quantidade de pontos turísticos: ");
    scanf ("%d", &numero_pontos_turisticos2);

    double densidade_populacional2 = populacao2 /  area2;
    double pib_per_capita2 = pib2 / populacao2;

    printf ("\n--- Carta 1 ---\n");
    printf ("\n--- Dados da Cidade ---\n");
    printf ("Estado: %s", estado);
    printf ("Código da cidade: %s", codigo_da_cidade);
    printf ("Nome da cidade: %s", nome);
    printf ("População: %f\n", populacao);
    printf ("Área: %.2lf km²\n", area);
    printf ("PIB: %.2lf bilhões\n", pib);
    printf ("Número de pontos turísticos: %d\n", numero_pontos_turisticos);
    printf ("Densidade populacional: %.2f hab/km²\n", densidade_populacional);
    printf ("PIB per capita: %.2lf\n", pib_per_capita);

    printf ("\n--- Carta 2 ---\n");
    printf ("\n--- Dados da Cidade ---\n");
    printf ("Estado: %s",estado2);
    printf ("Código da cidade: %s",codigo_da_cidade2);
    printf ("Nome da cidade: %s",nome2);
    printf ("População: %f\n",populacao2);
    printf ("Área: %.2lf km²\n",area2);
    printf ("PIB: %.2lf bilhões\n",pib2);
    printf ("Número de pontos turísticos: %d\n",numero_pontos_turisticos2);
    printf ("Densidade populacional: %.2f hab/km²\n",densidade_populacional2);
    printf ("PIB per capita: %.2lf\n",pib_per_capita2);

    return 0;
}