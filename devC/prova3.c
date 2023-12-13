/*Implementar uma função que, dado um vetor de
reais vet e um número inteiro n, determine o menor
valor dentre aqueles maiores do que n, assim como
o maior dentre são menores do que n.
Nota: apresentar a main chamando a função solicitada.*/


#include <stdio.h>
#define TAM 10
//prototipos
void menorMaior(int n,float vet[],int tamanho,float *maiorMenorN,float *menorMaiorN);

void main(){
	
	int n;
	float maiorMen,menorMai;
	
	float vetor[TAM]={4.3,2.5,7.6,9.5,15.3,10.4,12.4,8.9,9.3,19.5};
	
	printf("insira um numero para N: ");
	scanf("%d",&n);
	
	menorMaior(n,vetor,TAM,&maiorMen,&menorMai);
	
	printf("\no maior numero que e menor que N no vetor e: %.2f ",maiorMen);
	printf("\no menor numero que e maior que N no vetor e: %.2f ",menorMai);
}

void menorMaior(int n,float vet[],int tamanho,float *maiorMenorN,float *menorMaiorN){
	
	int i;
	
	*maiorMenorN=-9999;
	*menorMaiorN=9999;
	
	for(i=0;i<tamanho;i++){
		
	if(vet[i]<n){
		if(vet[i]>*maiorMenorN){
			*maiorMenorN=vet[i];
		}
	}
	else{
		if(vet[i]<*menorMaiorN){
			*menorMaiorN=vet[i];
		}
	}	
	}
}


