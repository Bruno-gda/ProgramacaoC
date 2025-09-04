#include <stdio.h>
#include <stdlib.h>

int main()
{
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    printf("Digite a letra do estado que você quer: ");
    scanf("%c", &estado1);

    printf("Qual o codigo da sua carta. 'Ex: A01, B01, C02': ");
    scanf("%s", codigo1);

    printf("Qual o nome da sua cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população da sua carta. 'Ex: 451235': ");
    scanf("%d", &populacao1);

    printf("Qual a area da cidade em km². 'Ex: 1451.11': ");
    scanf("%f", &area1);

    printf("Qual o PIB da sua carta em bilhões. 'Ex: 3.652': ");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos tem na sua cidade: ");
    scanf("%d", &pontos1);

   
    printf("\n-------------------------------------------------------\n");
    printf("-------------------------------------------------------\n");
    printf("-------------------------------------------------------\n\n");



    printf("\nAgora faça a sua segunda carta.\n");
    


    printf("Digite qual estado você quer: ");
    scanf(" %c", &estado2);

    printf("Qual o codigo da sua carta: ");
    scanf("%s", codigo2);

    printf("Qual o nome da sua cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população da sua carta: 'Ex: 451235' ");
    scanf("%d", &populacao2);

    printf("Qual a area da cidade em km². 'Ex: 1451.11': ");
    scanf("%f", &area2);

    printf("Qual o PIB da sua carta em bilhões. 'Ex: 3.652': ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem na sua cidade: ");
    scanf("%d", &pontos2);

    printf("\n-------------------------------------------------------\n");
    printf("-------------------------------------------------------\n");
    printf("-------------------------------------------------------\n\n");

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;







    printf("\n Carta numero 1:\n");


    printf("o Estado da sua carta é:%c\n", estado1);
    printf("O codigo do seu estado é: %s\n", codigo1);
    printf("Sua cidade é: %s\n", cidade1),
    printf("A população é de: %d habitantes\n", populacao1);
    printf("A area da sua cidade é: %.2f km²\n", area1);
    printf("O PIB da sua carta é: %.3f bilhões de reais\n", pib1);
    printf("Sua cidade tem: %d pontos turisticos\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);
    
    printf("\n-------------------------------------------------------\n");
    printf("-------------------------------------------------------\n");
    printf("-------------------------------------------------------\n\n");


    printf("\n Carta numero 2:\n");


    printf("Seu estado é: %c\n", estado2);
    printf("O codigo do seu estado é: %s\n", codigo2);
    printf("Sua cidade é: %s\n", cidade2),
    printf("A população é de: %d habitantes\n", populacao2);
    printf("A area da sua cidade é: %.2f km²\n", area2);
    printf("O PIB da sua carta é: %.3f bilhões de reais\n", pib2);
    printf("Sua cidade tem: %d pontos turisticos\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);


    printf("\n-------------------------------------------------------\n");
    printf("-------------------------------------------------------\n");
    printf("-------------------------------------------------------\n\n");


    printf("Por Criterio de população a carta vencedora é:\n");





   if (populacao1 > populacao2) {
    printf("Carta 1 é a vencedora\n");
} else if (populacao1 < populacao2) {
    printf("Carta 2 é a vencedora\n");
} else {
    printf("há um empate\n");
}

    

    
    
    
    
    
    
    printf("\n");
    system("pause");

    return 0;
