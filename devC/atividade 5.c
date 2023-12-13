/*Desenvolver uma função que, dados um
vetor de inteiros vet e um número num,
determine se todos os valores de vet são
múltiplos de num. Caso todos sejam, o valor
1 deverá ser retornado; caso contrário, 0.*/

#include <stdio.h>
#define QUANT 10
int aleatorio(int vetor[], int tamanho);
int mult(int vetor[],int n);
void exibir (int vetor[], int tamanho);

void main(){
	
	int vet[QUANT],num,retorno;
	
	printf("insira o numero: ");
	scanf("%d",&num);
	
	aleatorio(vet,QUANT);
	retorno=mult(vet,num);
	exibir(vet,QUANT);
	
	if(retorno==1){
		printf("\ntodos os numeros sao multiplos de num");
	}
	else{
		printf("\nnem todos os numeros sao multiplos de num");
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

int mult(int vetor[],int n){
	
	int i;
	
	for(i=0;i<QUANT;i++){
		if(vetor[QUANT]%n!=0){
		return 0;
		}
	}
	return 1;	
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



