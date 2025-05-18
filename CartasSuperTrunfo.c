#include <stdio.h>

int main()
{
    int populacao_01 = 0, populacao_02 = 0;
    float area_01 = 0.0f, area_02 = 0.0f;
    float pib_01 = 0.0f, pib_02 = 0.0f;
    int pontos_01 = 0, pontos_02 = 0;
    float densidade_01 = 0.0f, densidade_02 = 0.0f;
    float pibpercap_01 = 0.0f, pibpercap_02 = 0.0f;

    printf("CADASTRO DE CARTAS\n");
    printf("CARTA 01\n\n");

    printf("População: ");
    scanf("%d", &populacao_01);

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
    scanf("%d", &populacao_02);

    printf("Area (em km2): ");
    scanf("%f", &area_02);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib_02);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_02);

    printf("\n\n");

    // calculos
    densidade_01 = populacao_01 / area_01;
    pibpercap_01 = pib_01 / (float)populacao_01;
    densidade_02 = populacao_02 / area_02;
    pibpercap_02 = pib_02 / (float)populacao_02;

    printf("CARTA 01\n\n");
    printf("População: %d\n", populacao_01);
    printf("Area: %.2f km2\n", area_01);
    printf("PIB: %.2f bilhões de reais\n", pib_01);
    printf("Número de pontos turistiscos: %d\n", pontos_01);
    printf("Densidade Populacional: %.2f\n", densidade_01);
    printf("PIB per CAPITA: %.2f\n", pibpercap_01);
    printf("\n");
    printf("CARTA 02\n\n");
    printf("População: %d\n", populacao_02);
    printf("Area: %.2f km2\n", area_02);
    printf("PIB: %.2f bilhões de reais\n", pib_02);
    printf("Número de pontos turistiscos: %d\n", pontos_02);
    printf("Densidade Populacional: %.2f\n", densidade_02);
    printf("PIB per CAPITA: %.2f\n", pibpercap_02);
    printf("\n");

    return 0;
}