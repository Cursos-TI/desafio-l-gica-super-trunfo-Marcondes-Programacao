#include <stdio.h>

int main() {
    
    // Cadastro da Carta 1
    char estado1[3] = "MG";
    char codigo1[5] = "A01";
    char nome1[20] = "Juiz de Fora";
    int populacao1 = 15600000;
    float area1 = 2698.21;
    float pib1 = 632000000000.0;
    int pontos1 = 8;

    // Cadastro da Carta 2
    char estado2[3] = "SP";
    char codigo2[5] = "B02";
    char nome2[20] = "Guarulhos";
    int populacao2 = 8321000;
    float area2 = 1799.20;
    float pib2 = 356000000000.0;
    int pontos2 = 9;

    // Calcular população / área
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Calcular PIB per capita / população)
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    
    printf("Comparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n\n", nome2, estado2, populacao2);

    // Comparação: maior população vence
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

