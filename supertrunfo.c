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

	// Menu interativo para escolher dois atributos a serem comparados
	printf("\n=== MENU ===\n");
	printf("1. Mostrar informações sobre os países\n");
	printf("2. População\n");
	printf("3. Área\n");
	printf("4. PIB\n");
	printf("5. Pontos Turísticos\n");
	printf("6. Densidade Populacional\n");
	printf("0. Sair do jogo\n");
	printf("\n");

	int atributo1, atributo2;
	int pontos1 = 0, pontos2 = 0;

	printf("Escolha o PRIMEIRO atributo para comparar: ");
	scanf("%d", &atributo1);

	if(atributo1 == 0){
		printf("Saindo do jogo... \n");
		return 0;
	}

	printf("Escolha o SEGUNDO atributo para comparar (diferente do primeiro): ");
	scanf("%d", &atributo2);

	if(atributo2 == 0){
		printf("Saindo do jogo... \n");
		return 0;
	}

	if(atributo1 == atributo2){
		printf("Os atributos devem ser diferentes! \n");
		return 0;
	}

	// Exibir os atributos escolhidos e os nomes dos países para referência
	printf("Nome do País 1: %s \n", pais1);
	printf("Nome do País 2: %s \n", pais2);

	printf("Atributo 1 escolhido: %d \n", atributo1);
	printf("Atributo 2 escolhido: %d \n", atributo2);

	// Função auxiliar para comparar atributos
	for(int i = 0; i < 2; i++){
		int atributo = (i == 0) ? atributo1 : atributo2;

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
				printf("\n=== COMPARAÇÃO %d: POPULAÇÃO ===\n", i+1);
				printf("População da Carta 1: %ld \n", populacao1);
				printf("População da Carta 2: %ld \n", populacao2);

				if(populacao1 > populacao2){
					printf("Carta 1 é a vencedora nesta rodada! \n");
					pontos1++;
				} else if(populacao2 > populacao1){
					printf("Carta 2 é a vencedora nesta rodada! \n");
					pontos2++;
				} else {
					printf("Empate nesta rodada! \n");
				}
				break;
			case 3: // Comparar por Área
				printf("\n=== COMPARAÇÃO %d: ÁREA ===\n", i+1);
				printf("Área da Carta 1: %.2f km²\n", area1);
				printf("Área da Carta 2: %.2f km²\n", area2);

				if(area1 > area2){
					printf("Carta 1 é a vencedora nesta rodada! \n");
					pontos1++;
				} else if(area2 > area1){
					printf("Carta 2 é a vencedora nesta rodada! \n");
					pontos2++;
				} else {
					printf("Empate nesta rodada! \n");
				}
				break;
			case 4: // Comparar por PIB
				printf("\n=== COMPARAÇÃO %d: PIB ===\n", i+1);
				printf("PIB da Carta 1: %.2f bilhões de reais\n", pib1);
				printf("PIB da Carta 2: %.2f bilhões de reais\n", pib2);

				if(pib1 > pib2){
					printf("Carta 1 é a vencedora nesta rodada! \n");
					pontos1++;
				} else if(pib2 > pib1){
					printf("Carta 2 é a vencedora nesta rodada! \n");
					pontos2++;
				} else {
					printf("Empate nesta rodada! \n");
				}
				break;
			case 5: // Comparar por Pontos Turísticos
				printf("\n=== COMPARAÇÃO %d: PONTOS TURÍSTICOS ===\n", i+1);
				printf("Pontos Turísticos da Carta 1: %d\n", ponto1);
				printf("Pontos Turísticos da Carta 2: %d\n", ponto2);

				if(ponto1 > ponto2){
					printf("Carta 1 é a vencedora nesta rodada! \n");
					pontos1++;
				} else if(ponto2 > ponto1){
					printf("Carta 2 é a vencedora nesta rodada! \n");
					pontos2++;
				} else {
					printf("Empate nesta rodada! \n");
				}
				break;
			case 6: // Comparar por Densidade Populacional
				printf("\n=== COMPARAÇÃO %d: DENSIDADE POPULACIONAL ===\n", i+1);
				printf("Densidade Populacional da Carta 1: %.2f habitantes/km²\n", densidade1);
				printf("Densidade Populacional da Carta 2: %.2f habitantes/km²\n", densidade2);

				if(densidade1 < densidade2){
					printf("Carta 1 é a vencedora nesta rodada! \n");
					pontos1++;
				} else if(densidade2 < densidade1){
					printf("Carta 2 é a vencedora nesta rodada! \n");
					pontos2++;
				} else {
					printf("Empate nesta rodada! \n");
				}
				break;
			default:
				printf("Atributo inválido. \n");
		}
	}

	printf("\n=== RESULTADO FINAL ===\n");

	printf("Carta 1 (%s): %d ponto(s)\n", pais1, pontos1);
	printf("Carta 2 (%s): %d ponto(s)\n", pais2, pontos2);

	if(pontos1 > pontos2){
		printf("VENCEDOR: Carta 1 (%s)! \n", pais1);
	} else if(pontos2 > pontos1){
		printf("VENCEDOR: Carta 2 (%s)! \n", pais2);
	} else {
		printf("EMPATE GERAL! \n");
	}

	printf("\n");
	
	return 0;
}
