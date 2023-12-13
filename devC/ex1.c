/*Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.*/

#include <stdio.h>
//prototipos


void main(){
	
	int A,B,N;
	
	printf("insira um valor para A: ");
	scanf("%d",&A);
	printf("insira um valor para B: ");
	scanf("%d",&B);
	printf("insira um valor para N: ");
	scanf("%d",&N);
	
	intervalo(A,B,N);
	
}

int intervalo(int A,int B,int N){
	
	int i;
	
	for(i=A;i<=B;i++){
		
		if (i%N==0){
			printf("%d ",i);
		}
	}
}
