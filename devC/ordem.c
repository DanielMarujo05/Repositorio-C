/*Implementar uma função que, dado um vetor
de reais, troque o 1? e o 2? elementos, em
seguida o 3? e o 4? elementos e assim
sucessivamente, até se chegar ao final do vetor.*/

#include <stdio.h>
#define TAM 15

//prototipos
int aleatorio(int vetor[], int tamanho);
void ordem(int vetor[],int tamanho);
void exibir (int vetor[], int tamanho);

void main(){
	
	int vetor[TAM];
	
	aleatorio(vetor,TAM);
	exibir (vetor,TAM);
	ordem(vetor,TAM);
	exibir (vetor,TAM);
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

void ordem(int vetor[],int tamanho){
	
	int auxiliar=0,i;
	
	for (i = 0; i < tamanho - 1; i += 2) {
        
		auxiliar = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = auxiliar;
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
