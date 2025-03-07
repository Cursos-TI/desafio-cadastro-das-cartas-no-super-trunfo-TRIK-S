#include <stdio.h>
int main() {
        //definindo as variáriáveis
    char cidade[100] , cidade2[100], estado[3], estado2[3];
    char code[] = "01";
    char codigo2[] = "02";
    int populacao , populacao2 , pontostur , pontostur2;
    float area , area2 , pib , pib2 , densipop , pibperc , densipop2 , pibperc2;
    double superpoder1, superpoder2;

    //recebendo os atributos da primeira carta
    printf("Digite o nome da sua cidade: ");
    scanf("%s" , cidade);

    printf("Digite o estado da sua cidade: ");
    scanf("%s" , estado);

    printf("Qual a população da sua cidade? ");
    scanf("%i", &populacao);
    
    printf("Quantos pontos turísticos a sua cidade possui? ");
    scanf("%i", &pontostur);

    printf("Qual a área da sua cidade? ");
    scanf("%f", &area);

    printf("Qual o PIB da sua cidade? ");
    scanf("%f", &pib);
    printf("\n\n");

    //calcula a densidade populacional e o pibpercapta da primeira carta
    densipop = (populacao / area);
    pibperc = (float)(pib / populacao);
    
    //recebendo os atributos da segunda carta
    printf("Digite o nome da sua cidade: ");
    scanf("%s" , cidade2);

    printf("Digite o estado da sua cidade: ");
    scanf("%s" , estado2);

    printf("Qual a população da sua cidade? ");
    scanf("%i", &populacao2);
    
    printf("Quantos pontos turísticos a sua cidade possui? ");
    scanf("%i", &pontostur2);

    printf("Qual a área da sua cidade? ");
    scanf("%f", &area2);

    printf("Qual o PIB da sua cidade? ");
    scanf("%f", &pib2);
    printf("\n\n");

    //calcula a densidade populacional e o pibpercapta da segunda carta
    densipop2 = (populacao2 / area2);
    pibperc2 = (float)(pib2 / populacao2);
    
    //soma os atributos para calcular o superpoder de ambas as cartas
    superpoder1 = (double)(populacao + pontostur + area + pib + pibperc - densipop);
    superpoder2 = (double)(populacao2 + pontostur2 + area2 + pib2 + pibperc2 - densipop2);

    //exibe o superpoder das duas cartas
    printf("carta %s%s tem superpoder %.3f!\n\n", estado, code, superpoder1);
    printf("carta %s%s tem superpoder %.3f!\n\n", estado2, codigo2, superpoder2);

    //exibe todos atributos cadastrados da primeira carta
    printf("O código da primeira cidade é: %s%s \n" , estado, code);
    printf("Cidade: %s \n" , cidade);  
    printf("Estado: %s \n" , estado); 
    printf("População: %i \n" , populacao); 
    printf("Ponto(s) turístico(s): %i \n" , pontostur); 
    printf("Area: %.2f km² \n" , area); 
    printf("PIB: %.2f bilhões de reais \n" , pib);
    printf("Densidade populacional é: %.3f hab/km² \n", densipop);
    printf("PIB percapta: %.3f reais \n", pibperc);
    printf("Superpoder: %.3f \n\n\n" , superpoder1);

    //exibe todos atributos cadastrados da segunda carta
    printf("O código da segunda cidade é: %s%s \n" , estado2, codigo2);
    printf("Cidade: %s \n" , cidade2);  
    printf("Estado: %s \n" , estado2); 
    printf("População: %i \n" , populacao2); 
    printf("Pontos turísticos: %i \n" , pontostur2); 
    printf("Área: %.2f km² \n" , area2); 
    printf("PIB: %.2f bilhões de reais \n" , pib2);
    printf("Densidade populacional é: %.3f hab/km² \n", densipop2);
    printf("PIB percapta: %.3f reais \n", pibperc2);
    printf("Superpoder: %.3f" , superpoder2);

    //compara os atributos das cartas qual é maior e exibe 1 para verdadeiro e 0 para falso
    printf("\n\nA população da cidade %s%s é maior do que da cidade %s%s? %i \n" , estado , code , 
        estado2, codigo2  , (populacao > populacao2));
    printf("A cidade %s%s tem mais pontos turísticos do que da cidade %s%s? %i \n" , estado , code , 
            estado2, codigo2  , (pontostur > pontostur2));
    printf("A área da cidade %s%s é maior do que a área da cidade %s%s? %i \n" , estado , code , 
                estado2, codigo2  , (area > area2));
    printf("O PIB da cidade %s%s é maior do que o PIB da cidade %s%s? %i \n" , estado , code , 
                    estado2, codigo2  , (pib > pib2));
    printf("A densidade populacional da cidade %s%s é maior do que a densidade populacional da cidade %s%s? %i \n" 
        , estado , code , estado2, codigo2  , (densipop > densipop2));
    printf("O PIB percapta da cidade %s%s é maior do que o PIB percapta da cidade %s%s? %i \n" , estado , code , 
            estado2, codigo2  , (pibperc > pibperc2));
            
    if(superpoder1 > superpoder2)
    {
        printf("\n A carta %s%s venceu!! \n Cidade: %s \n Super poder:\n\n %.3f." , estado 
            , code , cidade , superpoder1);
    }else{
        printf("\n A carta %s%s venceu!! \n Cidade: %s \n Super poder: %.3f.\n\n" , estado2 
            , codigo2 , cidade2 , superpoder2);
    }
    
    return 0;
}
