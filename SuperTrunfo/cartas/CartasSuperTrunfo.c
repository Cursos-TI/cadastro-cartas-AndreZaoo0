#include <stdio.h> // Incluindo a biblioteca padrão de entrada e saída

int main() { // Função principal do programa

    char paiscarta1[100]; // Variável para armazenar o nome do país da carta 1
    char codigocarta1[10]; // Variável para armazenar o código da carta 1
    char estadocarta1[100]; // Variável para armazenar o nome do estado da carta 1
    char cidadecarta1[100]; // Variável para armazenar o nome da cidade da carta 1
    int pontosturisticoscarta1;
    double populacaocarta1;
    double areacarta1;
    double pibcarta1;
    double densidadecarta1;
    double pibpercapitacarta1;


    char paiscarta2[100]; // Variável para armazenar o nome do país da carta 2
    char codigocarta2[10]; // Variável para armazenar o código da carta 2
    char estadocarta2[100]; // Variável para armazenar o nome do estado da carta 2
    char cidadecarta2[100]; // Variável para armazenar o nome da cidade da carta 2
    int pontosturisticoscarta2;
    double populacaocarta2;
    double areacarta2;
    double pibcarta2; 
    double densidadecarta2;
    double pibpercapitacarta2;


    printf("Cadasro da Carta 1:\n"); // Imprimindo o título do cadastro da carta 1
    printf("Digite o nome do país da carta 1:\n"); // Solicitando ao usuário que digite o nome do país da carta 1
    scanf("%s", paiscarta1); // Lendo o nome do país da carta 1 e armazenando na variável paiscarta1
    printf("Digite o código da carta 1:\n"); // Solicitando ao usuário que digite o código da carta 1
    scanf("%s", codigocarta1); // Lendo o código da carta 1 e armazenando na variável codigocarta1
    printf("Digite o nome do estado da carta 1:\n"); // Solicitando ao usuário que digite o nome do estado da carta 1
    scanf("%s", estadocarta1); // Lendo o nome do estado da carta 1 e armazenando na variável estadocarta1
    printf("Digite o nome da cidade da carta 1:\n"); // Solicitando ao usuário que digite o nome da cidade da carta 1
    scanf("%s", cidadecarta1); // Lendo o nome da cidade da carta 1 e armazenando na variável cidadecarta1
    printf("Digite o número de pontos turísticos da carta 1:\n"); // Solicitando ao usuário que digite o número de pontos turísticos da carta 1
    scanf("%d", &pontosturisticoscarta1); // Lendo o número de pontos turísticos da carta 1 e armazenando na variável pontosturisticoscarta1
    printf("Digite a população da carta 1:\n"); // Solicitando ao usuário que digite a população da carta 1
    scanf("%lf", &populacaocarta1); // Lendo a população da carta 1 e armazenando na variável populacaocarta1
    printf("Digite a área da carta 1 em km²:\n"); // Solicitando ao usuário que digite a área da carta 1 em km²
    scanf("%lf", &areacarta1); // Lendo a área da carta 1 e armazenando na variável areacarta1
    printf("Digite o PIB da carta 1:\n"); // Solicitando ao usuário que digite o PIB da carta 1
    scanf("%lf", &pibcarta1); // Lendo o PIB da carta 1 e armazenando na variável pibcarta1

    densidadecarta1 = populacaocarta1 / areacarta1; // Calculando a densidade da carta 1 dividindo a população pela área
    pibpercapitacarta1 = pibcarta1 / populacaocarta1; // Calculando o PIB per capita da carta 1 dividindo o PIB pela população


    printf("Cadasro da Carta 2:\n"); // Imprimindo o título do cadastro da carta 2
    printf("Digite o nome do país da carta 2:\n"); // Solicitando ao usuário que digite o nome do país da carta 2
    scanf("%s", paiscarta2); // Lendo o nome do país da carta 2 e armazenando na variável paiscarta2
    printf("Digite o código da carta 2:\n"); // Solicitando ao usuário que digite o código da carta 2
    scanf("%s", codigocarta2); // Lendo o código da carta 2 e armazenando na variável codigocarta2
    printf("Digite o nome do estado da carta 2:\n"); // Solicitando ao usuário que digite o nome do estado da carta 2
    scanf("%s", estadocarta2); // Lendo o nome do estado da carta 2 e armazenando na variável estadocarta2
    printf("Digite o nome da cidade da carta 2:\n"); // Solicitando ao usuário que digite o nome da cidade da carta 2
    scanf("%s", cidadecarta2); // Lendo o nome da cidade da carta 2 e armazenando na variável cidadecarta2
    printf("Digite o número de pontos turísticos da carta 2:\n"); // Solicitando ao usuário que digite o número de pontos turísticos da carta 2
    scanf("%d", &pontosturisticoscarta2); // Lendo o número de pontos turísticos da carta 2 e armazenando na variável pontosturisticoscarta2
    printf("Digite a população da carta 2:\n"); // Solicitando ao usuário que digite a população da carta 2
    scanf("%lf", &populacaocarta2); // Lendo a população da carta 2 e armazenando na variável populacaocarta2
    printf("Digite a área da carta 2 em km²:\n"); // Solicitando ao usuário que digite a área da carta 2 em km²
    scanf("%lf", &areacarta2); // Lendo a área da carta 2 e armazenando na variável areacarta2
    printf("Digite o PIB da carta 2:\n"); // Solicitando ao usuário que digite o PIB da carta 2
    scanf("%lf", &pibcarta2); // Lendo o PIB da carta 2 e armazenando na variável pibcarta2

    densidadecarta2 = populacaocarta2 / areacarta2; // Calculando a densidade da carta 2 dividindo a população pela área
    pibpercapitacarta2 = pibcarta2 / populacaocarta2; // Calculando o PIB per capita da carta 2 dividindo o PIB pela população

    // Mostrar Carta 1
    printf("\nCarta 1:\n");
    printf("País: %s\n", paiscarta1);
    printf("Código: %s\n", codigocarta1);
    printf("Estado: %s\n", estadocarta1);
    printf("Cidade: %s\n", cidadecarta1);
    printf("Pontos Turísticos: %d\n", pontosturisticoscarta1);
    printf("População: %.2lf\n", populacaocarta1);
    printf("Área (km²): %.2lf\n", areacarta1);
    printf("PIB: %.2lf\n", pibcarta1);
    printf("Densidade: %.2lf habitantes/km²\n", densidadecarta1);
    printf("PIB per capita: %.2lf\n", pibpercapitacarta1);

    // Mostrar Carta 2
    printf("\nCarta 2:\n");
    printf("País: %s\n", paiscarta2);
    printf("Código: %s\n", codigocarta2);
    printf("Estado: %s\n", estadocarta2);
    printf("Cidade: %s\n", cidadecarta2);
    printf("Pontos Turísticos: %d\n", pontosturisticoscarta2);
    printf("População: %.2lf\n", populacaocarta2);
    printf("Área (km²): %.2lf\n", areacarta2);
    printf("PIB: %.2lf\n", pibcarta2);
    printf("Densidade: %.2lf habitantes/km²\n", densidadecarta2);


    return 0;

}