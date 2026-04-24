#include <stdio.h>
 
int main() {
    int numeroComSinal = 3000000000; // Este valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000;
 
    printf("Número com sinal: %d\n", numeroComSinal); // Pode imprimir um valor negativo devido ao estouro de inteiro   
    printf("Número sem sinal: %u\n", numeroSemSinal); // Imprime o valor correto, pois é tratado como um número sem sinal
 
    return 0;
}