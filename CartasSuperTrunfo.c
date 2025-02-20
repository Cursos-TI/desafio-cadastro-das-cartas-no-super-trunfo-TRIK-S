#include <stdio.h>
int main() {
        //definindo as variáriáveis
    char cidade[100] , cidade2[100], estado[1], estado2[1], codigo[] = "01", codigo2[] = "02";
    int populacao , populacao2 , pontostur , pontostur2;
    float area , area2 , pib , pib2;

    
    //recebendo os atributos das cartas
    
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
    
    //recebendo os atributos das cartas
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


//imprime todos atributos cadastrados

    printf("O código da primeira cidade é: %s \n" , codigo);
    printf("Cidade: %s \n" , cidade);  
    printf("Estado: %s \n" , estado); 
    printf("População: %i \n" , populacao); 
    printf("Ponto(s) turístico(s): %i \n" , pontostur); 
    printf("Area: %.2f km² \n" , area); 
    printf("PIB: %.2f bilhões de reais \n\n" , pib);
   
    printf("O código da segunda cidade é: %s \n" , codigo2);
    printf("Cidade: %s \n" , cidade2);  
    printf("Estado: %s \n" , estado2); 
    printf("População: %i \n" , populacao2); 
    printf("Pontos turísticos: %i \n" , pontostur2); 
    printf("Área: %.2f km² \n" , area2); 
    printf("PIB: %.2f bilhões de reais \n\n\n" , pib2);
    

    return 0;
}
