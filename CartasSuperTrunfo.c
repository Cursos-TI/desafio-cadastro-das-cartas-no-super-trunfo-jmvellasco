#include <stdio.h>

int main(){
    
    // Definição das variáveis para cada atributo das cartas.

    char estado1;                                  // Variável do atributo estado da primeira carta
    char estado2;                                  // Variável do atributo estado da segunda carta.
    char codigo1[20];                              // Variável do atributo código da primeira carta
    char codigo2[20];                              // Variável do atributo código da segunda carta.
    char nome_cidade1[20];                         // Variável do atributo nome da cidade da primeira carta.
    char nome_cidade2[20];                         // Variável do atributo nome da cidade da segunda carta.
    int populacao1;                                // Variável do atributo população da primeira carta.
    int populacao2;                                // Variavel do atributo população da segunda carta.
    float area1;                                   // Variável do atributo área em km² da primeira carta.
    float area2;                                   // Variavel do atributo área em km² da segunda carta.
    double pib1;                                    // Variável do atributo PIB da primeira carta.
    double pib2;                                    // Váriavel do atributo PIB da segunda carta.
    int pontos_turisticos1;                        // Variável do atributo pontos turísticos da primeira carta.
    int pontos_turisticos2;                        // Variável do atributo pontos turísticos da segunda carta.

    // Cadastro das cartas:
    // Pimeira carta.
    // Funções printf e scanf para o cadastro de cada atributo da primeira carta.

    printf("Vamos começar! Digite uma letra de representação para a primeira carta (de 'A' a 'H'): \n");
    scanf(" %c", &estado1);

    printf("Vamos criar o código da carta! Digite a letra do seu estado e em seguida digite um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a aréa em km² de sua cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em reais, ex: 5000000000): \n");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos1);

    // Segunda carta.
    // Funções printf e scanf para o cadastro de cada atributo da segunda segunda carta.

    printf("Certo, agora vamos para a segunda carta. Digite uma letra de representação (De 'A' a 'H'): \n");
    scanf(" %c", &estado2);

    printf("Digite seu código: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km² de sua cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em reais, ex: 5000000000): \n");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da Densidade Populacional:

    float densidade_populacional_1 = populacao1 / area1;
    float densidade_populacional_2 = populacao2 / area2;

    // Cálculo do PIB per capita:

    double pib_per_capita1 = pib1 / populacao1;
    double pib_per_capita2 = pib2 / populacao2;

    // Exibição dos dados das cartas:
    // Funções printf para exibir os dados cadastrados da primeira carta.

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.0lf\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional_1);
    printf("PIB per capita: %.0lf", pib_per_capita1);

    // Funções printf para exibir os dados cadastrados da segunda carta.

    printf("\n\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.0lf\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional_2);
    printf("PIB per capita: %.0lf\n", pib_per_capita2);

    return 0;

}
