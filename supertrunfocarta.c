#include <stdio.h>
#include <stdlib.h>

int main()
{
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[20], cidade2[20];
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

    printf("Digite a população da sua carta: ");
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

    printf("Digite a população da sua carta: ");
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


    printf("\n Carta numero 1:\n");


    printf("o Estado da sua carta é:%c\n", estado1);
    printf("O codigo do seu estado é: %s\n", codigo1);
    printf("Sua cidade é: %s\n", cidade1),
    printf("A população é de: %d habitantes\n", populacao1);
    printf("A area da sua cidade é: %.2f km²\n", area1);
    printf("O PIB da sua carta é: %.3f bilhões de reais\n", pib1);
    printf("Sua cidade tem: %d pontos turisticos\n", pontos1);
    
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

    
    
    
    
    
    
    printf("\n");
    system("pause");

    return 0;
}
