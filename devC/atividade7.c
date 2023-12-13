/*Pede-se o desenvolvimento das seguintes
funções:
Função 1: dado um vetor contendo
números reais, determine a
posição do maior elemento
(posMaior) existente entre as
posições p1 e p2 do vetor,
assim como a posição do
menor valor (posMenor) entre
estas mesmas posições.


Função 2: esta deverá chamar a 1a
função e, com as posições
retornadas, trocar o conteúdo
de p1 pelo conteúdo de
posMenor e o de p2 pelo
conteúdo de posMaior.

Nota: a função main deverá chamar a
função 2 (que, por sua vez, disparará
a execução da 1a função).*/

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

//função 2:
void trocas(float vet[],int tamanho,int p1,int p2,int maior,int menor){
	
	
	maiorEntre(vet,TAM,p1,p2,&maior,&menor);
	
	p1=maior;
	p2=menor;
	
	printf("\n\np1:(posMaior) %d \np2: (posMenor) %d",p1,p2);
	
}




//função 1:
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

