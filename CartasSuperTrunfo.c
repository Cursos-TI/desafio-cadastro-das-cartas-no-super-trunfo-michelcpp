#include <stdio.h>

int main()
{
    int populacao_01, populacao_02 = {0};    // numero de habitantes da carta 01 e da carta 02
    float area_01, area_02 = 0.0;            // area em m2 da carta 01 e da carta 02
    float pib_01, pib_02 = 0.0;              // produto interno bruto da carta 01 e da carta 02
    int pontos_01, pontos_02 = {0};          // pontos turisticos da carta 01 e da carta 02
    float densidade_01, densidade_02 = 0.0;  // densidade populacional
    float pibpercap_01, pibpercap_02 = 0.0;  // pib per capita

    printf("CADASTRO DE CARTAS\n");
    printf("CARTA 01\n\n");
    
    printf("População: ");
    scanf("%d", &populacao_01);

    printf("Area: ");
    scanf("%f", &area_01);

    printf("PIB: ");
    scanf("%f", &pib_01);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_01);

    // prompts para as cartas 02
    printf("\n");
    printf("CARTA 02\n");
    
    printf("População: ");
    scanf("%d", &populacao_02);

    printf("Area: ");
    scanf("%f", &area_02);

    printf("PIB: ");
    scanf("%f", &pib_02);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_02);

    printf("\n\n");

    // calculos
    densidade_01 = populacao_01 / area_01; // calculo da densidade populacional
    pibpercap_01 = pib_01 / populacao_01; // calculo do pib per capita
    densidade_02 = populacao_02 / area_02; // calculo da densidade populacional
    pibpercap_02 = pib_02 / populacao_02; // calculo do pib per capita

    printf("CARTA 01\n\n");
    printf("População: %d\n", populacao_01);
    printf("Area: %.2f km2\n", area_01);
    printf("PIB: %.2f bilhões de reais\n", pib_01);
    printf("Número de pontos turistiscos: %d\n", pontos_01);
    printf("Densidade Populacional: %.2f\n", densidade_01);
    printf("PIB per CAPITA: %f\n", pibpercap_01);
    printf("\n");
    printf("CARTA 02\n\n");
    printf("População: %d\n", populacao_02);
    printf("Area: %.2f km2\n", area_02);
    printf("PIB: %.2f bilhões de reais\n", pib_02);
    printf("Número de pontos turistiscos: %d\n", pontos_02);
    printf("Densidade Populacional: %.2f\n", densidade_02);
    printf("PIB per CAPITA: %f\n", pibpercap_02);
    printf("\n");
    
    return 0;
}
