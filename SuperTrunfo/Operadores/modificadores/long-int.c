#include <stdio.h>
 
int main() {
    int numeroNormal = 2147483647; // Valor máximo de int
    long int numeroGrande = 2147483647; // Valor máximo de long int, que é o mesmo que int em muitos sistemas
 
    printf("Número regular (int): %d\n", numeroNormal); // Imprime o valor máximo de int
    printf("Número grande (long int): %ld\n", numeroGrande); // Imprime o valor máximo de long int, que é o mesmo que int em muitos sistemas
 
    numeroGrande = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", numeroGrande); // Imprime o valor atualizado de numeroGrande, que pode causar um comportamento indefinido em sistemas onde long int é igual a int
 
    return 0;
}