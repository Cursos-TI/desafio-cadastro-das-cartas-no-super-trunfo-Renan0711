#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

typedef struct {
    char estado;
    char codigoCarta[20];
    char nomeCidade[50];
    unsigned long int populacao;
    float area, pib;
    int pontosTuristicos;
} CartaSuperTrunfo;

// Função para calcular a densidade populacional
float calculardensidadePopulacional(CartaSuperTrunfo c) {
    return c.populacao / c.area;
}

// Função para calcular o PIB per capita
float calcularpibPerCapita(CartaSuperTrunfo c) {
    return c.pib / c.populacao;
}

// Função para calcular o super poder
float calcularsuperPoder(CartaSuperTrunfo c) {
    float densidadePopulacional = calculardensidadePopulacional(c);
    float pibPerCapita = calcularpibPerCapita(c);
    return c.populacao + c.area + c.pib + c.pontosTuristicos + pibPerCapita + (1 / densidadePopulacional);
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

   CartaSuperTrunfo carta1, carta2;

    // Cadastro das carta 1 e Carta 2
    printf("Insira os dados da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código: ");
    scanf("%s", &carta1.codigoCarta);

    printf("Nome da Cidade: ");
    getchar();
    fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin); 

    printf("População: ");
    scanf("%lu", &carta1.populacao);

    printf("Área: ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\nInsira os dados da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código: ");
    scanf("%s", &carta2.codigoCarta);

    printf("Nome da Cidade: ");
    getchar();
    fgets(carta2.nomeCidade, sizeof(carta2.nomeCidade), stdin); 

    printf("População: ");
    scanf("%lu", &carta2.populacao);

    printf("Área: ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    
    // Exibindo os dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigoCarta);
    printf("Nome da Cidade: %s", carta1.nomeCidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", calculardensidadePopulacional(carta1));
    printf("PIB per Capita: %.2f reais\n", calcularpibPerCapita(carta1));
    printf("Super Poder: %.2f\n", calcularsuperPoder(carta1));      
        
    // Exibindo os dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigoCarta);
    printf("Nome da Cidade: %s", carta2.nomeCidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", calculardensidadePopulacional(carta2));
    printf("PIB per Capita: %.2f reais\n", calcularpibPerCapita(carta2));
    printf("Super Poder: %.2f\n", calcularsuperPoder(carta2));

    //Comparando as cartas 1 e 2
    printf("\nComparação de Cartas:\n");
    printf("População: %d venceu (%d)\n ", (carta1.populacao) > (carta2.populacao) ? 1 : 2, (carta1.populacao > carta2.populacao) ? 1 : 0);
    printf("Área: %d venceu (%d)\n ", (carta1.area) > (carta2.area) ? 1 : 2, (carta1.area > carta2.area) ? 1 : 0);
    printf("PIB: %d venceu (%d)\n ", (carta1.pib) > (carta2.pib) ? 1 : 2, (carta1.pib > carta2.pib) ? 1 : 0);
    printf("Pontos Turísticos: %d venceu (%d)\n ", (carta1.pontosTuristicos) > (carta2.pontosTuristicos) ? 1 : 2, (carta1.pontosTuristicos > carta2.pontosTuristicos) ? 1 : 0);
    printf("Densidade Populacional: %d venceu (%d)\n ", (calculardensidadePopulacional(carta1)) < (calculardensidadePopulacional(carta2)) ? 1 : 2, (calculardensidadePopulacional(carta1) > calculardensidadePopulacional(carta2)) ? 1 : 0);
    printf("PIB per Capita: %d venceu (%d)\n ", (calcularpibPerCapita(carta1)) > (calcularpibPerCapita(carta2)) ? 1 : 2, (calcularpibPerCapita(carta1) > calcularpibPerCapita(carta2)) ? 1 : 0);
    printf("Super Poder: %d venceu (%d)\n ", (calcularsuperPoder(carta1)) > (calcularsuperPoder(carta2)) ? 1 : 2, (calcularsuperPoder(carta1) > calcularsuperPoder(carta2)) ? 1 : 0);

    return 0;
}
