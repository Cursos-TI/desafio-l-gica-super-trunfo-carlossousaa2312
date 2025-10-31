#include <stdio.h>
int main() { 
    
    //DADOS DAS CARTAS (PRÉ-CADASTRADAS)

    //===== CARTA 1 ===== 
    char pais1[20] = "Brasil";
    int populacao1 = 213;           // milhões
    float area1 = 8.516;            // milhões km²
    float pib1 = 2.179;             // trilhões USD
    int pontosturisticos1 = 30;
    
    //===== CARTA 2 ===== 
    char pais2[20] = "Argentina";
    int populacao2 = 45;           // milhões
    float area2 = 2.780;           // milhões km²
    float pib2 = 0.487;            // trilhões USD
    int pontosturisticos2 = 20;
    
    //CÁLCULO DENSIDADE POPULACIONAL CARTA 1
    float densidadepopulacional1 = populacao1 / area1; 
    
    //CÁLCULO DENSIDADE POPULACIONAL CARTA 2
    float densidadepopulacional2 = populacao2 / area2; 
    
    //=== EXIBIÇÃO DOS DADOS CARTA 1=== 
    
printf("\n=== Carta 1 ===\n"); 
    printf("Pais: %s\n", pais1); 
    printf("População: %d milhões de habitantes\n", populacao1); 
    printf("Área: %.3f milhões de km²\n", area1); 
    printf("PIB: %.3f trilhões de dólares\n", pib1); 
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1); 
    printf("Densidade Populacional: %.3f hab/km²\n", densidadepopulacional1); 
    
    //=== EXIBIÇÃO DOS DADOS CARTA 1=== 
    printf("\n=== Carta 2 ===\n"); 
    printf("Pais: %s\n", pais2); 
    printf("População: %d milhões de habitantes\n", populacao2); 
    printf("Área: %.3f km²\n", area2); 
    printf("PIB: %.3f bilhões de dólares\n", pib2); 
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2); 
    printf("Densidade Populacional: %.3f hab/km²\n", densidadepopulacional2);

    //VARIÁVEIS DE ESCOLHA
    int resultado1, resultado2;
    int atributo1, atributo2;
    float valor1_carta1, valor2_carta1;
    float valor1_carta2, valor2_carta2;
    float soma1, soma2;
    

    printf("\n====SUPER TRUNFO - NÍVEL MESTRE====\n\n");
    printf("Comparando: %s x %s\n", pais1, pais2);

    //MENU DE SELEÇÃO DO PRIMEIRO ATRIBUTO
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1. Populção\n");
    printf("2. Área\n");
    printf("3.PIB\n");
    printf("4. Pontos Turistícos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha: ");
    scanf("%d", &atributo1);

    switch (atributo1)
    {
    case 1:
        printf("====Você escolheu a opção (população)====\n");
        valor1_carta1 = populacao1;
        valor1_carta2 = populacao2;
        resultado1 = valor1_carta1 > valor1_carta2 ? 1 : 0;
        break;
    case 2:
        printf("====Você escolheu a opção (área)====\n");
        valor1_carta1 = area1;
        valor1_carta2 = area2;
        resultado1 = valor1_carta1 > valor1_carta2 ? 1 : 0;
        break;
    case 3:
        printf("====Você escolheu a opção (PIB)====\n");
        valor1_carta1 = pib1;
        valor1_carta2 = pib2;
        resultado1 = valor1_carta1 > valor1_carta2 ? 1 : 0;
        break;
    case 4:
        printf("====Você escolheu a opção (pontos turísticos)====\n");
        valor1_carta1 = pontosturisticos1;
        valor1_carta2 = pontosturisticos2;
        resultado1 = valor1_carta1 > valor1_carta2 ? 1 : 0;
        break;
    case 5:
        printf("====Você escolheu a opção (densidade populacional)====\n");
        valor1_carta1 = densidadepopulacional1;
        valor1_carta2 = densidadepopulacional2;
        resultado1 = valor1_carta1 < valor1_carta2 ? 1 : 0;
        break;
    default:
        printf("\nOpção inválida! Encerrando o jogo.\n");
        break;
    }
    //MENU DE SELEÇÃO DO PRIMEIRO ATRIBUTO
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if (atributo1 != 1) printf("1. Populção\n");
    if (atributo1 != 2) printf("2. Área\n");
    if (atributo1 != 3) printf("3.PIB\n");
    if (atributo1 != 4) printf("4. Pontos Turistícos\n");
    if (atributo1 != 5) printf("5. Densidade Populacional\n");
    printf("Opção: ");
    scanf("%d", &atributo2);
     
    //IMPEDE ESCOLHA REPETIDA
    if (atributo2 == atributo1) {
        printf("\nVocê escolheu o mesmo atributo duas vezes! Reinicie e tente novamente,\n");
    }else {
        switch (atributo2)
    {
    case 1:
        printf("====Você escolheu a opção (população)====\n");
        valor2_carta1 = populacao1;
        valor2_carta2 = populacao2;
        resultado2 = valor2_carta1 > valor2_carta2 ? 1 : 0;
        break;
    case 2:
        printf("====Você escolheu a opção (área)====\n");
        valor2_carta1 = area1;
        valor2_carta2 = area2;
        resultado2 = valor2_carta1 > valor2_carta2 ? 1 : 0;
        break;
    case 3:
        printf("====Você escolheu a opção (PIB)====\n");
        valor2_carta1 = pib1;
        valor2_carta2 = pib2;
        resultado2 = valor2_carta1 > valor2_carta2 ? 1 : 0;
        break;
    case 4:
        printf("====Você escolheu a opção (pontos turísticos)====\n");
        valor2_carta1 = pontosturisticos1;
        valor2_carta2 = pontosturisticos2;
        resultado2 = valor2_carta1 > valor2_carta2 ? 1 : 0;
        break;
    case 5:
        printf("====Você escolheu a opção (densidade populacional)====\n");
        valor2_carta1 = densidadepopulacional1;
        valor2_carta2 = densidadepopulacional2;
        resultado2 = valor2_carta1 < valor2_carta2 ? 1 : 0;
        break;
    default:
        printf("\nOpção inválida! Encerrando o jogo.\n");
        break;
    }
    
    if (resultado1 == resultado2)
    {
        printf("\n=====%s venceu! (Ganhou nos dois atributos)=====\n", pais1);
    }else if (resultado1 != resultado2){
        printf("\n=====Empate técnico! Cada país venceu em um atributo.=====\n");
    }else
        printf("\n=====%s venceu! (Melhor nos dois atributos)=====\n", pais2);
    }

    // COMPARAÇÃO FINAL
    //FUNÇÃO TERNÁRIA PARA EXIBIR OS NOMES DOS ATRIBUTOS
    printf("\n%s x %s\n", pais1, pais2);
    char *nomeAtrib1 = (atributo1 == 1) ? "População":
                      (atributo1 == 2) ? "Área":
                      (atributo1 == 3) ? "PIB":
                      (atributo1 == 4) ? "Pontos Turísticos":
                                         "Densidade Populacional";

    char *nomeAtrib2 = (atributo2 == 1) ? "População":
                      (atributo2 == 2) ? "Área":
                      (atributo2 == 3) ? "PIB":
                      (atributo2 == 4) ? "Pontos Turísticos":
                                         "Densidade Populacional";

    printf("%s: %.3f x %.2f\n", nomeAtrib1, valor1_carta1, valor1_carta2);
    printf("%s: %.3f x %.2f\n", nomeAtrib2, valor2_carta1, valor2_carta2);
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;
    printf("\nSoma total dos atributos:\n");
    printf("%s: %.3f\n", pais1, soma1);
    printf("%s: %.3f\n", pais2, soma2);    


    return 0;
}
