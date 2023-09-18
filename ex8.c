#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"

void somaMatriz(int m1[][100], int m2[][100], int linhas, int cols){
	int i, j, m3[100][100];
	printf("\nMatriz 1\n");
	printMatriz(m1,linhas, cols);
	printf("\nMatriz 2\n");
	printMatriz(m2,linhas, cols);
		for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
		m3[i][j]=m1[i][j]+m2[i][j];	
		}   
	}
	printf("\nMatriz resultante da soma: \n");
	printMatriz(m3,linhas,cols);
	printf("\n");	
		}

void subtraiMatriz(int m1[][100], int m2[][100], int linhas, int cols){
	int i, j, m3[100][100];
	printf("\nMatriz 1\n");
	printMatriz(m1,linhas, cols);
	printf("\nMatriz 2\n");
	printMatriz(m2,linhas, cols);
		for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
		m3[i][j]=m2[i][j]-m1[i][j];
		}  
	}
	printf("\nMatriz 2 subtraida da Matriz 1\n");
	printMatriz(m3, linhas, cols);	 
}

void adicionaConstante(int m1[][100], int m2[][100], int linhas, int cols, int constante){
	int i, j;
	printf("\nMatriz 1\n");
	printMatriz(m1,linhas, cols);
	printf("\nMatriz 2\n");
	printMatriz(m2,linhas, cols);
		for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			m1[i][j]=m1[i][j] + constante;
			m2[i][j]=m2[i][j] + constante;
		}
	}
	printf("\nMatrizes somadas as constantes: \n");
	printf("\nMatriz 1\n");
	printMatriz(m1,linhas, cols);
	printf("\nMatriz 2\n");
	printMatriz(m2,linhas, cols); 
}

void imprimirMatrizes(int m1[][100], int m2[][100], int linhas, int cols, int constante){
	printf("\nMatriz 1\n");
	printMatriz(m1,linhas, cols);
	printf("\nMatriz 2\n");
	printMatriz(m2,linhas, cols);
}



int main(){
	int m1[100][100], m2[100][100], linhas, cols, constante;
	char comando;
	
	printf("Digite a quantidade de linhas das matrizes: ");
	scanf("%d",&linhas);
	printf("Digite a quantidade de colunas da matrizes: ");
	scanf("%d",&cols);

	
	geraMatriz(m1,linhas,cols);
	printf("\nAperte uma tecla para gerar a matriz!\n");
	getch();
	geraMatriz(m2,linhas,cols);
	printf("\nDigite em letra minuscula, a opcao desejada: ");
	printf("\n(a) somar as duas matrizes\n(b) subtrair a primeira matriz da segunda\n(c) adicionar uma constante as duas matrizes\n(d) imprimir as matrizes\n");
	scanf(" %c", &comando);
	
	 switch (comando) {
        case 'a':
            somaMatriz(m1, m2, linhas, cols);
            break;

        case 'b':
            subtraiMatriz(m1, m2, linhas, cols);
            break;

        case 'c':
            printf("\nDigite o valor da constante para soma: ");
            scanf("%d", &constante);
            adicionaConstante(m1, m2, linhas, cols, constante);
            break;

        case 'd':
            imprimirMatrizes(m1,m2,linhas,cols,constante);
            break;

        default:
            printf("Comando inválido!\n");
    }

return 0;
}
