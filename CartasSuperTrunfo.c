#include <stdio.h>
#include <locale.h>


int main() {

    setlocale(LC_ALL,"Portugueze_Brazil");
    // Declarando as variáveis
    char estado;
    char nome_da_cidade[20];
    char codigo_da_carta[5];
    double populacao, area, pib;
    float densidadePopulacional, PIB_per_capita;
    int pontosTuristicos;

    // Solicitando dados para cadastrar as cartas
    printf("Bem-vindo ao desafio Super Trunfo - Paises!\n");

    printf("Digite o estado (letra de A a H):\n");
    scanf(" %c", &estado);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_da_cidade);

    printf("Digite o codigo da carta (ex: A01, A02, B01):\n");
    scanf("%s", codigo_da_carta);

    printf("Digite a populacao:\n");
    scanf("%lf", &populacao);

    printf("Digite a area da cidade:\n");
    scanf("%lf", &area);

    printf("Digite o PIB da cidade:\n");
    scanf("%lf", &pib);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos);

    // Cálculo das métricas solicitadas
    densidadePopulacional = (float)(populacao / area); // População por km²
    PIB_per_capita = (float)(pib / populacao); // PIB médio por pessoa

    // Exibindo os resultados
    printf("\n===== Dados da Carta Cadastrada =====\n");
    printf("Estado: %c\n", estado);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("Codigo da Carta: %s\n", codigo_da_carta);
    printf("População: %.0f habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("PIB per Capita: %.2f\n", PIB_per_capita);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);
    printf("=====================================\n");

    return 0;
}