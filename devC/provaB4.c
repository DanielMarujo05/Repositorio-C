/*Questão 04 [2,5 pontos]:
Desenvolver uma função que, dado um vetor de
inteiros vet e um número inteiro n, desloque para o
início do vetor todos os valores inferiores ou iguais a
n e para o final, os maiores do que n.
Exemplo:
vet 8 1 3 6 4 7 2
0 1 2 3 4 5 6
 n = 5
vet 1 3 4 2 8 6 7
0 1 2 3 4 5 6
Notas:
iii. A função deverá retornar a posição (do vetor alterado)
do primeiro valor maior do que n. Caso este não
exista, a função retornará o valor -1.*/

#include <stdio.h>
#define TAM 10
//prototipos
int aleatorio(int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);
int ordenar(int vetor[],int tamanho,int n);


void main(){
	
	int vet[TAM],n;
	
	
	
	aleatorio(vet,TAM);
	exibir (vet,TAM);
	
	printf("\ninsira um numero: ");
	scanf("%d",&n);
	
	ordenar(vet,TAM,n);
	exibir (vet,TAM);
	
}

int ordenar(int vetor[],int tamanho,int n){
	
	int i,j,vetAux[tamanho],posMaior;
	
	for(i=0;i<tamanho;i++){
		
		if(vetor[i]<=n){
				
				vetAux[j]=vetor[i];
				
				vetor[i]=99999;
				
				j++;
		}
		else {
            if (posMaior == -1){
                posMaior = j;
            }
            vetAux[tamanho - 1] = vetor[i];
            tamanho--;
        }
    }

    for (i = 0; i < j; i++) {
        vetor[i] = vetAux[i];
    }

    return posMaior;
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
