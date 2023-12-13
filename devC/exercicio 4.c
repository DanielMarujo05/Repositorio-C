/*Desenvolver uma função que determine o
número de ocorrências de um número inteiro x
em um vetor A.*/

#include <stdio.h>
#define TAM 10
//prototipos
void ocorrencias(int vet[],int tamanho,int n,int *quant);
int aleatorio(int vet[], int tamanho);
void exibir (int vetor[], int tamanho);

void main(){
	
	int n,vet[TAM],quant;
	
	
	
	aleatorio(vet,TAM);
	exibir (vet,TAM);
	
	printf("\ninsira um valor para N: ");
	scanf("%d",&n);
	
	ocorrencias(vet,TAM,n,&quant);
	
	printf("o numero de ocorrencias e: %d",quant);
	
	
}

void ocorrencias(int vet[],int tamanho,int n,int *quant){
	
	int i;
	*quant=0;
	
	for(i=0;i<tamanho;i++){
		
		if(n==vet[i]){
			(*quant)++;
		}
	}
}

int aleatorio(int vet[], int tamanho)
{
	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vet[i] = rand()%10;  
	}
}

void exibir (int vetor[], int tamanho)
{

	int i;
	
	printf ("\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}

}

