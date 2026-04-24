// arquivo de definição das operações do jogo, incluindo a função para determinar o vencedor com base nas escolhas dos jogadores
#define OPERATION_C
#include <stdio.h>
#include "card.h"

    int vencedor (int escolha1, int escolha2){
        return (escolha1 == escolha2) ? 0 : (escolha1 > escolha2 ? 1 : 2);
        // função para determinar o vencedor com base nas escolhas dos jogadores, comparando os atributos escolhidos e retornando o resultado da comparaçãos
    }

    