#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"


void valorMenor(int m[][100],int linhas,int cols){
	int menorValor=m[1][1];
	int i, j;
		for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++)
		  if(m[i][j]<menorValor){
		  	menorValor=m[i][j];
		  }
	}
	printf("O menor valor digitado foi: %d",menorValor);
}

int main(){
	int m[100][100], linhas, cols;
	
	printf("Digite a quantidade de linhas da matriz: ");
	scanf("%d",&linhas);
	printf("Digite a quantidade de colunas da matriz: ");
	scanf("%d",&cols);
	
	printf("Digite os elementos da matriz: ");
	leiaMatriz(m,linhas,cols);
	printf("\nO menor valor digitado foi: ");
	valorMenor(m, linhas, cols);
	
	return 0;
	}
