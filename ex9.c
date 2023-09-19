#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"

void multiplicaMatriz(int m[][100], int n[][100], int mult[][100], int linhasM, int colsM, int colsN) {
    int i, j, k;
	for (i = 0; i < linhasM; i++) {
        for (j = 0; j < colsN; j++) {
            mult[i][j] = 0;
            for (k = 0; k < colsM; k++) {
                mult[i][j] += m[i][k] * n[k][j];
            }
        }
    }
}
	int main() {
    int m[100][100], n[100][100], mult[100][100];

    printf("Digite a matriz (2x3):\n");
    leiaMatriz(m, 2, 3);

    printf("Digite a matriz (3x2):\n");
    leiaMatriz(n, 3, 2);

    multiplicaMatriz(m, n, mult, 2, 3, 2);

    printf("Matriz Produto:\n");
    printMatriz(mult, 2, 2);

    return 0;
}
