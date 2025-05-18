#include <stdio.h>

int main()
{
    unsigned long int populacao_01 = 0, populacao_02 = 0;
    float area_01 = 0.0f, area_02 = 0.0f;
    float pib_01 = 0.0f, pib_02 = 0.0f;
    int pontos_01 = 0, pontos_02 = 0;
    float densidade_01 = 0.0f, densidade_02 = 0.0f;
    float pibpercap_01 = 0.0f, pibpercap_02 = 0.0f;
    float super_poder_01 = 0.0f, super_poder_02 = 0.0f;
    int venceu;

    printf("CADASTRO DE CARTAS\n");
    printf("CARTA 01\n\n");

    printf("População: ");
    scanf("%lu", &populacao_01);

    printf("Area (em km2): ");
    scanf("%f", &area_01);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib_01);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_01);

    // prompts para as cartas 02
    printf("\n");
    printf("CARTA 02\n");

    printf("População: ");
    scanf("%lu", &populacao_02);

    printf("Area (em km2): ");
    scanf("%f", &area_02);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib_02);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_02);

    printf("\n\n");

    // Calculos
    densidade_01 = (area_01 > 0) ? (float)populacao_01 / area_01 : 0.0f; // Evitar divisão por zero
    pibpercap_01 = (populacao_01 > 0) ? pib_01 / (float)populacao_01 : 0.0f; // Evitar divisão por zero
    densidade_02 = (area_02 > 0) ? (float)populacao_02 / area_02 : 0.0f;
    pibpercap_02 = (populacao_02 > 0) ? pib_02 / (float)populacao_02 : 0.0f;

    // Calculo do Super Poder
    float inv_densidade_01 = (densidade_01 > 0) ? 1.0f / densidade_01 : 0.0f;
    float inv_densidade_02 = (densidade_02 > 0) ? 1.0f / densidade_02 : 0.0f;

    super_poder_01 = (float)populacao_01 + area_01 + pib_01 + (float)pontos_01 + densidade_01 + pibpercap_01 + inv_densidade_01;
    super_poder_02 = (float)populacao_02 + area_02 + pib_02 + (float)pontos_02 + densidade_02 + pibpercap_02 + inv_densidade_02;

    // Saída dos dados das cartas
    printf("DADOS DAS CARTAS:\n\n");
    printf("CARTA 01:\n");
    printf("População: %lu\n", populacao_01);
    printf("Area: %.2f km2\n", area_01);
    printf("PIB: %.2f bilhões de reais\n", pib_01);
    printf("Número de pontos turísticos: %d\n", pontos_01);
    printf("Densidade Populacional: %.2f\n", densidade_01);
    printf("PIB per CAPITA: %.2f\n", pibpercap_01);
    printf("Super Poder: %.2f\n\n", super_poder_01);

    printf("CARTA 02:\n");
    printf("População: %lu\n", populacao_02);
    printf("Area: %.2f km2\n", area_02);
    printf("PIB: %.2f bilhões de reais\n", pib_02);
    printf("Número de pontos turísticos: %d\n", pontos_02);
    printf("Densidade Populacional: %.2f\n", densidade_02);
    printf("PIB per CAPITA: %.2f\n", pibpercap_02);
    printf("Super Poder: %.2f\n\n", super_poder_02);

    // Comparação de Atributos
    printf("COMPARAÇÃO DE CARTAS:\n\n");

    venceu = populacao_01 > populacao_02;
    printf("População: Carta %d venceu (%d)\n", venceu ? 1 : 2, venceu);

    venceu = area_01 > area_02;
    printf("Área: Carta %d venceu (%d)\n", venceu ? 1 : 2, venceu);

    venceu = pib_01 > pib_02;
    printf("PIB: Carta %d venceu (%d)\n", venceu ? 1 : 2, venceu);

    venceu = pontos_01 > pontos_02;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", venceu ? 1 : 2, venceu);

    venceu = densidade_01 < densidade_02;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", venceu ? 1 : 2, venceu);

    venceu = pibpercap_01 > pibpercap_02;
    printf("PIB per Capita: Carta %d venceu (%d)\n", venceu ? 1 : 2, venceu);

    venceu = super_poder_01 > super_poder_02;
    printf("Super Poder: Carta %d venceu (%d)\n", venceu ? 1 : 2, venceu);

    return 0;
}