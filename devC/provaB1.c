/*Questão 01 [2,5 pontos]:
Desenvolver uma função que determine o maior
múltiplo de n existente no intervalo definido pelos
números a e b, inclusive. */

#include <stdio.h>
//prototipos
int maiorMult(int a,int b,int n);

void main(){
	
	int a,b,n,maior;
	
	printf("insira um valor para A: ");
	scanf("%d",&a);
	printf("insira um valor para B: ");
	scanf("%d",&b);
	printf("insira um valor para N: ");
	scanf("%d",&n);
	
	maior=maiorMult(a,b,n);
	
	printf("o maior multiplo de N no intervalo de %d a %d eh: %d ",a,b,maior);
	
}

int maiorMult(int a,int b,int n){
	
	int maior=0,i;
	
	for(i=a;i<=b;i++){
		if(i%n==0){
				maior=i;
			}
		}
	return maior;
}
