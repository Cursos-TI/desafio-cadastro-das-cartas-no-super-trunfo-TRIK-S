#include <stdio.h>
int main() {
        //definindo as variáriáveis
    char codigo[10] , cidade[100];
    char estado[100];
    int populacao , pontostur;
    float area , pib;

    //recebendo os atributos das cartas

    printf("Digite o nome da sua cidade: ");
    fgets(cidade, sizeof(cidade), stdin);

    printf("Digite o código de área da sua cidade: ");
    scanf("%s", codigo);

    printf("Qual a população da sua cidade? ");
    scanf("%i", &populacao);
    
    printf("Quantos pontos turísticos a sua cidade possui? ");
    scanf("%i", &pontostur);

    printf("Qual a área da sua cidade? ");
    scanf("%f", &area);

    printf("Qual o PIB da sua cidade? ");
    scanf("%f", &pib);
    ("\n\n");

    printf("Sua cidade é: %s \n" , cidade);     
    printf("O código da sua cidade é: %s \n" , codigo);
    printf("O estado da sua cidade é: %s \n" , estado); 
    printf("A população da sua cidade é: %i \n" , populacao); 
    printf("Sua cidade tem %i ponto(s) turístico(s). \n" , pontostur); 
    printf("A área da sua cidade é: %f \n" , area); 
    printf("O PIB da sua cidade é: %f \n" , pib); 

    return 0;
}
