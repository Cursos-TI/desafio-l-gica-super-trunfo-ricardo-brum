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
    int pontosturisticos1, resultado1;
    float area1, pib1, densidade1, pibpercapita1, superpoder1;

    //Carta 2
    char estado2;
    char codigo2[10], cidade2[50];
    unsigned long int populacao2;
    int pontosturisticos2, resultado2;
    float area2, pib2, densidade2, pibpercapita2, superpoder2;

    // variável para escolha do atributo
    int opcao1, opcao2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Área para entrada de dados carta 1
    printf("Dados da carta 1\n");
    printf("Digite o Estado(letra): ");
    scanf(" %c" , &estado1);

    printf("Digite o código da carta: ");
    scanf(" %s" , codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s" , cidade1);

    printf("Digite a população da cidade: ");
    scanf(" %lu" , &populacao1);

    printf("Digite a área da cidade em km2: ");
    scanf(" %f" , &area1);

    printf("Digite o PIB da cidade(em bilhões): ");
    scanf(" %f" , &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf(" %d" , &pontosturisticos1);


    // Área para entrada de dados carta 2
    printf("\nDados da carta 2\n");
    printf("Digite o Estado(letra): ");
    scanf(" %c" , &estado2);

    printf("Digite o código da carta: ");
    scanf(" %s" , codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s" , cidade2);

    printf("Digite a população da cidade: ");
    scanf(" %lu" , &populacao2);

    printf("Digite a área da cidade em km2: ");
    scanf(" %f" , &area2);

    printf("Digite o PIB da cidade(em bilhões): ");
    scanf(" %f" , &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf(" %d" , &pontosturisticos2);

    //Cálculo da densidade populacional, pib per capita e do super poder
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    pibpercapita1 = (pib1 * 1000000000 ) / (float)populacao1;
    pibpercapita2 = (pib2 * 1000000000 ) / (float)populacao2;

    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + 1 / densidade1;
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + 1 / densidade2;



    // Comparação de Cartas:
    // Faça o menu interativo para escolha do atributo de comparação
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    
    printf("\nEscolha o primeiro atributo para comparação.\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super poder\n");
    printf("Qual a sua escolha: ");
    scanf(" %d", &opcao1);

    //Escolha da primeira comparação
    switch(opcao1){
        case 1:
            printf("\nEscolha o segundo atributo para comparação.\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos turísticos\n");
            printf("5 - Densidade demográfica\n");
            printf("6 - PIB per capita\n");
            printf("7 - Super poder\n");
            printf("Qual a sua escolha: ");
            scanf(" %d", &opcao2);

        //Escolha da segunda comparação
        switch(opcao2){
            case 2:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Populaçao)\n");
                printf("\nCarta 1 - %s: %lu\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
                if(populacao1 > populacao2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(populacao2 == populacao1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Área)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, area1);
                printf("Carta 2 - %s: %.2f\n", cidade2, area2);
                if(area1 > area2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(area2 == area1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;  

            case 3:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Populaçao)\n");
                printf("\nCarta 1 - %s: %lu\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
                if(populacao1 > populacao2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(populacao2 == populacao1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: PIB)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
                if(pib1 > pib2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pib2 == pib1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 4:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Populaçao)\n");
                printf("\nCarta 1 - %s: %lu\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
                if(populacao1 > populacao2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(populacao2 == populacao1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
                printf("\nCarta 1 - %s: %d\n", cidade1, pontosturisticos1);
                printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
                if(pontosturisticos1 > pontosturisticos2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pontosturisticos2 == pontosturisticos1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 5:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Populaçao)\n");
                printf("\nCarta 1 - %s: %lu\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
                if(populacao1 > populacao2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(populacao2 == populacao1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Densidade Demográfica)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, densidade1);
                printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
                if(densidade1 < densidade2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(densidade2 == densidade1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 6:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Populaçao)\n");
                printf("\nCarta 1 - %s: %lu\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
                if(populacao1 > populacao2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(populacao2 == populacao1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pibpercapita1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
                if(pibpercapita1 > pibpercapita2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pibpercapita2 == pibpercapita1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 7:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Populaçao)\n");
                printf("\nCarta 1 - %s: %lu\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
                if(populacao1 > populacao2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(populacao2 == populacao1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Super poder)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, superpoder1);
                printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
                if(superpoder1 > superpoder2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(superpoder2 == superpoder1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            default:
            printf("Opção inválida\n");
        }
        break;


        case 2:
            printf("\nEscolha o segundo atributo para comparação.\n");
            printf("1 - População\n");
            printf("3 - PIB\n");
            printf("4 - Pontos turísticos\n");
            printf("5 - Densidade demográfica\n");
            printf("6 - PIB per capita\n");
            printf("7 - Super poder\n");
            printf("Qual a sua escolha: ");
            scanf(" %d", &opcao2);

        //Escolha da segunda comparação
        switch(opcao2){
            case 1:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Área)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, area1);
                printf("Carta 2 - %s: %.2f\n", cidade2, area2);
                if(area1 > area2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(area2 == area1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Populaçao)\n");
                printf("\nCarta 1 - %s: %lu\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
                if(populacao1 > populacao2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(populacao2 == populacao1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 3:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Área)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, area1);
                printf("Carta 2 - %s: %.2f\n", cidade2, area2);
                if(area1 > area2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(area2 == area1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: PIB)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
                if(pib1 > pib2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pib2 == pib1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 4:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Área)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, area1);
                printf("Carta 2 - %s: %.2f\n", cidade2, area2);
                if(area1 > area2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(area2 == area1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
                printf("\nCarta 1 - %s: %d\n", cidade1, pontosturisticos1);
                printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
                if(pontosturisticos1 > pontosturisticos2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pontosturisticos2 == pontosturisticos1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 5:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Área)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, area1);
                printf("Carta 2 - %s: %.2f\n", cidade2, area2);
                if(area1 > area2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(area2 == area1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Densidade Demográfica)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, densidade1);
                printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
                if(densidade1 < densidade2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(densidade2 == densidade1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 6:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Área)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, area1);
                printf("Carta 2 - %s: %.2f\n", cidade2, area2);
                if(area1 > area2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(area2 == area1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pibpercapita1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
                if(pibpercapita1 > pibpercapita2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pibpercapita2 == pibpercapita1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 7:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Área)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, area1);
                printf("Carta 2 - %s: %.2f\n", cidade2, area2);
                if(area1 > area2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(area2 == area1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Super poder)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, superpoder1);
                printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
                if(superpoder1 > superpoder2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(superpoder2 == superpoder1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            default:
            printf("Opção inválida\n");
        }
        break;


        case 3:
            printf("\nEscolha o segundo atributo para comparação.\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("4 - Pontos turísticos\n");
            printf("5 - Densidade demográfica\n");
            printf("6 - PIB per capita\n");
            printf("7 - Super poder\n");
            printf("Qual a sua escolha: ");
            scanf(" %d", &opcao2);

        //Escolha da segunda comparação
        switch(opcao2){
            case 1:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: PIB)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
                if(pib1 > pib2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pib2 == pib1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Populaçao)\n");
                printf("\nCarta 1 - %s: %lu\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
                if(populacao1 > populacao2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(populacao2 == populacao1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 2:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: PIB)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
                if(pib1 > pib2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pib2 == pib1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Área)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, area1);
                printf("Carta 2 - %s: %.2f\n", cidade2, area2);
                if(area1 > area2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(area2 == area1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 4:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: PIB)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
                if(pib1 > pib2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pib2 == pib1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
                printf("\nCarta 1 - %s: %d\n", cidade1, pontosturisticos1);
                printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
                if(pontosturisticos1 > pontosturisticos2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pontosturisticos2 == pontosturisticos1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 5:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: PIB)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
                if(pib1 > pib2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pib2 == pib1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Densidade Demográfica)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, densidade1);
                printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
                if(densidade1 < densidade2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(densidade2 == densidade1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 6:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: PIB)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
                if(pib1 > pib2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pib2 == pib1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pibpercapita1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
                if(pibpercapita1 > pibpercapita2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pibpercapita2 == pibpercapita1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 7:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: PIB)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
                if(pib1 > pib2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pib2 == pib1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Super poder)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, superpoder1);
                printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
                if(superpoder1 > superpoder2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(superpoder2 == superpoder1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            default:
            printf("Opção inválida\n");
        }
        break;


        case 4:
            printf("\nEscolha o segundo atributo para comparação.\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("5 - Densidade demográfica\n");
            printf("6 - PIB per capita\n");
            printf("7 - Super poder\n");
            printf("Qual a sua escolha: ");
            scanf(" %d", &opcao2);

        //Escolha da segunda comparação
        switch(opcao2){
            case 1:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
                printf("\nCarta 1 - %s: %d\n", cidade1, pontosturisticos1);
                printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
                if(pontosturisticos1 > pontosturisticos2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pontosturisticos2 == pontosturisticos1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Populaçao)\n");
                printf("\nCarta 1 - %s: %lu\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
                if(populacao1 > populacao2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(populacao2 == populacao1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 2:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
                printf("\nCarta 1 - %s: %d\n", cidade1, pontosturisticos1);
                printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
                if(pontosturisticos1 > pontosturisticos2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pontosturisticos2 == pontosturisticos1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Área)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, area1);
                printf("Carta 2 - %s: %.2f\n", cidade2, area2);
                if(area1 > area2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(area2 == area1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 3:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
                printf("\nCarta 1 - %s: %d\n", cidade1, pontosturisticos1);
                printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
                if(pontosturisticos1 > pontosturisticos2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pontosturisticos2 == pontosturisticos1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: PIB)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
                if(pib1 > pib2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pib2 == pib1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 5:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
                printf("\nCarta 1 - %s: %d\n", cidade1, pontosturisticos1);
                printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
                if(pontosturisticos1 > pontosturisticos2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pontosturisticos2 == pontosturisticos1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Densidade Demográfica)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, densidade1);
                printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
                if(densidade1 < densidade2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(densidade2 == densidade1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 6:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
                printf("\nCarta 1 - %s: %d\n", cidade1, pontosturisticos1);
                printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
                if(pontosturisticos1 > pontosturisticos2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pontosturisticos2 == pontosturisticos1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pibpercapita1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
                if(pibpercapita1 > pibpercapita2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pibpercapita2 == pibpercapita1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 7:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
                printf("\nCarta 1 - %s: %d\n", cidade1, pontosturisticos1);
                printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
                if(pontosturisticos1 > pontosturisticos2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pontosturisticos2 == pontosturisticos1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Super poder)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, superpoder1);
                printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
                if(superpoder1 > superpoder2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(superpoder2 == superpoder1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            default:
            printf("Opção inválida\n");
        }
        break;


        case 5:
            printf("\nEscolha o segundo atributo para comparação.\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos turísticos\n");
            printf("6 - PIB per capita\n");
            printf("7 - Super poder\n");
            printf("Qual a sua escolha: ");
            scanf(" %d", &opcao2);

        //Escolha da segunda comparação
        switch(opcao2){
            case 1:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Densidade Demográfica)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, densidade1);
                printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
                if(densidade1 < densidade2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(densidade2 == densidade1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Populaçao)\n");
                printf("\nCarta 1 - %s: %lu\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
                if(populacao1 > populacao2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(populacao2 == populacao1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 2:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Densidade Demográfica)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, densidade1);
                printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
                if(densidade1 < densidade2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(densidade2 == densidade1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Área)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, area1);
                printf("Carta 2 - %s: %.2f\n", cidade2, area2);
                if(area1 > area2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(area2 == area1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 3:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Densidade Demográfica)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, densidade1);
                printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
                if(densidade1 < densidade2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(densidade2 == densidade1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: PIB)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
                if(pib1 > pib2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pib2 == pib1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 4:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Densidade Demográfica)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, densidade1);
                printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
                if(densidade1 < densidade2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(densidade2 == densidade1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
                printf("\nCarta 1 - %s: %d\n", cidade1, pontosturisticos1);
                printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
                if(pontosturisticos1 > pontosturisticos2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pontosturisticos2 == pontosturisticos1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 6:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Densidade Demográfica)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, densidade1);
                printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
                if(densidade1 < densidade2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(densidade2 == densidade1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pibpercapita1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
                if(pibpercapita1 > pibpercapita2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pibpercapita2 == pibpercapita1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 7:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Densidade Demográfica)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, densidade1);
                printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
                if(densidade1 < densidade2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(densidade2 == densidade1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Super poder)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, superpoder1);
                printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
                if(superpoder1 > superpoder2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(superpoder2 == superpoder1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            default:
            printf("Opção inválida\n");
        }
        break;

        case 6:
            printf("\nEscolha o segundo atributo para comparação.\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos turísticos\n");
            printf("5 - Densidade demográfica\n");
            printf("7 - Super poder\n");
            printf("Qual a sua escolha: ");
            scanf(" %d", &opcao2);

        //Escolha da segunda comparação
        switch(opcao2){
            case 1:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pibpercapita1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
                if(pibpercapita1 > pibpercapita2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pibpercapita2 == pibpercapita1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Populaçao)\n");
                printf("\nCarta 1 - %s: %lu\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
                if(populacao1 > populacao2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(populacao2 == populacao1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 2:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pibpercapita1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
                if(pibpercapita1 > pibpercapita2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pibpercapita2 == pibpercapita1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Área)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, area1);
                printf("Carta 2 - %s: %.2f\n", cidade2, area2);
                if(area1 > area2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(area2 == area1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 3:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pibpercapita1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
                if(pibpercapita1 > pibpercapita2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pibpercapita2== pibpercapita1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: PIB)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
                if(pib1 > pib2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pib2 == pib1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 4:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pibpercapita1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
                if(pibpercapita1 > pibpercapita2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pibpercapita2 == pibpercapita1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
                printf("\nCarta 1 - %s: %d\n", cidade1, pontosturisticos1);
                printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
                if(pontosturisticos1 > pontosturisticos2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pontosturisticos2 == pontosturisticos1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 5:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pibpercapita1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
                if(pibpercapita1 > pibpercapita2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pibpercapita2 == pibpercapita1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Densidade Demográfica)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, densidade1);
                printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
                if(densidade1 < densidade2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(densidade2 == densidade1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 7:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pibpercapita1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
                if(pibpercapita1 > pibpercapita2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(pibpercapita2 == pibpercapita1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Super poder)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, superpoder1);
                printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
                if(superpoder1 > superpoder2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(superpoder2 == superpoder1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            default:
            printf("Opção inválida\n");
        }
        break;


        case 7:
            printf("\nEscolha o segundo atributo para comparação.\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos turísticos\n");
            printf("5 - Densidade demográfica\n");
            printf("6 - PIB per Capita\n");
            printf("Qual a sua escolha: ");
            scanf(" %d", &opcao2);

        //Escolha da segunda comparação
        switch(opcao2){
            case 1:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Super poder)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, superpoder1);
                printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
                if(superpoder1 > superpoder2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(superpoder2 == superpoder1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Populaçao)\n");
                printf("\nCarta 1 - %s: %lu\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
                if(populacao1 > populacao2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(populacao2 == populacao1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 2:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Super poder)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, superpoder1);
                printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
                if(superpoder1 > superpoder2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(superpoder2 == superpoder1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Área)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, area1);
                printf("Carta 2 - %s: %.2f\n", cidade2, area2);
                if(area1 > area2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(area2 == area1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 3:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Super poder)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, superpoder1);
                printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
                if(superpoder1 > superpoder2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(superpoder2 == superpoder1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: PIB)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
                if(pib1 > pib2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pib2 == pib1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 4:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Super poder)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, superpoder1);
                printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
                if(superpoder1 > superpoder2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(superpoder2 == superpoder1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
                printf("\nCarta 1 - %s: %d\n", cidade1, pontosturisticos1);
                printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
                if(pontosturisticos1 > pontosturisticos2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pontosturisticos2 == pontosturisticos1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 5:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Super poder)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, superpoder1);
                printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
                if(superpoder1 > superpoder2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(superpoder2 == superpoder1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: Densidade Demográfica)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, densidade1);
                printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
                if(densidade1 < densidade2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(densidade2 == densidade1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            case 6:
                //Primeiro atributo comparado
                printf("\nComparação de cartas (Atributo: Super poder)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, superpoder1);
                printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
                if(superpoder1 > superpoder2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado1 = 2;
                } else if(superpoder2 == superpoder1){
                    printf("Empate!\n");
                    resultado1 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado1 = 0;
                }
                //Segundo atributo comparado
                printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
                printf("\nCarta 1 - %s: %.2f\n", cidade1, pibpercapita1);
                printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
                if(pibpercapita1 > pibpercapita2){
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
                    resultado2 = 2;
                } else if(pibpercapita2 == pibpercapita1){
                    printf("Empate!\n");
                    resultado2 = 1;
                } else{
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
                    resultado2 = 0;
                }
                break;

            default:
            printf("Opção inválida\n");
        }
        break;

        default:
        printf("Opção inválida");
    }  
    

    // declarando vencedor com base em 2 atributos
    if((resultado1 == 2 && resultado2 >= 1) || (resultado1 >= 1 && resultado2 == 2)){
        printf("\nResultado final: Vitória da Carta 1 (%s)!\n", cidade1);
    } else if((resultado1 == 1 && resultado2 == 1) || (resultado1 != resultado2)){
        printf("\nResultado final: Empate!\n");
    } else {
        printf("\nResultado final: Vitória da Carta 2 (%s)!\n", cidade2);
    }

    return 0;
}
