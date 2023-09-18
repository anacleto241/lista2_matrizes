#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"


void multiplicaMatriz(int m[][100], int x, int linhas, int cols){
	int i, j, cont;
			for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			printf("%3d |",m[i][j]*x);	
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
	
	printf("Digite um valor inteiro para multiplicacao da matriz: ");
	scanf("%d",&x);
	
	geraMatriz(m,linhas,cols);
	
	printf("\nMatriz: \n");
	printMatriz(m,linhas, cols);
	
	printf("\n\nA matriz multiplicada por %d e igual a: \n",x);
	multiplicaMatriz(m, x, cols, linhas);
}
