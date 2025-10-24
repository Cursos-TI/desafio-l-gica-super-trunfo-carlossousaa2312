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
    char pais1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    //===== CARTA 2 =====
    char pais2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;


    //=== LEITURA DOS DADOS DA CARTA 1 ===
    printf("Cadastro da Carta 1:\n");

    printf("Digite o País: ");
    scanf(" %s", &pais1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);
  
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);
    

    //=== LEITURA DOS DADOS DA CARTA 2 ===
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o Pais: ");
    scanf(" %s", &pais2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);
  
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    //Calculo densidade populacional carta 1
    float densidadepopulacional1 = populacao1 / area1;
    //Calculo densidade populacional carta 2
    float densidadepopulacional2 = populacao2 / area2;

    
    //=== EXIBIÇÃO DOS DADOS ===

    printf("\n=== Carta 1 ===\n");
    printf("Pais: %s\n", pais1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);

    printf("\n=== Carta 2 ===\n");
    printf("Pais: %s\n", pais2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);

int opcao;

    printf("=====================================\n");
    printf("         SUPER TRUNFO - MUNDO        \n");
    printf("=====================================\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("=====================================\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n=== Comparando %s x %s ===\n", pais1, pais2);

    switch (opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n", pais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", pais1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f trilhões de dólares\n", pais1, pib1 / 1e12);
            printf("%s: %.2f trilhões de dólares\n", pais2, pib2 / 1e12);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", pais1, pontosturisticos1);
            printf("%s: %d pontos\n", pais2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pontosturisticos2 > pontosturisticos1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (menor vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", pais1, densidadepopulacional1);
            printf("%s: %.2f hab/km²\n", pais2, densidadepopulacional2);

            // Estrutura de decisão aninhada
            if (densidadepopulacional1 < densidadepopulacional2) {
                printf("Vencedor: %s (menor densidade vence)\n", pais1);
            } else {
                if (densidadepopulacional2 < densidadepopulacional1) {
                    printf("Vencedor: %s (menor densidade vence)\n", pais2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    printf("=====================================\n");
    printf("Fim da rodada!\n");
    

    return 0;
}
