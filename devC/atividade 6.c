/*Implementar uma função que, dados dois
vetores vetA e vetB contendo números
reais, compare elementos da mesma ordem
dos vetores (ou seja, compare o 1o valor de
vetA com o 1o de vetB, o 2o de vetA com o
2o de vetB e, assim, sucessivamente) e
mantenha em vetA os menores valores
comparados (e, consequentemente, os
maiores ficarão em vetB).*/

#include <stdio.h>
#define QUANT 10

//prototipos
void preencherAleatorio (float vet1[],float vet2[], int tamanho);
void MaiorVet(float vet1[],float vet2[],int tamanho);
void exibir (float vet1[],float vet2[], int tamanho);

void main(){
	
	float vet1[QUANT];
	float vet2[QUANT];
	
	preencherAleatorio(vet1,vet2,QUANT);
	exibir (vet1,vet2,QUANT);
	MaiorVet(vet1,vet2,QUANT);
	exibir (vet1,vet2,QUANT);
	
}


void preencherAleatorio (float vet1[],float vet2[], int tamanho)
{

	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vet1[i] = rand()%100 + 1; 
		vet2[i] = rand()%100 + 1; 
	}
}

void MaiorVet(float vet1[],float vet2[],int tamanho){
	
	int i,termo=0;
	
	for(i=0;i<tamanho;i++){
		if(vet1[i]>vet2[i]){
			termo=vet2[i];
			vet2[i]=vet1[i];
			vet1[i]=termo;
		}
	}
}

void exibir (float vet1[],float vet2[], int tamanho)
{
	
	int i;
	
	printf ("\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%.1f ", vet1[i]);

	}
	printf ("\nVetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf("%.1f ",vet2[i]);
	}
	
	printf ("\n\n");
}
