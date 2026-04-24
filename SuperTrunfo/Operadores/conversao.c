#include <stdio.h>

int main() {

    float a = 10.2; // Variável do tipo float
    int b = 10;// Variável do tipo int

    // conversão implícita: o valor de b é convertido para float antes da comparação
    printf("valor de a > b: %d\n", a > b); // Imprime 1 (verdadeiro
    printf("valor de a == b: %d\n", a == b); // Imprime 0 (falso)

    float c = 10.2; // Variável do tipo float
    int d = 10; // Variável do tipo int

    // conversão explícita: o valor de c é convertido para int antes da comparação
    printf("valor de c > d:%d\n", (int)c > d); // Imprime 1 (verdadeiro)
    printf("valor de c == d: %d\n", (int)c == d); // Imprime 0 (falso)

    return 0;


}


   
    