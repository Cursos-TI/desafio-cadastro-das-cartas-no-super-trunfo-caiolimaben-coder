#include <stdio.h>

int main (){
    char Estado[50];
    char codigoCarta [50];
    char Cidade [50];
    float populacao;
    float area;
    float PIB;
    int pontosTuristicos;

    printf("Qual Estado a carta representa? \n");
    scanf("%s", &Estado);
    
    printf("Qual é o código da carta? \n");
    scanf("%s", &codigoCarta);

    printf("Qual cidade a carta representa? \n");
    scanf("%s", &Cidade);

    printf("Qual a população? \n");
    scanf("%f", &populacao);

    printf("Qual a área da cidade? \n");
    scanf("%f", &area);

    printf("Qual o PIB? \n");
    scanf("%f", &PIB);

    printf("Quantos pontos turisticos existem na cidade? \n");
    scanf("%d", &pontosTuristicos);

    printf("Carta 1 \n");

    printf("Código da carta: %s\n", codigoCarta);

    printf("Estado: %s\n", Estado);

    printf("Cidade: %s\n", Cidade);

    printf("População: %.2f Milhões\n", populacao);

    printf("Área: %.2f Milhões km²\n", area);

    printf("PIB: %.2f Bilhões de Reais\n", PIB);

    printf("Pontos Turisticos: %d\n", pontosTuristicos);
 

    return 0;


}
    
