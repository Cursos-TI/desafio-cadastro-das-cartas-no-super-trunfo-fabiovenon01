#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

        // Cidade 1
        int populacao1, pontosTuristicos1;
        float area1, pib1, densidadePopulacional1, pibPerCapita1; // acrescentado densidadePopulacional1, pibPerCapita1;
        char nome1[30];
        char codigo1[10];
    
        // Cidade 2
        int populacao2, pontosTuristicos2;
        float area2, pib2, densidadePopulacional2, pibPerCapita2; // acrescentado densidadePopulacional2, pibPerCapita2;
        char nome2[30];
        char codigo2[10];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

        // Cadastro da cidade 1
    printf("Cadastro da cidade 1:\n");
    printf("Digite o Codigo da Cidade: ");
    scanf("%s", codigo1);
    printf("Digite o nome da Cidade: ");
    scanf("%s", nome1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da cidade 2
    printf("\nCadastro da cidade 2:\n");
    printf("Digite o Codigo da Cidade: ");
    scanf("%s", codigo2);
    printf("Digite o nome da Cidade: ");
    scanf("%s", nome2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para a cidade 1
    densidadePopulacional1 = populacao1 / area1;  // Densidade populacional
    pib1 *= 1e9;  // Convertendo PIB para reais (1 bilhão = 1e9) representa o número 1 seguido por 9 zeros // metodo visto no youtube e no site https://stackoverflow.com/questions/12134345/1e-9-or-1e9-which-one-is-correct
    pibPerCapita1 = pib1 / populacao1;  // PIB per capita

    // Cálculos para a cidade 2
    densidadePopulacional2 = populacao2 / area2;  // Densidade populacional
    pib2 *= 1e9;  // Convertendo PIB para reais (1 bilhão = 1e9) representa o número 1 seguido por 9 zeros // metodo visto no youtube e no site https://stackoverflow.com/questions/12134345/1e-9-or-1e9-which-one-is-correct
    pibPerCapita2 = pib2 / populacao2;  // PIB per capita      

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    // dados da cidade 1
    printf("\nDados da cidade 1:\n");
    printf("Codigo da Cidade: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);  // corrigido \n estava errado a barra: /f
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km\n", area1);  // coloquei km depois de %.2f
    printf("PIB: %.2f bilhões de reais\n", pib1 / 1e9);  // Mostra o PIB em bilhões, metodo pego no youtube (representa o número 1 seguido por 9 zeros)
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f de reais\n", pibPerCapita1);

    // dados da cidade 2
    printf("\nDados da cidade 2:\n");
    printf("Codigo da Cidade: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);  // corrigido \n estava errado a barra: /
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km\n", area2);  // coloquei km depois de %.2f
    printf("PIB: %.2f bilhões de reais\n", pib2 / 1e9);  // Mostra o PIB em bilhões , metodo pego no youtube
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f de reais\n", pibPerCapita2);
    
    return 0;
}
