#include <stdio.h>

int main(){

    char produtoA[100] = "Miójos"; // Variável para armazenar o nome do produto A
    char produtoB[100] = "Cueca-Cuelas"; // Variável para armazenar o nome do produto B

    unsigned int quantidadeA = 1000; // Variável para armazenar a quantidade em estoque do produto A
    unsigned int quantidadeB = 2000; // Variável para armazenar a quantidade em estoque do produto B

    float valorA = 10.50; // Variável para armazenar o valor unitário do produto A
    float valorB = 20.75; // Variável para armazenar o valor unitário do produto B

    unsigned int estoqueMinimoA = 500; // Variável para armazenar o estoque mínimo do produto A
    unsigned int estoqueMinimoB = 2500; // Variável para armazenar o estoque mínimo do produto B

    double valorTotalA = quantidadeA * valorA; // Variável para armazenar o valor total em estoque do produto A, calculado multiplicando a quantidade pelo valor unitário
    double valorTotalB = quantidadeB * valorB; // Variável para armazenar o valor total em estoque do produto B, calculado multiplicando a quantidade pelo valor unitário

    int resultadoA, resultadoB; // Variáveis para armazenar os resultados da comparação entre a quantidade em estoque e o estoque mínimo de cada produto

    // exibindo as informações dos produtos
    printf("Produto: %s\n", produtoA);
    printf("Quantidade em estoque: %u\n", quantidadeA);
    printf("Valor unitário: R$ %.2f\n", valorA);
    printf("Valor total em estoque: R$ %.2f\n", valorTotalA);
    printf("Estoque mínimo: %u\n", estoqueMinimoA);

    printf("\nProduto: %s\n", produtoB);
    printf("Quantidade em estoque: %u\n", quantidadeB);
    printf("Valor unitário: R$ %.2f\n", valorB);
    printf("Valor total em estoque: R$ %.2f\n", valorTotalB);
    printf("Estoque mínimo: %u\n", estoqueMinimoB);

    // comparando a quantidade em estoque com o estoque mínimo para o produto A
    resultadoA = quantidadeA > estoqueMinimoA; // A variável resultadoA recebe o valor 1 (verdadeiro) se a quantidade em estoque for maior que o estoque mínimo, ou 0 (falso) caso contrário
    printf("\nO produto %s tem estoque suficiente? %d\n", produtoA, resultadoA); // Exibe se o produto A tem estoque suficiente, mostrando o valor de resultadoA

    // comparando a quantidade em estoque com o estoque mínimo para o produto B
    resultadoB = quantidadeB > estoqueMinimoB; // A variável resultadoB recebe o valor 1 (verdadeiro) se a quantidade em estoque for maior que o estoque mínimo, ou 0 (falso) caso contrário
    printf("O produto %s tem estoque suficiente? %d\n", produtoB, resultadoB); // Exibe se o produto B tem estoque suficiente, mostrando o valor de resultadoB

    // comparando o valor total em estoque dos produtos A e B
    printf("\nO valor total em estoque do produto %s é maior que o do produto %s? %d\n", produtoA, valorTotalA, produtoB, valorTotalB, valorTotalA > valorTotalB); // Exibe se o valor total em estoque do produto A é maior que o do produto B, mostrando o resultado da comparação

    return 0;
}