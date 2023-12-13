/*06: Pede-se o desenvolvimento de uma função que leia n
valores e retorne o maior e o menor
elementos do conjunto fornecido.*/

#include <stdio.h>
void maiorMenor(int *maior,int *menor){
	
	int n,i,quant;
	
	*maior=-99999;
	*menor=999999;
	
	printf("quantos numeros deseja inserir: ");
	scanf("%d",&quant);
	
	for(i=1;i<=quant;i++){
		
		printf("\ninsira o numero desejado: ");
		scanf("%d",&n);
		
		if(n>*maior){
			*maior=n;
		}
		if(n<*menor){
			*menor=n;
		}
	}
}


void main(){
	
	int big,small;
	
		maiorMenor(&big,&small);
	
	printf("o maior valor e: %d ",big);
	printf("\no menor valor e: %d ",small);
	
}
