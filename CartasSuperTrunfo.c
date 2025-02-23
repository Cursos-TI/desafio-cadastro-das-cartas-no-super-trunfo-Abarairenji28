#include <stdio.h>
#include <locale.h>

int main() {
    // Definição das variáveis para armazenar os dados das cartas
    setlocale(LC_ALL,"Portuguese_Brazil");

    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    unsigned long int populacao1, populacao2; // Alterado para unsigned long int
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Coletando dados da primeira carta
    printf("Digite os dados da primeira carta:\n");

    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (exemplo: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", cidade1);  // Lê até o Enter

    printf("População: ");
    scanf("%lu", &populacao1);  // Alterado para unsigned long int

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Calculando a Densidade Populacional e PIB per Capita para a primeira carta
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1e9 / populacao1;  // PIB em reais

    // Calculando o Super Poder para a primeira carta
    superPoder1 = (float)populacao1 + area1 + pib1 * 1e9 + pontos1 + pibPerCapita1 + (1.0 / densidade1);

    // Coletando dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");

    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (exemplo: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);  // Alterado para unsigned long int

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Calculando a Densidade Populacional e PIB per Capita para a segunda carta
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1e9 / populacao2;  // PIB em reais

    // Calculando o Super Poder para a segunda carta
    superPoder2 = (float)populacao2 + area2 + pib2 * 1e9 + pontos2 + pibPerCapita2 + (1.0 / densidade2);

    // Exibindo os dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação dos atributos
    printf("\nComparação de Cartas:\n");

    // Comparando População
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);

    // Comparando Área
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);

    // Comparando PIB
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);

    // Comparando Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos1 > pontos2) ? 1 : 2, (pontos1 > pontos2) ? 1 : 0);

    // Comparando Densidade Populacional (quanto menor a densidade, maior o valor)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2) ? 1 : 0);

    // Comparando PIB per Capita
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, (pibPerCapita1 > pibPerCapita2) ? 1 : 0);

    // Comparando Super Poder
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2) ? 1 : 0);

    return 0;
}