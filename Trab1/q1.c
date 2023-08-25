#include <stdio.h>
#include <stdlib.h>

int main() {
	float kwh = 0;
	float valor = 0;
	float valorKwh = 0;
	int horaI = 0;
	int horaF = 0;
	int deltaTime = 0;
	int pot = 0;
	
	
		system("CLS");
		printf("  BEM VINDO AO MEU TRABALHO\n\nNome:\tYuri Andrade dos Anjos\nTURMA:\tTRO 5M\n\n");
	
		printf("Hora voce entrou no banho: ");
		scanf("%i", &horaI);
		
		printf("Hora voce saiu do banho: ");
		scanf("%i", &horaF);
		
		printf("Potencia do seu chuveiro (watt): ");
		scanf("%i", &pot);
		
		printf("Valor do kwh na sua casa: ");
		scanf("%f", &valorKwh);
		
		if(horaF == horaI) {
			deltaTime = 1;
			
		}else if(horaF > horaI) {
			deltaTime = horaF - horaI;
			
		} else {
			deltaTime = (24 - horaI) + horaF;
		
		}
		
		kwh = (pot * deltaTime)/1000;
		valor = valorKwh*kwh;
	
	
	system("cls");
	printf("\n\nHorario de entrada:\t %i horas\n", horaI);
	printf("Horario de saida:\t %i horas\n", horaF);
	printf("Tempo total de banho:\t %i horas\n\n", deltaTime);
	printf("Potencia do Chuveiro:\t %i watt\n", pot);
	printf("Consumo de energia:\t %0.2f kwh\n", kwh);
	printf("Valor da energia:\t R$: %0.2f\n", valorKwh);
	printf("---------------------------------------\n");
	printf("Custo total do banho:\t R$: %0.2f\n\n\n\n", valor);
	
}