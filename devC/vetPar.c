/*Elaborar uma função que, dado um conjunto de
300 valores inteiros, distribua-os em 2 vetores
conforme forem pares ou ímpares.*/

#include <stdio.h>
#define TAM 15

//prototipos

int aleatorio(int vetor[], int tamanho);
void parImpar(int vetP[],int vetI[],int vetor[],int tamanho);
void exibir (int vetor[],int tamanho);
void exibirPar (int vetP[],int vetI[], int tamanho);

void main(){
	
	int vetP[TAM],vetI[TAM],vetor[TAM];
	
	aleatorio(vetor,TAM);
	exibir(vetor,TAM);
	parImpar(vetP,vetI,vetor,TAM);
	exibirPar(vetP,vetI,TAM);
	
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

void parImpar(int vetP[],int vetI[],int vetor[],int tamanho){
	
	int i;
	
	for(i=0;i<tamanho;i++){
		
		vetP[i]=0;
		vetI[i]=0;
		
		if(vetor[i]%2==0){
			vetP[i]=vetor[i];
		}
		else{
			vetI[i]=vetor[i];
		}
	}
}


void exibir (int vetor[], int tamanho)
{

	int i;
	
	printf ("\n\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);

	}
	
	
}

void exibirPar (int vetP[],int vetI[], int tamanho){
	
	int i;
	
	printf ("\n\nVetor par: ");
	
	for (i=0;i<tamanho;i++){
		if(vetP[i]!=0){
		printf("%d ",vetP[i]);
		}
	}
	
	printf ("\n\nVetor impar:");
	
	for (i=0;i<tamanho;i++){
		if(vetI[i]!=0){
		printf("%d ",vetI[i]);
		}
	}
}
