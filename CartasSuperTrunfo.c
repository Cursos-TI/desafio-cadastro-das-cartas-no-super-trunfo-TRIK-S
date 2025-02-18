#include <stdio.h>
int main() {
        //definindo as variáriáveis
    char cidade[100], cidade2[100], estado[100], estado2[100], codigo[]="a01", codigo2[]= "a02";
    int populacao , populacao2 , pontostur , pontostur2;
    float area , area2 , pib , pib2;

    printf("Código promeira carta: %s \n" , codigo);
    //recebendo os atributos das cartas
    printf("Digite o nome da sua cidade: ");
    fgets(cidade, sizeof(cidade), stdin);

    printf("Digite o estado da sua cidade: ");
    fgets(estado, sizeof(estado), stdin);

    printf("Qual a população da sua cidade? ");
    scanf("%i", &populacao);
    
    printf("Quantos pontos turísticos a sua cidade possui? ");
    scanf("%i", &pontostur);

    printf("Qual a área da sua cidade? ");
    scanf("%f", &area);

    printf("Qual o PIB da sua cidade? ");
    scanf("%f", &pib);
    printf("\n\n");

    printf("Código: %s \n" , codigo2);
    //recebendo os atributos das cartas
    printf("Digite o nome da sua cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Digite o estado da sua cidade: ");
    fgets(estado2, sizeof(estado2), stdin);

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
    printf("cidade: %s" , cidade);  
    printf("Estado: %s" , estado); 
    printf("População: %i \n" , populacao); 
    printf("ponto(s) turístico(s): %i \n" , pontostur); 
    printf("Area: %.2f km² \n" , area); 
    printf("PIB: %.2f milhões de reais \n\n\n" , pib);
   
    printf("O código da segunda cidade é: %s \n" , codigo2);
    printf("Cidade: %s" , cidade2);  
    printf("Estado: %s" , estado2); 
    printf("População: %i \n" , populacao2); 
    printf("Pontos turísticos: %i \n" , pontostur2); 
    printf("Área: %.2f km² \n" , area2); 
    printf("PIB: %.2f milhões de reais \n\n\n" , pib2);
    

    return 0;
}
