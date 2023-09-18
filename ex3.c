#include<stdio.h>
#include<stdlib.h>
#include"biblioteca.h"


void comparaValor(int m[][100], int x, int linhas, int cols){
	int i, j, cont;
		for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++)
		  if(m[i][j]==x){
		  	cont++;
		  }
	}
	printf("\n\nO valor %d se repete %d vezes na matriz: ",x,cont);
}

int main(){
	int m[100][100], linhas, cols, x;
	
	printf("Digite a quantidade de linhas da matriz: ");
	scanf("%d",&linhas);
	printf("Digite a quantidade de colunas da matriz: ");
	scanf("%d",&cols);
	
	printf("Digite um valor inteiro para comparacao: ");
	scanf("%d",&x);
	
	printf("Digite os elementos da matriz: ");
	leiaMatriz(m,linhas,cols);
	
	printf("\nMatriz: \n");
	printMatriz(m,linhas, cols);
	
	comparaValor(m, x, cols, linhas);
}
