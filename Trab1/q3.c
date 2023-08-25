#include <stdio.h>
#include <stdlib.h>

int main() {
	float precoEspeto = 0;
	float precoKgCarne = 0;
	float carneNecessaria = 0;
	float vendaRecebido = 0;
	float lucro = 0;
	int espetosVendidos = 0;
	int carnePorEspeto = 200; // gramas
		
		
		system("CLS");
		printf("  BEM VINDO AO MEU TRABALHO\n\nNome:\tYuri Andrade dos Anjos\nTURMA:\tTRO 5M\n\n");

		printf("NUMERO DE ESPETOS VENDIDOS: ");
		scanf("%i", &espetosVendidos);
	
		printf("A QUANTOS REAIS CADA ESPETO FOI VENDIDO: ");
		scanf("%f", &precoEspeto);
	
		printf("PRECO DO KG DA CARNE: ");
		scanf("%f", &precoKgCarne);
	
		carneNecessaria = (espetosVendidos* carnePorEspeto)/1000;
		vendaRecebido = espetosVendidos*precoEspeto;
	
		lucro = vendaRecebido-(carneNecessaria*precoKgCarne);


	system("cls");
	printf("\n\n\bNUMERO DE ESPETOS VENDIDOS:\t %i\n", espetosVendidos);
	printf("CARNE NECESSARIA:\t\t %.2f Kg\n", carneNecessaria);
	printf("PRECO POR ESPETO:\t\t R$: %.2f\n", precoEspeto);
	printf("PRECO KG DA CARNE:\t\t R$: %.2f\n", precoKgCarne);
	printf("---------------------------------------\n");
	printf("VENDA RECEBIDO:\t\t\t R$: %.2f\n", vendaRecebido);
	printf("LUCRO DA BANCA:\t\t\t R$: %.2f\n\n\n\n", lucro);
	
}