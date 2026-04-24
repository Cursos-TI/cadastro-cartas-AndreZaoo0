// arquivo de definição da estrutura de dados para as cartas do jogo
#ifndef CARDS_H 
#define CARDS_H

// incluir as bibliotecas necessárias
#include <stdio.h>
#include <string.h>

// definição da estrutura de dados para as cartas do jogo
typedef struct {
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
} cards;

// função para criar uma nova carta com os dados fornecidos
static inline cards createCard(
    const char *pais,
    const char *estado,
    const char *cidade,
    const char *codigo,
    int pontosTuristico,
    int populacao,
    float area,
    float densidadePopulacional,
    float pib,
    float pibPerCapita
) {
// criar uma nova carta e preencher os campos com os dados fornecidos, garantindo que as strings sejam corretamente terminadas e que os valores numéricos sejam atribuídos corretamente
    cards newCard;

    strncpy(newCard.pais, pais, sizeof(newCard.pais) - 1);
    newCard.pais[sizeof(newCard.pais) - 1] = '\0'; // garantir que a string seja terminada corretamente 
    strncpy(newCard.estado, estado, sizeof(newCard.estado) - 1);
    newCard.estado[sizeof(newCard.estado) - 1] = '\0'; 

    strncpy(newCard.cidade, cidade, sizeof(newCard.cidade) - 1);
    newCard.cidade[sizeof(newCard.cidade) - 1] = '\0';

    strncpy(newCard.codigo, codigo, sizeof(newCard.codigo) - 1);
    newCard.codigo[sizeof(newCard.codigo) - 1] = '\0';

    // atribuir os valores numéricos aos campos correspondentes da carta    
    newCard.pontosTuristico = pontosTuristico; 
    newCard.populacao = populacao;
    newCard.area = area;
    newCard.densidadePopulacional = densidadePopulacional;
    newCard.pib = pib;
    newCard.pibPerCapita = pibPerCapita;

    // imprimir os dados da carta para verificação
    printf("Pais: %s\n", newCard.pais);
    printf("Estado: %s\n", newCard.estado);
    printf("Cidade: %s\n", newCard.cidade);
    printf("Codigo: %s\n", newCard.codigo);
    printf("Pontos Turisticos: %d\n", newCard.pontosTuristico);
    printf("Populacao: %d\n", newCard.populacao);
    printf("Area: %.2f\n", newCard.area);
    printf("Densidade Populacional: %.2f\n", newCard.densidadePopulacional);
    printf("PIB: %.2f\n", newCard.pib);
    printf("PIB per Capita: %.2f\n", newCard.pibPerCapita);

    // retornar a nova carta criada
    return newCard;
}
// fim do arquivo de definição da estrutura de dados para as cartas do jogo
#endif