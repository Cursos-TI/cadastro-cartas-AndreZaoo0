#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para usar as funções printf e scanf

int main(){ // Função principal do programa, onde a execução começa

    float nota1, nota2, nota3; // Declaração das variáveis para armazenar as notas digitadas pelo usuário
    float media; // Declaração da variável para armazenar a média calculada

    printf("Calcule sua media de notas!\n"); // Imprime uma mensagem para o usuário
    printf("Digite a primeira nota: "); // Solicita ao usuário que digite a primeira nota
    scanf("%f", &nota1); // Lê a primeira nota digitada pelo usuário e armazena na variável nota1

    printf("Digite a segunda nota: "); // Solicita ao usuário que digite a segunda nota
    scanf("%f", &nota2); // Lê a segunda nota digitada pelo usuário e armazena na variável nota2

    printf("Digite a terceira nota: "); // Solicita ao usuário que digite a terceira nota
    scanf("%f", &nota3); // Lê a terceira nota digitada pelo usuário e armazena na variável nota3

    media = (nota1 + nota2 + nota3) / 3.0; // Calcula a média das três notas e armazena na variável media

    printf("A media das suas notas é: %.1f\n", media); // Imprime a média calculada com uma casa decimal

    return 0; // Encerra o programa

}