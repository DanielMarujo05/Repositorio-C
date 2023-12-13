/*Faça uma função que, dada uma matriz M8×5 de
reais, gere a matriz Mt, sua transposta.
*/
#include <stdio.h>
void printMt(int matriz[][5],int linhas,int colunas);
void invert(int matriz[][5],int linhas,int colunas);
void main(){
	
	int matriz[8][5]={{3,6,4,2,6},
					 			{5,3,2,5,4},
					 			{4,3,2,1,5},
					 			{9,4,5,1,2},
					 			{3,2,5,6,4},
					 			{6,3,10,45,32},
					 			{11,34,32,4,5},
					 			{1,90,34,5,6}};
					 			
	printMt(matriz,8,5);
	invert(matriz,8,5);
	printf("\n\n");
	printMt(matriz,5,8);
	
	
	
}

void invert(int matriz[][5],int linhas,int colunas){
	
	int matrizT[5][8],i,j;
	
	for(i=0;i<linhas;i++){
		for(j=0;j<colunas;j++){
			matrizT[i][j]=matriz[j][i];
		}
	}
	
	for (i = 0; i < 5; i++) {
        for (j = 0; j < 8; j++) {
            matriz[i][j] = matrizT[i][j];
        }
    }
}
	



void printMt(int matriz[][5],int linhas,int colunas){

		int i,j;

	for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
        printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

