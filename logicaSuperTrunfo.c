#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    //Carta 1
    char estado1;
    char codigo1[10], cidade1[50];
    unsigned long int populacao1;
    int pontosturisticos1;
    float area1, pib1, densidade1, pibpercapita1, superpoder1;

    //Carta 2
    char estado2;
    char codigo2[10], cidade2[50];
    unsigned long int populacao2;
    int pontosturisticos2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2;

    //Comparação entre cartas
    char resultadopopulacao[50], resultadopontosturisticos, resultadoarea, resultadopib, resultadodensidade, resultadopibpercapita, resultadosuperpoder;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Área para entrada de dados carta 1
    printf("Dados da carta 1\n");
    printf("Digite o Estado(letra): ");
    scanf(" %c" , &estado1);

    printf("Digite o código da carta: ");
    scanf("%s" , &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s" , &cidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu" , &populacao1);

    printf("Digite a área da cidade em km2: ");
    scanf("%f" , &area1);

    printf("Digite o PIB da cidade(em bilhões): ");
    scanf("%f" , &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d" , &pontosturisticos1);


    // Área para entrada de dados carta 2
    printf("\nDados da carta 2\n");
    printf("Digite o Estado(letra): ");
    scanf(" %c" , &estado2);

    printf("Digite o código da carta: ");
    scanf("%s" , &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s" , &cidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu" , &populacao2);

    printf("Digite a área da cidade em km2: ");
    scanf("%f" , &area2);

    printf("Digite o PIB da cidade(em bilhões): ");
    scanf("%f" , &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d" , &pontosturisticos2);

    //Cálculo da densidade populacional, pib per capita e do super poder
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    pibpercapita1 = (pib1 * 1000000000 ) / (float)populacao1;
    pibpercapita2 = (pib2 * 1000000000 ) / (float)populacao2;

    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + 1 / densidade1;
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + 1 / densidade2;



    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    
    printf("\nComparação de cartas (Atributo: Populaçao)\n");
    printf("\nCarta 1 - %s: %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nComparação de cartas (Atributo: Área)\n");
    printf("\nCarta 1 - %s: %.2f\n", cidade1, area1);
    printf("Carta 2 - %s: %.2f\n", cidade2, area2);
    if(area1 > area2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nComparação de cartas (Atributo: PIB)\n");
    printf("\nCarta 1 - %s: %.2f\n", cidade1, pib1);
    printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
    if(pib1 > pib2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
    printf("\nCarta 1 - %s: %d\n", cidade1, pontosturisticos1);
    printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
    if(pontosturisticos1 > pontosturisticos2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nComparação de cartas (Atributo: Densidade Populacional)\n");
    printf("\nCarta 1 - %s: %.2f\n", cidade1, densidade1);
    printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
    if(densidade1 < densidade2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
    printf("\nCarta 1 - %s: %.2f\n", cidade1, pibpercapita1);
    printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
    if(pibpercapita1 > pibpercapita2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nComparação de cartas (Atributo: Super poder)\n");
    printf("\nCarta 1 - %s: %.2f\n", cidade1, superpoder1);
    printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
    if(superpoder1 > superpoder2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }



    

    

    return 0;
}
