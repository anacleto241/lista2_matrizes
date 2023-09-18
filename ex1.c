#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"


void valorMaior(int m[][100],int linhas,int cols){
	int maiorValor=0;
	int i, j;
		for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++)
		  if(m[i][j]>maiorValor){
		  	maiorValor=m[i][j];
		  }
	}
	printf("O maior valor digitado foi: %d",maiorValor);
}

int main(){
	int m[100][100], linhas, cols;
	
	printf("Digite a quantidade de linhas da matriz: ");
	scanf("%d",&linhas);
	printf("Digite a quantidade de colunas da matriz: ");
	scanf("%d",&cols);
	
	printf("Digite os elementos da matriz: ");
	leiaMatriz(m,linhas,cols);
	printf("\nO maior valor digitado foi: ");
	valorMaior(m, linhas, cols);
	
	return 0;
}
