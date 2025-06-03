#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

typedef struct {
    char estado;
    char codigoCarta[4];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float inversoDensidadePopulacional;
    float pibPerCapita;
    float superPoder;
} CartaSuperTrunfo;

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

    //Calculando densidade populacional e pib per capita carta 1
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.inversoDensidadePopulacional = 1 / carta1.densidadePopulacional;
    carta1.pibPerCapita = carta1.pib * 1000000000 / carta1.populacao;

    //Calculo Super Poder

    carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pib + (float)carta1.pontosTuristicos + carta1.pibPerCapita + carta1.inversoDensidadePopulacional;

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
    
    //Calculando densidade populacional e pib per capita carta 2
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.inversoDensidadePopulacional = 1 / carta2.densidadePopulacional;
    carta2.pibPerCapita = carta2.pib * 1000000000 / carta2.populacao;

    //Calculo Super Poder

    carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pib + (float)carta2.pontosTuristicos + carta2.pibPerCapita + carta2.inversoDensidadePopulacional;

    // Exibindo os dados da Carta 1 e Carta 2
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigoCarta);
    printf("Nome da Cidade: %s", carta1.nomeCidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);      
        
    // Exibindo os dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigoCarta);
    printf("Nome da Cidade: %s", carta2.nomeCidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    //Comparando as cartas 1 e 2
    printf("\nComparação de Cartas:\n");
    printf("População: %d venceu (%d)\n ", (carta1.populacao) > (carta2.populacao) ? 1 : 2, (carta1.populacao > carta2.populacao) ? 1 : 0);
    printf("Área: %d venceu (%d)\n ", (carta1.area) > (carta2.area) ? 1 : 2, (carta1.area > carta2.area) ? 1 : 0);
    printf("PIB: %d venceu (%d)\n ", (carta1.pib) > (carta2.pib) ? 1 : 2, (carta1.pib > carta2.pib) ? 1 : 0);
    printf("Pontos Turísticos: %d venceu (%d)\n ", (carta1.pontosTuristicos) > (carta2.pontosTuristicos) ? 1 : 2, (carta1.pontosTuristicos > carta2.pontosTuristicos) ? 1 : 0);
    printf("Densidade Populacional: %d venceu (%d)\n ", (carta1.densidadePopulacional) < (carta2.densidadePopulacional) ? 1 : 2, (carta1.densidadePopulacional > carta2.densidadePopulacional) ? 1 : 0);
    printf("PIB per Capita: %d venceu (%d)\n ", (carta1.pibPerCapita) > (carta2.pibPerCapita) ? 1 : 2, (carta1.pibPerCapita > carta2.pibPerCapita) ? 1 : 0);
    printf("Super Poder: %d venceu (%d)\n ", (carta1.superPoder) > (carta2.superPoder) ? 1 : 2, (carta1.superPoder > carta2.superPoder) ? 1 : 0);
    return 0;
}
