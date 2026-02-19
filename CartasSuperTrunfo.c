#include <stdio.h>

// #include <stdio.h>
#include <string.h>

#define TOTAL_CARTAS 32

/* =========================
   Estrutura da carta
========================= */
struct Carta {
    char codigo[4];          // Ex: A01
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {

    struct Carta cartas[TOTAL_CARTAS];
    int i;

    printf("=== Cadastro de Cartas - Super Trunfo (Paises) ===\n\n");

    /* =========================
       Cadastro das cartas
    ========================= */
    for (i = 0; i < TOTAL_CARTAS; i++) {
        printf("Carta %d\n", i + 1);

        printf("Codigo (ex: A01): ");
        scanf("%s", cartas[i].codigo);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", cartas[i].cidade);

        printf("Populacao: ");
        scanf("%d", &cartas[i].populacao);

        printf("Area (km2): ");
        scanf("%f", &cartas[i].area);

        printf("PIB: ");
        scanf("%f", &cartas[i].pib);

        printf("Numero de pontos turisticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);

        printf("\n");
    }

    /* =========================
       Exibicao das cartas
    ========================= */
    printf("\n=== Cartas Cadastradas ===\n\n");

    for (i = 0; i < TOTAL_CARTAS; i++) {
        printf("Carta %d\n", i + 1);
        printf("Codigo: %s\n", cartas[i].codigo);
        printf("Cidade: %s\n", cartas[i].cidade);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area: %.2f km2\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("Pontos Turisticos: %d\n", cartas[i].pontosTuristicos);
        printf("-----------------------------\n");
    }

    return 0;
}

