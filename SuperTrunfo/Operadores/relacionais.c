#include <stdio.h>

int main(){

    int a = 5;
    float b = 5.0;
    char c = 'A';

    printf("a > b: %d\n", a > b); // Imprime 0 (falso)
    printf("a < b: %d\n", a < b); // Imprime 1 (verdadeiro)
    printf("a >= b: %d\n", a >= b); // Imprime 0 (falso)
    printf("a <= b: %d\n", a <= b); // Imprime 1 (verdadeiro)
    printf("a == b: %d\n", a == b); // Imprime 0 (falso)
    printf("a != b: %d\n", a != b); // Imprime 1 (verdadeiro)

    printf("a >= c: %d\n", a >= c); // Imprime 1 (verdadeiro)
    printf("O valor na tabela ASCII de %c é: %d\n", c, c);


    return 0;
}