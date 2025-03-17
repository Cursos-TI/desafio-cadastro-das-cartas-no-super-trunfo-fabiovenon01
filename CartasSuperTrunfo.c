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
        float area1, pib1;
        char nome1[30];
        char codigo1[10];
    
        // Cidade 2
        int populacao2, pontosTuristicos2;
        float area2, pib2;
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

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    // dados da cidade 1
    printf("\nDados da cidade 1:\n");
    printf("Codigo da Cidade: %s\n", codigo1);
    printf("Nome da Cidade: %s/n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);

    // dados da cidade 2
    printf("\nDados da cidade 2:\n");
    printf("Codigo da Cidade: %s\n", codigo2);
    printf("Nome da Cidade: %s/n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
