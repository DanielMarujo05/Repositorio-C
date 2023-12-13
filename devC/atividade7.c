/*Pede-se o desenvolvimento das seguintes
fun��es:
Fun��o 1: dado um vetor contendo
n�meros reais, determine a
posi��o do maior elemento
(posMaior) existente entre as
posi��es p1 e p2 do vetor,
assim como a posi��o do
menor valor (posMenor) entre
estas mesmas posi��es.


Fun��o 2: esta dever� chamar a 1a
fun��o e, com as posi��es
retornadas, trocar o conte�do
de p1 pelo conte�do de
posMenor e o de p2 pelo
conte�do de posMaior.

Nota: a fun��o main dever� chamar a
fun��o 2 (que, por sua vez, disparar�
a execu��o da 1a fun��o).*/

#include <stdio.h>
#define TAM 10

//prototipos
void preencherAleatorio (float vet[], int tamanho);
void maiorEntre(float vet[], int tamanho,int p1, int p2,int *maior,int *menor);
void exibir (float vet[],int tamanho);
void trocas(float vet[],int tamanho,int p1,int p2,int maior,int menor);

void main(){
	
	float vet[TAM]; 
	int p1,p2,maior,menor;
	
	printf("insira a posicao p1 (0 a 9): ");
	scanf("%d",&p1);
	printf("insira a posicao p2 (0 a 9): ");
	scanf("%d",&p2);
	
	preencherAleatorio (vet,TAM);
	exibir(vet,TAM);
	trocas(vet,TAM,p1,p2,maior,menor);
}

//fun��o 2:
void trocas(float vet[],int tamanho,int p1,int p2,int maior,int menor){
	
	
	maiorEntre(vet,TAM,p1,p2,&maior,&menor);
	
	p1=maior;
	p2=menor;
	
	printf("\n\np1:(posMaior) %d \np2: (posMenor) %d",p1,p2);
	
}




//fun��o 1:
void maiorEntre(float vet[], int tamanho,int p1, int p2,int *maior,int *menor){
	
	int i;
	
	(*maior)=0;
	(*menor)=9999;
	
	for(i=p1;i<=p2;i++){
		
		if(vet[i]>*maior){
			*maior=vet[i];
		}
		if(vet[i]<*menor){
			*menor=vet[i];
		}
	}
}

//aleatorio vet
void preencherAleatorio (float vet[], int tamanho)
{

	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vet[i] = rand()%100; 
	}
}

void exibir (float vet[],int tamanho)
{
	
	int i;
	
	printf ("\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%.1f ", vet[i]);

	}
}

