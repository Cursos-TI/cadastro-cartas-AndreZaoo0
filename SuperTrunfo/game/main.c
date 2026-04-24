// include as bibliotecas necessárias
#include <stdio.h>
#include <unistd.h>
#include "card.h"
#include "operation.h"
#include "interface.h"

// função principal do programa
int main(void) { // criar as cartas dos jogadores
    const cards inputPlayer = printCard(); // carta do jogador 1

    cards card2 = createCard("Brasil", "São Paulo", "São Paulo", "SP001", 93, 248222, 12300000.0, 495.0, 2000000000.0, 162500.0); // carta do jogador 2 feita com dados fictícios para comparação

    // escolher 2 atributos para comparar
    int escolha1, escolha2;

    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - Pontos Turisticos\n");
    printf("2 - Area\n");
    printf("3 - Populacao\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB\n");
    printf("6 - PIB per Capita\n");
    scanf("%d", &escolha1); // ler as escolhas dos jogadores

    printf("Escolha o segundo atributo para comparar:\n");
    printf("1 - Pontos Turisticos\n");
    printf("2 - Area\n");
    printf("3 - Populacao\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB\n");
    printf("6 - PIB per Capita\n");
    scanf("%d", &escolha2); // ler as escolhas dos jogadores
    
    int resultado = vencedor(escolha1, escolha2); // determinar o vencedor com base nos atributos escolhidos
    if (resultado == 0) {
        printf("Empate!\n"); // caso haja empate
    } else {
        printf("Jogador %d venceu!\n", resultado == 1 ? 1 : 2); // caso haja um vencedor, indicar qual jogador venceu
    }

    getchar(); // esperar o usuário pressionar Enter antes de encerrar o programa
    
    return 0;
}
