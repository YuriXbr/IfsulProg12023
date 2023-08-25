#include <stdio.h>
#include <stdlib.h>

int main() {
	float consumo = 0; // km/L
	float d = 0; // metros
	float maxD = 0;
	float litrosProPrimeiro = 0;
	int voltas = 0;
	int reabastecimento = 0;
	
	
		system("CLS");
		printf("  BEM VINDO AO MEU TRABALHO\n\nNome:\tYuri Andrade dos Anjos\nTURMA:\tTRO 5M\n\n");
		
		printf("COMPRIMENTO DA PISTA(metros): ");
		scanf("%f", &d);
		
		printf("NUMERO TOTAL DE VOLTAS: ");
		scanf("%i", &voltas);
		
		printf("NUMERO DE REABASTECIMENTOS DESEJADOS: ");
		scanf("%i", &reabastecimento);
		
		printf("CONSUMO DE COMBUSTIVEL DO CARRO: ");
		scanf("%f", &consumo);
		
		float dkm = d/1000;
		
		maxD = (dkm*voltas);
		
		litrosProPrimeiro = maxD/(consumo*(reabastecimento+1));
		
		
	system("cls");
	printf("\n\nComprimento da pista em metros:\t\t %.2f", d);
	printf("\nComprimento da pista em kms:\t\t %.2f", dkm);
	printf("\nNumero de voltas na pista:\t\t %i", voltas);
	printf("\nNumero de reabastecimentos totais:\t %i", reabastecimento);
	printf("\nNumero do consumo do carro em litros:\t %.2f", consumo);
	printf("\nDistancia maxima percorrida pelo carro:\t %.2f", maxD);
	printf("\n---------------------------------------\n");
	printf("LITROS ATE O PRIMEIRO ABASTECIMENTO:\t %.2f\n\n\n\n", litrosProPrimeiro);
	
}