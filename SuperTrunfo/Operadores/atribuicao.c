#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para usar as funções printf e scanf

int main(){ // Função principal do programa, onde a execução começa

    int a = 3, b = 7, resultado;

    resultado = 10; // Atribuição de valor a variável resultado
    printf("Valor inicial de resultado: %d\n", resultado);

    resultado += 5; // Atribuição composta de adição (resultado = resultado + 5)
    printf("Valor após += 5: %d\n", resultado);

    resultado -= a; // Atribuição composta de subtração (resultado = resultado - 3)
    printf("Valor após -= 3: %d\n", resultado);

    resultado *= b; // Atribuição composta de multiplicação (resultado = resultado * 7)
    printf("Valor após *= 7: %d\n", resultado);

    resultado /= 2; // Atribuição composta de divisão (resultado = resultado / 2)
    printf("Valor após /= 2: %d\n", resultado); 

    resultado %= 4; // Atribuição composta de módulo (resultado = resultado % 4)
    printf("Valor após %%= 4: %d\n", resultado);

    return 0; // Encerra o programa

}