// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
#include <stdio.h>

// Desafio Super Trunfo 
// Tema 1 - Cadastro das cartas

int main() {
    
    // Definição das variáveis para armazenar as propriedades das cidades
    //===== CARTA 1 =====
    char estado1[3];
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //===== CARTA 2 =====
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;


    //=== LEITURA DOS DADOS DA CARTA 1 ===
    printf("Cadastro da Carta 1:\n");

    printf("Digite a letra do estado (A-H): ");
    scanf(" %s", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);
  
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    //=== LEITURA DOS DADOS DA CARTA 2 ===
    printf("\nCadastro da Carta 2:\n");

    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);
  
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    //=== CÁLCULOS ===

    float densidadepopulacional1 = populacao1 / area1;
    float pibpercapita1 = pib1 / populacao1;

    float densidadepopulacional2 = populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;

    float superpoder1 = (float) populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1 / densidadepopulacional1);
    float superpoder2 = (float) populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1 / densidadepopulacional2);


    //=== EXIBIÇÃO DOS DADOS ===

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f milhões de reais\n", pibpercapita1);


    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f milhões de reais\n", pibpercapita2);

    //=== COMPARAÇÃO DAS CARTAS (Atributo: População) ===
    printf("\n\nComparação de cartas (Atributo: População):\n\n");

    printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);

    // estrutura simples igual ao seu exemplo
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("reesultado: Carta 2 (%s) venceu!\n\n", cidade2);
    }


    printf("==================");

    return 0;
}
