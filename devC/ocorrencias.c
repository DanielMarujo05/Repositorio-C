/*Desenvolver uma função que determine o
número de ocorrências de um número inteiro x
em um vetor A.*/

#include <stdio.h>
#define TAM 50

//prototipos
int aleatorio(int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

void main(){
	
	int vetor[TAM],numero,totalOcorrencias;
	
	aleatorio(vetor,TAM);
	exibir(vetor,TAM);
		
	printf("\n\ninsira o numero desejado: ");
	scanf("%d",&numero);
	
	totalOcorrencias=ocorrencias(vetor,TAM,numero);
	
	printf("o total de ocorrencias do numero %d foi: %d ",numero,totalOcorrencias);
	
}

int aleatorio(int vetor[], int tamanho)
{
	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vetor[i] = rand()%10+1;  
	}
}

int ocorrencias(int vetor[],int tamanho,int numero){
	
	int contOcorrencias=0,i;
	
	for(i=0;i<tamanho;i++){
		if(vetor[i]==numero){
			contOcorrencias++;
		}
	}
	return contOcorrencias;
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
