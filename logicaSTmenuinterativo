#include <stdio.h>
#include <string.h>


typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica; 
} Carta;

int main() {
    // Cadastro de duas cartas fixas
    Carta A01 = {"Minas Gerais", 358000000, 8574624, 2.1, 12, 456000000.0 / 935842.0};
    Carta B02 = {"São Paulo", 247000000, 479852, 4.9, 14, 356000000.0 / 498756.0};

    int opcao;
    printf("=== SUPER TRUNFO - Nível Aventureiro ===\n");
    printf("Comparando: %s x %s\n\n", A01.nome, B02.nome);

    // Menu interativo
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Switch para escolher atributo
    switch(opcao) {
        case 1: 
            printf("\nComparando População:\n");
            printf("%s: %d | %s: %d\n", A01.nome, A01.populacao, B02.nome, B02.populacao);
            if (A01.populacao > B02.populacao)
                printf("Vencedor: %s\n", A01.nome);
            else if (A01.populacao < B02.populacao)
                printf("Vencedor: %s\n", B02.nome);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("\nComparando Área:\n");
            printf("%s: %.2f km² | %s: %.2f km²\n", A01.nome, A01.area, B02.nome, B02.area);
            if (A01.area > B02.area)
                printf("Vencedor: %s\n", A01.nome);
            else if (A01.area < B02.area)
                printf("Vencedor: %s\n", B02.nome);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("\nComparando PIB (em trilhões US$):\n");
            printf("%s: %.2f | %s: %.2f\n", A01.nome, A01.pib, B02.nome, B02.pib);
            if (A01.pib > B02.pib)
                printf("Vencedor: %s\n", A01.nome);
            else if (A01.pib < B02.pib)
                printf("Vencedor: %s\n", B02.nome);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("\nComparando Pontos Turísticos:\n");
            printf("%s: %d | %s: %d\n", A01.nome, A01.pontosTuristicos, B02.nome, B02.pontosTuristicos);
            if (A01.pontosTuristicos > B02.pontosTuristicos)
                printf("Vencedor: %s\n", A01.nome);
            else if (A01.pontosTuristicos < B02.pontosTuristicos)
                printf("Vencedor: %s\n", B02.nome);
            else
                printf("Empate!\n");
            break;

        case 5: 
            printf("\nComparando Densidade Demográfica (hab/km²):\n");
            printf("%s: %.2f | %s: %.2f\n", A01.nome, A01.densidadeDemografica, B02.nome, B02.densidadeDemografica);
            if (A01.densidadeDemografica < B02.densidadeDemografica)
                printf("Vencedor: %s\n", A01.nome);
            else if (A01.densidadeDemografica > B02.densidadeDemografica)
                printf("Vencedor: %s\n", B02.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("\nOpção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}    