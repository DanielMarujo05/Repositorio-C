/*Dada uma matriz M de inteiros (de apenas um
algarismo), com x linhas e y colunas, desenvolver uma
função que crie um vetor V de x posições contendo, em
cada posição, as “representações numéricas” de cada
linha de M, como ilustrado no exemplo abaixo:*/

#include <stdio.h>
void RepNum(int mat[][3],int vet[],int linhas,int colunas);
void preencherMatriz(int matriz[][3], int linhas, int colunas);
void imprimirMatriz(int matriz[][3], int linhas, int colunas);

void main(){
	
	int lin,i;
	
	printf("insira a quantidade de linhas: ");
	scanf("%d",&lin);
	
	int mat[lin][3];
	int vet[lin];
	
	preencherMatriz(mat,lin,3);
	printf("\n");
	imprimirMatriz(mat,lin,3);
    RepNum(mat,vet,lin,3);
    
     for(i=0;i<lin;i++){
    	printf("\n%d\n",vet[i]);
	}
    
}
	
void RepNum(int mat[][3],int vet[],int linhas,int colunas){
	
	int i,j;
	
	for(i=0;i<linhas;i++){
		
		vet[i]=0;
		
		for(j=0;j<colunas;j++){
			
			vet[i]=vet[i]*10+mat[i][j];
			
		}	
	}
	
}

void preencherMatriz(int matriz[][3], int linhas, int colunas){
    
	int i,j;
	
	printf("Digite os elementos da matriz:\n");
    for (i=0;i<linhas;i++){
        for (j=0;j<colunas;j++) {
            scanf("%d",&matriz[i][j]);
        }
    }
}

void imprimirMatriz(int matriz[][3], int linhas, int colunas){
    
	int i,j;
	
	for (i=0;i<linhas;i++) {
        for (j= 0;j<colunas;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
