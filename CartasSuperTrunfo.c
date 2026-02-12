#include <stdio.h>

int main() {
    
    char estado;
    int numeroCidade;
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("=== Cadastro de Carta - Super Trunfo Paises ===\n\n");

    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado);

    printf("Digite o numero da cidade (1 a 4): ");
    scanf("%d", &numeroCidade);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao);

    printf("Digite a area (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n=== Carta Cadastrada ===\n");
    printf("Codigo: %c0%d\n", estado, numeroCidade);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %lu\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);


return 0;
} 
