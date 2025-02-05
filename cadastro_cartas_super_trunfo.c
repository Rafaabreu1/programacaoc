#include <stdio.h>

int main() {

    int codigo_da_cidade;
    char nome[20]; 
    int populacao;
    double area;
    double pib;
    int numero_pontos_turisticos;

    printf ("Digite os dados abaixo\n");

    printf ("Digite o codigo da cidade: ");
    scanf ("%d", &codigo_da_cidade);

    printf ("Digite o nome da cidade: ");
    scanf ("%s", nome);

    printf("Digite a população total: ");
    scanf ("%d", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%lf", &area);

    printf ("Digite o pib da cidade: ");
    scanf("%lf", &pib);

    printf ("Digite a quantidade de pontos turísticos: ");
    scanf ("%d", &numero_pontos_turisticos);

    printf ("código da cidade: %d\n", codigo_da_cidade);
    printf ("Nome da cidade: %s\n", nome);
    printf ("populaçao: %d\n", populacao);
    printf ("área: %lf\n", area);
    printf ("pib: %lf\n", pib);
    printf ("Número de pontos turísticos: %d\n", numero_pontos_turisticos);

    return 0;
}