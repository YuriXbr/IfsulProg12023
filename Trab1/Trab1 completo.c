#include <stdio.h>
#include <stdlib.h>


// CÓDIGO QUESTÃO 1.
int execOne() {
	int horaI = 0;
	int horaF = 0;
	int deltaTime = 0;
	int pot = 0;
	float kwh = 0;
	float valor = 0;
	float valorKwh = 0;
	
	printf("A que horas voce entrou no banho?");
	scanf("%i", &horaI);
	
	printf("A que horas voce saiu do banho?");
	scanf("%i", &horaF);
	
	printf("Qual a potencia do seu chuveiro (watt)?");
	scanf("%i", &pot);
	
	printf("Qual o valor do kwh na sua casa?");
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
	printf("Horario de tempo total:\t %i horas\n\n", deltaTime);
	printf("Potencia do Chuveiro:\t %i watt\n", pot);
	printf("Consumo de energia:\t %0.2f kwh\n", kwh);
	printf("Valor da energia:\t R$: %0.2f\n", valorKwh);
	printf("---------------------------------------\n");
	printf("Custo total do banho:\t R$: %0.2f\n\n\n\n", valor);
	
	
	//retormo
	int c;
	printf("RETORNAR:\n [1] Executar novamente\n [qualquer] Voltar ao menu \n");
	scanf("%i", &c);
	
	
	switch(c) {
		case 1:
			system("CLS");
			execOne();
			break;
		default:
			system("CLS");
			main();
			break;
	}
};

// CÓDIGO QUESTÃO 2.
int execTwo() {
	float d = 0; // metros
	float maxD = 0;
	int voltas = 0;
	int reabastecimento = 0;
	float consumo = 0; // km/L
	float litrosProPrimeiro = 0;
	
		
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
		
		
	//retormo
	int c;
	printf("RETORNAR:\n [1] Executar novamente\n [qualquer] Voltar ao menu \n");
	scanf("%i", &c);
	
	
	switch(c) {
		case 1:
			system("CLS");
			execTwo();
			break;
		default:
			system("CLS");
			main();
			break;
	}
	
};

// CÓDIGO QUESTÃO 3.
int execThree() {
	int espetosVendidos = 0;
	float precoEspeto = 0;
	float precoKgCarne = 0;
	float carneNecessaria = 0;
	float vendaRecebido = 0;
	float lucro = 0;
	int carnePorEspeto = 200; // gramas

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


	//retormo
	int c;
	printf("RETORNAR:\n [1] Executar novamente\n [qualquer] Voltar ao menu \n");
	scanf("%i", &c);
	
	
	switch(c) {
		case 1:
			system("CLS");
			execThree();
			break;
		default:
			system("CLS");
			main();
			break;
	}
};

// CÓDIGO QUESTÃO 4.
int execFour() {
	int valorEntradas = 0;
	int notas50 = 0;
	int notas20 = 0;
	int notas10 = 0;
	int notas5 = 0;
	int notas2 = 0;
	int moedas1 = 0;
	float resto = 0;

	printf("QUAL O VALOR TOTAL DE DINHEIRO: ");
	scanf("%i", &valorEntradas);

	//Separar em notas de 50
	notas50 = valorEntradas/50;
	resto = valorEntradas%50;
	
	//Separar em notas de 20
	notas20 = resto/20;
	resto = (int)resto%20;
	
	notas10 = resto/10;
	resto = (int)resto%10;
	
	notas5 = resto/5;
	resto = (int)resto%5;

	notas2 = resto/2;
	resto = (int)resto%2;

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
	
	
	//retormo
	int c;
	printf("RETORNAR:\n [1] Executar novamente\n [qualquer] Voltar ao menu \n");
	scanf("%i", &c);
	
	
	switch(c) {
		case 1:
			system("CLS");
			execFour();
			break;
		default:
			system("CLS");
			main();
			break;
	}
};


int main() {
	
	while(1 == 1) {
	int c;
	system("CLS");
	system("color d");
	printf("  BEM VINDO AO MEU TRABALHO\n\nNome:\tYuri An******\nTURMA:\tTRO 5M\n");
	printf("\n\n----ESCOLHA QUAL EXERCICIO DESEJA VER:----\
	\n[1] CALCULAR O PRECO DO BANHO\
	\n[2] CALCULAR REABASTECIMENTOS\
	\n[3] CALCULAR BANCA DE ESPETOS\
	\n[4] CALCULAR QUANTIA DE NOTAS\
	\n[5] ENCERRAR\
	\n\n  >OPCAO: ");
	scanf("%i", &c);

	switch(c) {
		case 1:
			system("CLS");
			system("color f");
			execOne();	
			break;
		case 2:
			system("CLS");
			system("color f");
			execTwo();
			break;
		case 3:
			system("CLS");
			system("color f");
			execThree();
			break;
		case 4:
			system("CLS");
			system("color f");
			execFour();
			break;
		case 5:
			system("CLS");
			return 0;
			break;
		
		}	
	}
}