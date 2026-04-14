#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para usar as funções printf e scanf

int main(){ // Função principal do programa, onde a execução começa

    int a = 5; // Declaração e inicialização da variável a  

    
    printf("Valor inicial de a: %d\n", a); // Imprime o valor inicial de a
    a++; // Incremento pós-fixado: o valor de a é usado antes de ser incrementado
    printf("Valor de a após a++: %d\n", a); // Imprime o valor de a após o incremento

    a--; // Decremento pós-fixado: o valor de a é usado antes de ser decrementado
    printf("Valor de a após a--: %d\n", a); // Imprime o valor de a após o decremento

    return 0; // Encerra o programa
}
