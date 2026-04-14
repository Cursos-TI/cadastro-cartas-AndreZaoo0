#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para usar as funções printf e scanf

int main(){ // Função principal do programa, onde a execução começa

    int a = 5, resultado; // Declaração e inicialização da variável a e declaração da variável resultado

    resultado = a++; // Incremento pós-fixado: o valor de a é usado antes de ser incrementado
    printf("Valor de resultado: %d\n", resultado); // Imprime o valor de resultado

    resultado = ++a; // Incremento pré-fixado: o valor de a é incrementado antes de ser usado
    printf("Valor de resultado: %d\n", resultado); // Imprime o valor de resultado
    resultado = a--; // Decremento pós-fixado: o valor de a é usado antes de ser decrementado
    printf("Valor de resultado: %d\n", resultado); // Imprime o valor de resultado
    resultado = --a; // Decremento pré-fixado: o valor de a é decrementado antes de ser usado
    printf("Valor de resultado: %d\n", resultado); // Imprime o valor de resultado

    return 0; // Encerra o programa
}