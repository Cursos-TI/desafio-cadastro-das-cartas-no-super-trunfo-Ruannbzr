#include <stdio.h>

int main(){

    char Estado = 'H';
    char CodigoCarta[20] = "01";
    char NomeCidade[20] = "Fortaleza";
    int Populacao = '100000';
    float Area = '2470';
    float PIB = '2004'; 
    int NumeroTuristicos = '50';

    //título
    printf("Carta1: \n");
    
    //Entrada de dados
    printf("Estado: ");
    scanf("%c", &Estado);
    printf("Codigo da Carta: ");
    scanf("%s", &CodigoCarta);
    printf("Nome da Cidade: ");
    scanf("%s", &NomeCidade);
    printf("População: ");
    scanf("%d", &Populacao);
    printf("Área: ");
    scanf("%f", &Area);
    printf("PIB: ");
    scanf("%f", &PIB);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &NumeroTuristicos);

    //Saída de dados
    printf("Estado: %c\n", Estado);
    printf("Código da Carta: %s\n", CodigoCarta);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf("População: %d\n", Populacao);
    printf("Área em Km²: %f\n", Area);
    printf("PIB: %f\n", PIB);
    printf("Número de Pontos Turísticos: %d\n \n", NumeroTuristicos);


    char Estado2 = 'J';
    char CodigoCarta2[20] = "01";
    char NomeCidade2[20] = "Fortaleza";
    int Populacao2 = "100000";
    float Area2 = '2470';
    float PIB2 = '2004'; 
    int NumeroTuristicos2 = '50';

    //título 2° carta
    printf("Carta2: \n");
    
    //Entrada de dados 2° carta
    printf("Estado 2: \n");
    scanf("%s", &Estado2);
    printf("Codigo da Carta 2: ");
    scanf("%s", &CodigoCarta2);
    printf("Nome da Cidade 2: ");
    scanf("%s", &NomeCidade2);
    printf("População 2: ");
    scanf("%d", &Populacao2);
    printf("Área 2: ");
    scanf("%f", &Area2);
    printf("PIB 2: ");
    scanf("%f", &PIB2);
    printf("Número de Pontos Turísticos 2: ");
    scanf("%d", &NumeroTuristicos2);

    //Saída de dados 2° carta
    printf("Estado: %c\n", Estado2);
    printf("Código da Carta: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área em Km²: %f\n", Area2);
    printf("PIB: %f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumeroTuristicos2);

    
}
