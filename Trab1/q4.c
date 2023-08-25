#include <stdio.h>
#include <stdlib.h>

int main() {
	float resto = 0;
	int valorEntradas = 0;
	int notas50 = 0;
	int notas20 = 0;
	int notas10 = 0;
	int notas5 = 0;
	int notas2 = 0;
	int moedas1 = 0;
	
	
		system("CLS");
		printf("  BEM VINDO AO MEU TRABALHO\n\nNome:\tYuri Andrade dos Anjos\nTURMA:\tTRO 5M\n\n");
	
		printf("QUAL O VALOR TOTAL DE DINHEIRO: ");
		scanf("%i", &valorEntradas);
	
		//Separar em notas de 50
		notas50 = valorEntradas/50;
		resto = valorEntradas%50;
		
		//Separar em notas de 20
		notas20 = resto/20;
		resto = (int)resto%20;
		
		//Separar em notas de 10
		notas10 = resto/10;
		resto = (int)resto%10;
		
		//Separar em notas de 5
		notas5 = resto/5;
		resto = (int)resto%5;
	
		//Separar em notas de 2
		notas2 = resto/2;
		resto = (int)resto%2;
	
		//Separar em moedas de 1
		moedas1 = resto/1;
		resto = (int)resto%1;


	system("CLS");
	printf("\n\nVALOR:\t\t %d\n", valorEntradas);
	printf("NOTAS DE 50:\t %d\n", notas50);
	printf("NOTAS DE 20:\t %d\n", notas20);
	printf("NOTAS DE 10:\t %d\n", notas10);
	printf("NOTAS DE 05:\t %d\n", notas5);
	printf("NOTAS DE 02:\t %d\n", notas2);
	printf("NOTAS DE 01:\t %d\n", moedas1);
	printf("RESTOU:\t\t %.2f\n\n\n\n", resto);
	
}