#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
	char names[100][36];
	float nota1[50];
	float nota2[50];
	float media[50];
	int i;
	int al;
	int type;
	int errorlogged = 0;
	
	printf("Quantos alunos temos? ");
	scanf("%d", &al);
	
	system("cls");
	printf("Qual o tipo de soma\n\nOPC\tDescricao \n1\tSoma Simples\n2\tBase2\n\nDigite o valor da opcao: ");
	scanf("%d", &type);
	
	if (type >2) {
		system("cls");
		printf("Temos apenas 2 modos, base2 e soma simples, escolha uma opcao valida:\n\n");
		printf("Qual o tipo de soma\n\nOPC\tDescricao \n1\tSoma Simples\n2\tBase2\n\nDigite o valor da opcao: ");
		scanf("%d", &type);
	}
	
	if (al >50) {
		printf("Mais de 50 alunos? Que doidera! Mas infelizmente nao suportamos essa quantia.\n");
		system("pause");
		return 0;
	}

	getchar();
		
	for (i = 1; i<=al; i++) {
		
		system("cls");
		printf("INFORMACOES ALUNO %d  DE  %d\n", i, al);
		
		
		printf("\nInforme o nome do aluno: ");
		fgets(names[i-1], sizeof(names[i-1]), stdin);
        names[i-1][strcspn(names[i-1], "\n")] = '\0'; // Remover o caractere de nova linha
	
		// Limitar o nome a 35 caracteres
        int nome_len = strlen(names[i-1]);
        if (nome_len < 35) {
            for (int j = nome_len; j < 36; j++) {
                names[i-1][j] = ' ';
            }
            names[i-1][35] = '\0'; // Certificar-se de que o nome tenha 35 caracteres
        } else if (nome_len > 35) {
            names[i-1][35] = '\0';
        }

		
		printf("\nInforme a primeira nota para o aluno: ");
		scanf("%f", &nota1[i-1]);
		
		
		printf("\nInforme a segunda nota para o aluno: ");
		scanf("%f", &nota2[i-1]);
		
		if(type == 2) {
		media[i-1] = (nota1[i-1]+nota2[i-1])/2;
		} else if (type == 1) {
			media[i-1] = nota1[i-1]+nota2[i-1];	
		} else {
			if (errorlogged == 0) {
			printf("\nErro no sistema de media, os valores serao de media serao 0 para todos alunos, para evitar desinformacao. \nFaca o calculo manualmente\n");
			errorlogged = 1;
			system("pause");
			}
			media[i-1] = 0;
		}
		getchar();
	}
	
	system("cls");
	printf("\nTabela de notas\n\n");
	printf("Aluno\t\t\t\t\tNota1\tNota2\tMedia\n");
	for (i=0; i<al; i++) {
		int aluno = i+1;
		printf("%s\t%.2f\t%.2f\t%.2f\n", names[i],nota1[i],nota2[i],media[i]);
	}
		if(type == 1) {
			printf("\nMedia realizada com Soma Simples");
		} else if(type == 2) {
			printf("\nMedia realizada com base2");
		} else {
			printf("\nMedia com erro, valor sera 0");
		}
	
	

}
