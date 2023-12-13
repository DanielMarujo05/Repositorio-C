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
6: 1 vez*/
#include <stdio.h>
#define TAM 20

//prototipo
int aleatorio(int vetor[], int tamanho);
void vezes(int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

void main(){
	
	int vet[TAM];
	
	aleatorio(vet,TAM);
	exibir (vet,TAM);
	vezes(vet,TAM);
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

void vezes(int vetor[], int tamanho)
{
    int i, j, contador;

    printf("\nocorrencias: \n");

    for (i = 0; i < tamanho; i++)
    {
        contador = 0;
        for (j = 0; j < tamanho; j++)
        {
            if (vetor[j] == vetor[i])
            {
                contador++;
            }
        }
        printf("%d: %d vezes\n", vetor[i], contador);
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
