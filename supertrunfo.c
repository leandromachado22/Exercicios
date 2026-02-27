#include <stdio.h>
#include <string.h>

int main(){
	// Variáveis utilizados no código
	
	unsigned long int populacao1, populacao2;
	int ponto1, ponto2;
	float area1, pib1, area2, pib2;
	char estado1, estado2;
	char codigo1[4], codigo2[4], pais1[30], pais2[30];

	// Carta 01:

	printf("Estado: ");
	scanf(" %c", &estado1);
	printf("Codigo da carta: ");
	scanf("%3s", codigo1);
	printf("Nome do País: ");
	scanf("%29s", pais1);
	printf("Populacao: ");
	scanf("%ld", &populacao1);
	printf("Area: ");
	scanf("%f", &area1);
	printf("PIB do País: ");
	scanf("%f", &pib1);
	printf("Numero dos Pontos Turisticos: ");
	scanf("%d", &ponto1);
	printf("\n");
	
	// Carta 02:

	printf("Estado: ");
	scanf(" %c", &estado2);
	printf("Codigo da carta: ");
	scanf("%3s", codigo2);
	printf("Nome do País: ");
	scanf("%29s", pais2);
	printf("Populacao: ");
	scanf("%ld", &populacao2);
	printf("Area: ");
	scanf("%f", &area2);
	printf("PIB do País: ");
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

	// Menu interativo para escolher o atributo a ser comparado
	printf("\n=== MENU ===\n");
	printf("1. Mostrar informações sobre os países\n");
	printf("2. Comparar por População\n");
	printf("3. Comparar por Área\n");
	printf("4. Comparar por PIB\n");
	printf("5. Comparar por Pontos Turísticos\n");
	printf("6. Comparar por Densidade Populacional\n");
	printf("0. Sair do jogo\n");
	printf("\n");
	printf("Escolha uma opção: ");

	int atributo;
	scanf("%d", &atributo);

	switch(atributo){
		case 1: // Mostrar informações sobre os países
			printf("\n=== INFORMAÇÕES DOS PAÍSES ===\n\n");
			
			printf("Carta 1: \n");
			printf("Estado: %c \n", estado1);
			printf("Código da Carta: %s \n", codigo1);
			printf("Nome do País: %s \n", pais1);
			printf("População: %ld \n", populacao1);
			printf("Area: %.2f km²\n", area1);
			printf("PIB do País: %.2f bilhões de reais\n", pib1);
			printf("Número de Pontos Turísticos: %d \n", ponto1);
			printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
			printf("PIB per capita: %.2f mil reais\n", pib_per_capita1);
			printf("Super Poder: %.2f\n", super_power1);
			printf("\n");
			
			printf("Carta 2: \n");
			printf("Estado: %c \n", estado2);
			printf("Código da Carta: %s \n", codigo2);
			printf("Nome do País: %s \n", pais2);
			printf("População: %ld \n", populacao2);
			printf("Area: %.2f km²\n", area2);
			printf("PIB do País: %.2f bilhões de reais\n", pib2);
			printf("Número de Pontos Turísticos: %d \n", ponto2);
			printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
			printf("PIB per capita: %.2f mil reais\n", pib_per_capita2);
			printf("Super Poder: %.2f\n", super_power2);
			break;
		case 2: // Comparar por População
			printf("\nComparando por População... \n");

			printf("Nome do País 1: %s \n", pais1);
			printf("Nome do País 2: %s \n", pais2);

			printf("Atributo escolhido: População \n");
			printf("População da Carta 1: %ld \n", populacao1);
			printf("População da Carta 2: %ld \n", populacao2);

			if(populacao1 > populacao2){
				printf("Carta 1 é a vencedora! \n");
			} else if(populacao2 > populacao1){
				printf("Carta 2 é a vencedora! \n");
			} else {
				printf("Empate! \n");
			}
			break;
		case 3: // Comparar por Área
			printf("\nComparando por Área... \n");

			printf("Nome do País 1: %s \n", pais1);
			printf("Nome do País 2: %s \n", pais2);

			printf("Atributo escolhido: Área \n");
			printf("Área da Carta 1: %.2f km²\n", area1);
			printf("Área da Carta 2: %.2f km²\n", area2);

			if(area1 > area2){
				printf("Carta 1 é a vencedora! \n");
			} else if(area2 > area1){
				printf("Carta 2 é a vencedora! \n");
			} else {
				printf("Empate! \n");
			}
			break;
		case 4: // Comparar por PIB
			printf("\nComparando por PIB... \n");

			printf("Nome do País 1: %s \n", pais1);
			printf("Nome do País 2: %s \n", pais2);

			printf("Atributo escolhido: PIB \n");
			printf("PIB da Carta 1: %.2f bilhões de reais\n", pib1);
			printf("PIB da Carta 2: %.2f bilhões de reais\n", pib2);

			if(pib1 > pib2){
				printf("Carta 1 é a vencedora! \n");
			} else if(pib2 > pib1){
				printf("Carta 2 é a vencedora! \n");
			} else {
				printf("Empate! \n");
			}
			break;
		case 5: // Comparar por Pontos Turísticos
			printf("\nComparando por Pontos Turísticos... \n");

			printf("Nome do País 1: %s \n", pais1);
			printf("Nome do País 2: %s \n", pais2);

			printf("Atributo escolhido: Pontos Turísticos \n");
			printf("Pontos Turísticos da Carta 1: %d\n", ponto1);
			printf("Pontos Turísticos da Carta 2: %d\n", ponto2);

			if(ponto1 > ponto2){
				printf("Carta 1 é a vencedora! \n");
			} else if(ponto2 > ponto1){
				printf("Carta 2 é a vencedora! \n");
			} else {
				printf("Empate! \n");
			}
			break;
		case 6: // Comparar por Densidade Populacional
			printf("\nComparando por Densidade Populacional... \n");

			printf("Nome do País 1: %s \n", pais1);
			printf("Nome do País 2: %s \n", pais2);

			printf("Atributo escolhido: Densidade Populacional \n");
			printf("Densidade Populacional da Carta 1: %.2f habitantes/km²\n", densidade1);
			printf("Densidade Populacional da Carta 2: %.2f habitantes/km²\n", densidade2);

            if(densidade1 < densidade2){
				printf("Carta 1 é a vencedora! \n");
            } else if(densidade2 < densidade1){
				printf("Carta 2 é a vencedora! \n");
            } else {
				printf("Empate! \n");
            }
            break;
		case 0: // Sair do jogo
			printf("Saindo do jogo... \n");
			return 0;
			break;
		default:
			printf("Atributo inválido. Por favor, escolha um número entre 0 e 5. \n");
	}

	printf("\n");
	
	return 0;
}
