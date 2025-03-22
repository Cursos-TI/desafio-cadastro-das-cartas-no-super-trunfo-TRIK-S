#include <stdio.h>
#include<stdlib.h>
int main()
{
    // definindo as variáriáveis
    char cidade[100], cidade2[100], estado[3], estado2[3];
    char code[] = "01";
    char code2[] = "02";
    int populacao, populacao2, pontostur, pontostur2, escolha1, escolha2;
    float area, area2, pib, pib2, densipop, pibperc, densipop2, pibperc2, atributo1, atributo2, atributo3, atributo4;
    double superpoder1, superpoder2;

    printf("### SUPERTRUNFO ### \n");

    // recebendo os atributos da primeira carta
    printf("Digite o nome da sua cidade: ");
    scanf("%s", cidade);

    printf("Digite o estado da sua cidade: ");
    scanf("%s", estado);

    printf("Qual a população da sua cidade? ");
    scanf("%i", &populacao);

    printf("Quantos pontos turísticos a sua cidade possui? ");
    scanf("%i", &pontostur);

    printf("Qual a área da sua cidade? ");
    scanf("%f", &area);

    printf("Qual o PIB da sua cidade? ");
    scanf("%f", &pib);
    printf("\n\n");

    // calcula a densidade populacional e o pibpercapta da primeira carta
    densipop = (populacao / area);
    pibperc = (float)(pib / populacao);

    // recebendo os atributos da segunda carta
    printf("Digite o nome da sua cidade: ");
    scanf("%s", cidade2);

    printf("Digite o estado da sua cidade: ");
    scanf("%s", estado2);

    printf("Qual a população da sua cidade? ");
    scanf("%i", &populacao2);

    printf("Quantos pontos turísticos a sua cidade possui? ");
    scanf("%i", &pontostur2);

    printf("Qual a área da sua cidade? ");
    scanf("%f", &area2);

    printf("Qual o PIB da sua cidade? ");
    scanf("%f", &pib2);
    printf("\n\n");

    // calcula a densidade populacional e o pibpercapta da segunda carta
    densipop2 = (populacao2 / area2);
    pibperc2 = (float)(pib2 / populacao2);

    // soma os atributos para calcular o superpoder de ambas as cartas
    superpoder1 = (double)(populacao + pontostur + area + pib + pibperc - densipop);
    superpoder2 = (double)(populacao2 + pontostur2 + area2 + pib2 + pibperc2 - densipop2);

    // exibe o superpoder das duas cartas
    printf("carta %s%s tem superpoder %.3f!\n\n", estado, code, superpoder1);
    printf("carta %s%s tem superpoder %.3f!\n\n", estado2, code2, superpoder2);

    // exibe todos atributos cadastrados da primeira carta
    printf("O código da primeira cidade é: %s%s \n", estado, code);
    printf("Cidade: %s \n", cidade);
    printf("Estado: %s \n", estado);
    printf("População: %i \n", populacao);
    printf("Ponto(s) turístico(s): %i \n", pontostur);
    printf("Area: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Densidade populacional é: %.3f hab/km² \n", densipop);
    printf("PIB percapta: %.3f reais \n", pibperc);
    printf("Superpoder: %.3f \n\n\n", superpoder1);

    // exibe todos atributos cadastrados da segunda carta
    printf("O código da segunda cidade é: %s%s \n", estado2, code2);
    printf("Cidade: %s \n", cidade2);
    printf("Estado: %s \n", estado2);
    printf("População: %i \n", populacao2);
    printf("Pontos turísticos: %i \n", pontostur2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Densidade populacional é: %.3f hab/km² \n", densipop2);
    printf("PIB percapta: %.3f reais \n", pibperc2);
    printf("Superpoder: %.3f \n", superpoder2);

    printf("Agora escolha dois atributos para comparar!\n\n");
    printf("1. População \n2. Pontos turísticos \n3. Área \n4. Pib \n5. Densidade Populacional \n");
    printf("Primeiro atributo: ");
    scanf("%d" , &escolha1);

    printf("\n6. População \n7. Pontos turísticos \n8. Área \n9. Pib \n10. Densidade Populacional \n");
    printf("Segundo atributo: ");
    scanf("%d" , &escolha2);

    if(escolha1 != escolha2){

     printf("\nGerando comparação \n");
    }else{
      printf("Escolha inválida, os atributos devem ser diferentes! \n");
      abort();
    }

    switch(escolha1){
        case 1:
        printf("Carta %s%s: %d - " , estado, code, populacao);
        printf("Carta %s%s: %d.\n" , estado2, code2, populacao2);
        atributo1 = populacao;
        atributo2 = populacao2;
        break;

        case 2:
        printf("Carta %s%s: %d - " , estado, code, pontostur);
        printf("Carta %s%s: %d.\n" , estado2, code2, pontostur2);
        atributo1 = pontostur;
        atributo2 = pontostur2;
        break;

        case 3:
        printf("Carta %s%s: %.2f - " , estado, code, area);
        printf("Carta %s%s: %.2f.\n" , estado2, code2, area2);
        atributo1 = area;
        atributo2 = area2;
        break;

        case 4:
        printf("Carta %s%s: %.2f - " , estado, code, pib);
        printf("Carta %s%s: %.2f\n." , estado2, code2, pib2);
        atributo1 = pib;
        atributo2 = pib2;
        break;

        case 5:
        printf("Carta %s%s: %.2f - " , estado, code, densipop);
        printf("Carta %s%s: %.2f.\n" , estado2, code2, densipop2);
        atributo1 = densipop;
        atributo2 = densipop2;
        break;
    }

        switch(escolha2){
            case 1:
            printf("Carta %s%s: %d - " , estado, code, populacao);
            printf("Carta %s%s: %d.\n" , estado2, code2, populacao2);
            atributo3 = populacao;
            atributo4 = populacao2;
            break;

            case 2:
            printf("Carta %s%s: %d - " , estado, code, pontostur);
            printf("Carta %s%s: %d.\n" , estado2, code2, pontostur2);
            atributo3 = pontostur;
            atributo4 = pontostur2;
            break;

            case 3:
            printf("Carta %s%s: %.2f - " , estado, code, area);
            printf("Carta %s%s: %.2f.\n" , estado2, code2, area2);
            atributo3 = area;
            atributo4 = area2;
            break;

            case 4:
            printf("Carta %s%s: %.2f - " , estado, code, pib);
            printf("Carta %s%s: %.2f\n." , estado2, code2, pib2);
            atributo3 = pib;
            atributo4 = pib2;
            break;

            case 5:
            printf("Carta %s%s: %.2f - " , estado, code, densipop);
            printf("Carta %s%s: %.2f.\n" , estado2, code2, densipop2);
            atributo3 = densipop;
            atributo4 = densipop2;
            break;
        }

             float resultado1 = atributo1 + atributo3;
             float resultado2 = atributo2 + atributo4;

            resultado1 > resultado2 ? printf("Carta %s%s venceu!!! Pontos: %.2f \n" , estado, code, resultado1) :
                printf("Carta %s%s venceu!!! Pontos: %.2f \n" , estado2, code2, resultado2);



    return 0;
}