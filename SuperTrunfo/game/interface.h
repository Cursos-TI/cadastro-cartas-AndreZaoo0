// incluir o arquivo de cabeçalho para a estrutura de dados das cartas e as funções relacionadas
#include "card.h"
#include <stdio.h>
#include <string.h>

// função para imprimir os dados da carta do jogador e retornar a carta criada
cards printCard() {
    char pais[60];
    char estado[30];
    char cidade[90];
    char codigo[6];
    int pontosTuristico;
    int populacao;
    float area;
    float densidadePopulacional;
    float pib;
    float pibPerCapita;

// solicitar ao usuário que insira os dados da carta do jogador e armazenar esses dados nas variáveis correspondentes
    printf("Digite os dados da carta:\n");

    printf("Pais: ");
    fgets(pais, sizeof(pais), stdin);
    pais[strcspn(pais, "\n")] = '\0';

    printf("Estado: ");
    fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = '\0';

    printf("Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Codigo: ");
    fgets(codigo, sizeof(codigo), stdin);
    codigo[strcspn(codigo, "\n")] = '\0';

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristico);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);


    getchar();

    // calcular a densidade populacional e o PIB per capita com base nos dados fornecidos
    densidadePopulacional = area / populacao;
    pibPerCapita = pib / populacao;

    // criar a carta do jogador usando a função createCard e os dados fornecidos
    cards cardPlayer = createCard(
        pais,
        estado,
        cidade,
        codigo,
        pontosTuristico,
        populacao,
        area,
        densidadePopulacional,
        pib,
        pibPerCapita
    );

    // retornar a carta do jogador criada
    return cardPlayer;
}