#include <stdio.h>
#include <string.h>

int main(){
	// Variáveis utilizados no código
	
	unsigned long int populacao1, populacao2;
	int ponto1, ponto2;
	float area1, pib1, area2, pib2;
	char estado1, estado2;
	char codigo1[4], codigo2[4], cidade1[30], cidade2[30];

	// Carta 01:

	printf("Estado: ");
	scanf(" %c", &estado1);
	printf("Codigo da carta: ");
	scanf("%3s", codigo1);
	printf("Nome da Cidade: ");
	scanf("%29s", cidade1);
	printf("Populacao: ");
	scanf("%ld", &populacao1);
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
	scanf("%ld", &populacao2);
	printf("Area: ");
	scanf("%f", &area2);
	printf("PIB da Cidade: ");
	scanf("%f", &pib2);
	printf("Numero dos Pontos Turisticos: ");
	scanf("%d", &ponto2);
	printf("\n");

	// Cálculo da densidade populacional para as cartas
	float densidade1 = populacao1 / area1; 
	float densidade2 = populacao2 / area2;

	// Cálculo do PIB per capita para as cartas
	float pib_per_capita1 = (pib1 * 1000) / populacao1; // Convertendo PIB de bilhões para milhões e dividindo pela população
	float pib_per_capita2 = (pib2 * 1000) / populacao2; // Convertendo PIB de bilhões para milhões e dividindo pela população

	// Calcular o Super Poder
    float super_power1 = (float) populacao1 + area1 + pib1 + (float) ponto1 + (1 / densidade1) + pib_per_capita1;
    float super_power2 = (float) populacao2 + area2 + pib2 + (float) ponto2 + (1 / densidade2) + pib_per_capita2;

	// Apresentação da Carta 1

	printf("Carta 1: \n");
	printf("Estado: %c \n", estado1);
	printf("Código da Carta: %s \n", codigo1);
	printf("Nome da Cidade: %s \n", cidade1);
	printf("População: %ld \n", populacao1);
	printf("Area: %.2f km²\n", area1);
	printf("PIB da Cidade: %.2f milhões de reais\n", pib1);
	printf("Número de Pontos Turísticos: %d \n", ponto1);
	printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
	printf("PIB per capita: %.2f mil reais\n", pib_per_capita1);
	printf("\n");
	
	// Apresentação da Carta 2:

	printf("Carta 2: \n");
	printf("Estado: %c \n", estado2);
	printf("Código da Carta: %s \n", codigo2);
	printf("Nome da Cidade: %s \n", cidade2);
	printf("População: %ld \n", populacao2);
	printf("Area: %.2f km²\n", area2);
	printf("PIB da Cidade: %.2f milhões de reais\n", pib2);
	printf("Número de Pontos Turísticos: %d \n", ponto2);
	printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
	printf("PIB per capita: %.2f mil reais \n", pib_per_capita2);
	printf("\n");

	// Comparação das cartas
	printf("Comparação das Cartas: \n\n");
	
	// Comparação de População
	printf("População: %s (%ld vs %ld)\n", 
		populacao1 > populacao2 ? "Carta 1 vence!" : populacao2 > populacao1 ? "Carta 2 vence!" : "Empate!",
		populacao1, populacao2);
	
	// Comparação de Área
	printf("Área: %s (%.2f vs %.2f)\n", 
		area1 > area2 ? "Carta 1 vence!" : area2 > area1 ? "Carta 2 vence!" : "Empate!",
		area1, area2);
	
	// Comparação de PIB
	printf("PIB: %s (%.2f vs %.2f)\n", 
		pib1 > pib2 ? "Carta 1 vence!" : pib2 > pib1 ? "Carta 2 vence!" : "Empate!",
		pib1, pib2);
	
	// Comparação de Pontos Turísticos
	printf("Pontos Turísticos: %s (%d vs %d)\n", 
		ponto1 > ponto2 ? "Carta 1 vence!" : ponto2 > ponto1 ? "Carta 2 vence!" : "Empate!",
		ponto1, ponto2);
	
	// Comparação de Densidade Populacional (menor é melhor)
	printf("Densidade Populacional: %s (%.2f vs %.2f)\n", 
		densidade1 < densidade2 ? "Carta 1 vence!" : densidade2 < densidade1 ? "Carta 2 vence!" : "Empate!",
		densidade1, densidade2);
	
	// Comparação de PIB per capita
	printf("PIB per capita: %s (%.2f vs %.2f)\n", 
		pib_per_capita1 > pib_per_capita2 ? "Carta 1 vence!" : pib_per_capita2 > pib_per_capita1 ? "Carta 2 vence!" : "Empate!",
		pib_per_capita1, pib_per_capita2);
	
	// Comparação de Super Poder
	printf("Super Poder: %s (%.2f vs %.2f)\n", 
		super_power1 > super_power2 ? "Carta 1 vence!" : super_power2 > super_power1 ? "Carta 2 vence!" : "Empate!",
		super_power1, super_power2);
	
	printf("\n");
	
	return 0;
}
