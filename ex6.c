#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"

void somaMatriz(int m1[][100], int m2[][100], int linhas, int cols){
	int i, j;
		for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			printf("%3d |",m1[i][j]+m2[i][j]);	
		}
	  printf("\n");	   
	}
}

int main(){
	int m1[100][100], m2[100][100], linhas, cols, linhas2, cols2;
	
	printf("Digite a quantidade de linhas da matriz 1: ");
	scanf("%d",&linhas);
	printf("Digite a quantidade de colunas da matriz 1: ");
	scanf("%d",&cols);
	
	printf("\nDigite a quantidade de linhas da matriz 2: ");
	scanf("%d",&linhas2);
	printf("Digite a quantidade de colunas da matriz 2: ");
	scanf("%d",&cols2);
	
	geraMatriz(m1,linhas,cols);
	printf("\nAperte uma tecla para gerar a matriz!\n");
	getch();
	geraMatriz(m2,linhas2,cols2);
	
	if(linhas+cols==linhas2+cols2){

		printf("\nMatriz 1: \n");
		printMatriz(m1, linhas, cols);
	
		printf("\nMatriz 2: \n");
		printMatriz(m2,linhas2,cols2);
	
		printf("\nA soma das matrizes e: \n");
		somaMatriz(m1, m2, cols, linhas);
	}else{
		printf("As matrizes sao de ordens diferentes, nao e possivel soma-las ");
		
		printf("\nMatriz 1: \n");
		printMatriz(m1, linhas, cols);
	
		printf("\nMatriz 2: \n");
		printMatriz(m2,linhas2,cols2);
	}

return 0;
}
