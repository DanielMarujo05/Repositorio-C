/*Desenvolver uma função recursiva que, dado
um vetor V com quant números inteiros,
determine se seus elementos estão dispostos
de maneira a representar uma progressão
aritmética.*/

#include <stdio.h>

int preencher(int vet[],int tamanho,int i);
int paRec(int vet[],int inicio,int tamanho);

void main(){
	
	int tamanho,resultado;
	
	printf("insira a quantidade de elementos: ");
	scanf("%d",&tamanho);
	
	int vet[tamanho];
	
	preencher(vet,tamanho,0);
	resultado=paRec(vet,0,tamanho);
	
	if(resultado==0){
	printf("\nnao e uma P.A!! ");
	}else{
		printf("\ne uma P.A!!");
	}
	
}

int preencher(int vet[],int tamanho,int i){
	
	int n;
	
	if(i<tamanho){
		
		printf("insira um valor: ");
		scanf("%d",&n);
		
		vet[i]=n;
		
		return preencher(vet,tamanho,i+1);
		
	}
}

int paRec(int vet[],int inicio,int tamanho){
	
	int razao=vet[1]-vet[0];
	
	if(inicio<tamanho-1){
		
		if(vet[inicio+1]-vet[inicio]==razao){
			return paRec(vet,inicio+1,tamanho);
		}else{
			return 0;
		}
		
	}	
	
	return 1;
	
}

