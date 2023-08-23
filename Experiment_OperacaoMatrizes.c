#include <stdio.h>

// Função para imprimir uma matriz
void imprimirMatriz(int matriz[][3], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Função para somar duas matrizes
void somarMatrizes(int matriz1[][3], int matriz2[][3], int resultado[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// Função para subtrair duas matrizes
void subtrairMatrizes(int matriz1[][3], int matriz2[][3], int resultado[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

// Função para multiplicar duas matrizes 3x3
void multiplicarMatrizes(int matriz1[][3], int matriz2[][3], int resultado[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void matrizTransposta(int matriz[][3], int transposta[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

void preencherMatriz(int matriz[][3], int linhas, int colunas) {
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}


int main() {
    int matriz1[3][3];
    int matriz2[3][3];
    int resultado[3][3];
    int transposta[3][3];

    printf("Preencha a Matriz 1:\n");
    preencherMatriz(matriz1, 3, 3);

    printf("\nPreencha a Matriz 2:\n");
    preencherMatriz(matriz2, 3, 3);

    printf("\nMatriz 1:\n");
    imprimirMatriz(matriz1, 3, 3);

    printf("\nMatriz 2:\n");
    imprimirMatriz(matriz2, 3, 3);

    somarMatrizes(matriz1, matriz2, resultado);
    printf("\nSoma das matrizes:\n");
    imprimirMatriz(resultado, 3, 3);

    subtrairMatrizes(matriz1, matriz2, resultado);
    printf("\nSubtracao das matrizes:\n");
    imprimirMatriz(resultado, 3, 3);

    multiplicarMatrizes(matriz1, matriz2, resultado);
    printf("\nMultiplicacao das matrizes:\n");
    imprimirMatriz(resultado, 3, 3);
    
    matrizTransposta(matriz1, transposta);
    printf("\nMatriz Transposta:\n");
    imprimirMatriz(transposta, 3, 3);

    return 0;
}
