#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
int main(){ 
    printf("Desfio Super Trunfo! \nNivel: Básico\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codigo_cidade1[4];
    char nome_cidade1[50];
    int populacao_cidade1;
    float area_cidade1;
    float pib_cidade1;
    int numero_pontos_Turisticos_cidade1;
    char codigo_carta1[4];

    char codigo_cidade2[4];
    char nome_cidade2[50];
    int populacao_cidade2;
    float area_cidade2;
    float pib_cidade2;
    int numero_pontos_Turisticos_cidade2;
    char codigo_carta2[4];


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.



    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao_cidade1);

    printf("Digite a area: ");
    scanf("%f", &area_cidade1);

    printf("Digite o PIB: ");
    scanf("%f", &pib_cidade1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numero_pontos_Turisticos_cidade1);

    



    printf("\nCadastro da Carta 2\n");

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao_cidade2);

    printf("Digite a area: ");
    scanf("%f", &area_cidade2);

    printf("Digite o PIB: ");
    scanf("%f", &pib_cidade2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &numero_pontos_Turisticos_cidade2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1\n");
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao: %d\n", populacao_cidade1);
    printf("Area: %.2f km²\n", area_cidade1);
    printf("PIB: %.2f bilhoes de reais\n", pib_cidade1);
    printf("Numero de Pontos Turisticos: %d\n", numero_pontos_Turisticos_cidade1);

    printf("\nCarta 2\n");
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao_cidade2);
    printf("Area: %.2f km²\n", area_cidade2);
    printf("PIB: %.2f bilhoes de reais\n", pib_cidade2);
    printf("Numero de Pontos Turisticos: %d\n", numero_pontos_Turisticos_cidade2);

    return 0;
}
