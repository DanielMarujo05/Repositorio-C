/*Desenvolver uma função recursiva que, dados um
vetor com quant inteiros e dois números num1 e num2,
calcule a média dos valores do vetor que estão no
intervalo de num1 a num2*/

#include <stdio.h>
#define quant 10

int preencherRecUs(int vet[],int quantidade);
int preencherRec(int vet[],int quantidade,int aux);
int mediaRecUs(int vet[],int n1,int n2);


void main(){
	
	int num1,num2,vet[quant];
	float result;
	
	printf("insira um valor para num1: ");
	scanf("%d",&num1);
	printf("insira um valor para num2: ");
	scanf("%d",&num2);
	
	if(num1<num2){
	preencherRecUs(vet,quant);
	result=mediaRecUs(vet,num1,num2);
	printf("a media e %.2f",result);
	}else{
		printf("num1 tem que ser menor que num2!!");
	}
	
}

int mediaRecUs(int vet[],int n1,int n2){
	
		MediaRec(vet,n1,n2,(n2-n1,));
	
}

int MediaRec(int vet[],int n1,int n2,int auxQnt){
	
	float media;

	
	if(n1<=n2){
		
		return auxSoma=MediaRec(vet,n1+1,n2-1,auxQnt,vet[n1]+vet[n2]);
		
	}else{
		
		media=(auxSoma/auxQnt);
		return media;
		
	}
	
}





int preencherRecUs(int vet[],int quantidade){
	
	preencherRec(vet,quant,0);
	
}

int preencherRec(int vet[],int quantidade,int aux){
	
	int num;
	
	if(aux<quant){
		
		printf("insira um numero: ");
		scanf("%d",&num);
		vet[aux]=num;
		return preencherRec(vet,quant,aux+1);
	}
	
}
