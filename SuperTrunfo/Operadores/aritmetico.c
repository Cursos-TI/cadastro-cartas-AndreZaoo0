#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para usar as funções printf e scanf

int main() { // Função principal do programa, onde a execução começa

    int a, b; // Declaração das variáveis para armazenar os números inseridos pelo usuário
    int soma, subtracao, multiplicacao, divisao; // Declaração das variáveis para armazenar os resultados das operações

    printf("Digite o primeiro número:\n"); // Solicita ao usuário que digite o primeiro número
    scanf("%d", &a); // Lê o primeiro número digitado pelo usuário e armazena na variável a
    printf("Digite o segundo número:\n"); // Solicita ao usuário que digite o segundo número
    scanf("%d", &b); // Lê o segundo número digitado pelo usuário e armazena na variável b

    if (b == 0) { // Verifica se o segundo número é zero para evitar divisão por zero
        printf("Erro: Divisão por zero não é permitida.\n"); // Imprime uma mensagem de erro caso o segundo número seja zero
        return 1; // Encerra o programa com código de erro
    }

    // Operações matemáticas
    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;

    // Exibindo os resultados
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);

    return 0; // Encerra o programa 

}