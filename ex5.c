#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"


void diagonalSecundaria(int m[][100], int linhas, int cols){
	int i, j;
		for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			if(i+j==cols-1){
			printf("%3d |",m[i][j]);	
			}else{
				printf("    |");
			}
		}
	  printf("\n");	   
	}
}

int main(){
	int m[100][100], linhas, cols, x;
	
	printf("Digite a quantidade de linhas da matriz: ");
	scanf("%d",&linhas);
	printf("Digite a quantidade de colunas da matriz: ");
	scanf("%d",&cols);
	
	geraMatriz(m,linhas,cols);
	
	printf("\nMatriz: \n");
	printMatriz(m,linhas, cols);
	
	printf("\nA diagonal secundaria da matriz e: \n");
	diagonalSecundaria(m, cols, linhas);
}
