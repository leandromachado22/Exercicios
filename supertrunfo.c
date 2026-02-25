#include <stdio.h>
#include <string.h>

int main(){
	// Variáveis utilizados no código
	
	int populacao1, ponto1, populacao2, ponto2;
	float area1, pib1, area2, pib2;
	char estado1, estado2;
	char codigo1[4], codigo2[4], cidade1[30], cidade2[30];
	
	// Cálculo da densidade populacional para as cartas
	float densidade1 = populacao1 / area1; 
	float densidade2 = populacao2 / area2;

	// Cálculo do PIB per capita para as cartas
	float pib_per_capita1 = (pib1 * 1000) / populacao1; // Convertendo PIB de bilhões para milhões e dividindo pela população
	float pib_per_capita2 = (pib2 * 1000) / populacao2; // Convertendo PIB de bilhões para milhões e dividindo pela população


	// Carta 01:

	printf("Estado: ");
	scanf(" %c", &estado1);
	printf("Codigo da carta: ");
	scanf("%3s", codigo1);
	printf("Nome da Cidade: ");
	scanf("%29s", cidade1);
	printf("Populacao: ");
	scanf("%d", &populacao1);
	printf("Area: ");
	scanf("%f", &area1);
	printf("PIB da Cidade: ");
	scanf("%f", &pib1);
	printf("Numero dos Pontos Turisticos: ");
	scanf("%d", &ponto1);
	printf("\n");
	
	// Carta 02:

	printf("Estado: ");
	scanf(" %c", &estado2);
	printf("Codigo da carta: ");
	scanf("%3s", codigo2);
	printf("Nome da Cidade: ");
	scanf("%29s", cidade2);
	printf("Populacao: ");
	scanf("%d", &populacao2);
	printf("Area: ");
	scanf("%f", &area2);
	printf("PIB da Cidade: ");
	scanf("%f", &pib2);
	printf("Numero dos Pontos Turisticos: ");
	scanf("%d", &ponto2);
	printf("\n");

	// Apresentação da Carta 1

	printf("Carta 1: \n");
	printf("Estado: %c \n", estado1);
	printf("Código da Carta: %s \n", codigo1);
	printf("Nome da Cidade: %s \n", cidade1);
	printf("População: %d \n", populacao1);
	printf("Area: %.2f km²\n", area1);
	printf("PIB da Cidade: %.2f bilhões de reais\n", pib1);
	printf("Número de Pontos Turísticos: %d \n", ponto1);
	printf("Densidade Populacional: %.2f habitantes por km²\n", densidade1);
	printf("PIB per capita: %.2f mil reais\n", pib_per_capita1);
	printf("\n");
	
	// Apresentação da Carta 2:

	printf("Carta 2: \n");
	printf("Estado: %c \n", estado2);
	printf("Código da Carta: %s \n", codigo2);
	printf("Nome da Cidade: %s \n", cidade2);
	printf("População: %d \n", populacao2);
	printf("Area: %.2f km²\n", area2);
	printf("PIB da Cidade: %.2f bilhões de reais\n", pib2);
	printf("Número de Pontos Turísticos: %d ", ponto2);
	printf("Densidade Populacional: %.2f habitantes por km²\n", densidade2);
	printf("PIB per capita: %.2f mil reais \n", pib_per_capita2);
	printf("\n");

	return 0;
}
