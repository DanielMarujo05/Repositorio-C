/*Faça uma função que, dado um vetor de
números inteiros, exiba para cada um de seus
elementos a quantidade de vezes que o mesmo
aparece no vetor.
Exemplo:
Vetor = {3,5,1,3,2,5,7,3,4,7,6,1}
Saída:
3: 3 vezes
5: 2 vezes
1: 2 vezes
2: 1 vez
7: 2 vezes
4: 1 vez
6: 1 vez
*/

#include <stdio.h>
#define TAM 10
//prototipos
int aleatorio(int vetor[], int tamanho);
void vezes(int vetor[],int tamanho);
void exibir (int vetor[], int tamanho);

void main(){
	
	int vetor[TAM];
	
	aleatorio(vetor,TAM);
	exibir (vetor,TAM);
	vezes(vetor,TAM);
	
}

void vezes(int vetor[],int tamanho){
	
	int i,cont,j;
	
	for(i=0;i<tamanho;i++){
		
		cont=0;
		
		for(j=0;j<tamanho;j++){
			if(vetor[i]==j){
				cont++;
			}
		}
		printf("o numero %d aparece %d vezes no vetor \n",j,cont);
	}
}

int aleatorio(int vetor[], int tamanho)
{
	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vetor[i] = rand()%10;  
	}
}

void exibir (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}
	
	printf ("\n\n");
}
