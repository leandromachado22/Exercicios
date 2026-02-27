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

	// Comparação das cartas e determinação do vencedor

	char atributo_escolhido[30] = "Populacao"; // Atributo escolhido para comparação (pode ser alterado conforme necessário)
	
	if (strcmp(atributo_escolhido, "Populacao") == 0) {
		printf("Comparação de cartas (Atributo: População)\n");
		printf("Carta 1 - %s: %ld habitantes\n", cidade1, populacao1);
		printf("Carta 2 - %s: %ld habitantes\n", cidade2, populacao2);

		if (populacao1 > populacao2) {
			printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
		} else if (populacao2 > populacao1) {
			printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
		} else {
			printf("Empate! Ambas as cartas têm a mesma população.\n");
		}
	} else if (strcmp(atributo_escolhido, "Area") == 0) {
		printf("Comparação de cartas (Atributo: Área)\n");
		printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
		printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);

		if (area1 > area2) {
			printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
		} else if (area2 > area1) {
			printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
		} else {
			printf("Empate! Ambas as cartas têm a mesma área.\n");
		}
	} else if (strcmp(atributo_escolhido, "PIB") == 0) {
		printf("Comparação de cartas (Atributo: PIB)\n");
		printf("Carta 1 - %s: %.2f milhões de reais\n", cidade1, pib1);
		printf("Carta 2 - %s: %.2f milhões de reais\n", cidade2, pib2);

		if (pib1 > pib2) {
			printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
		} else if (pib2 > pib1) {
			printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
		} else {
			printf("Empate! Ambas as cartas têm o mesmo PIB.\n");
		}
	} else if (strcmp(atributo_escolhido, "Densidade") == 0) {
		printf("Comparação de cartas (Atributo: Densidade Populacional)\n");
		printf("Carta 1 - %s: %.2f habitantes/km²\n", cidade1, densidade1);
		printf("Carta 2 - %s: %.2f habitantes/km²\n", cidade2, densidade2);

		if (densidade1 < densidade2) {
			printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
		} else if (densidade2 < densidade1) {
			printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
		} else {
			printf("Empate! Ambas as cartas têm a mesma densidade populacional.\n");
		}
	} else if (strcmp(atributo_escolhido, "PIB per capita") == 0) {
		printf("Comparação de cartas (Atributo: PIB per capita)\n");
		printf("Carta 1 - %s: %.2f mil reais\n", cidade1, pib_per_capita1);
		printf("Carta 2 - %s: %.2f mil reais\n", cidade2, pib_per_capita2);

		if (pib_per_capita1 > pib_per_capita2) {
			printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
		} else if (pib_per_capita2 > pib_per_capita1) {
			printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
		} else {
			printf("Empate! Ambas as cartas têm o mesmo PIB per capita.\n");
		}
	} else {
		printf("Atributo escolhido para comparação não é válido.\n");
	}
	printf("\n");
	
	return 0;
}
