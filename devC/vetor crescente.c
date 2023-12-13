/*Pede-se a implementação de uma função que,
dado um vetor contendo números reais,
determine se o mesmo encontra-se ordenado
de forma crescente.*/

#include <stdio.h>
#define TAM 15

//prototipos
int aleatorio(int vetor[], int tamanho);
void crescente(int vetor[],int tamanho);
void exibir (int vetor[], int tamanho);

void main(){
	
	int vetor[TAM];
	
	aleatorio(vetor,TAM);
	exibir (vetor,TAM);
	crescente(vetor,TAM);

}

void crescente(int vetor[],int tamanho){
	
	int i,cresce=1,decresce=0;
	
	for(i=0;i<tamanho;i++){
		
		if(vetor[i]>vetor[i+1]){
			decresce++;
		}
		else{
			cresce++;
		}
	}
		if(decresce>1){
			printf("\no vetor nao e crescente!!");
		}
		
		if(cresce==tamanho){
			printf("\no vetor e crescente!!");
		}
}

int aleatorio(int vetor[], int tamanho)
{
	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vetor[i] = rand()%100;  
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
