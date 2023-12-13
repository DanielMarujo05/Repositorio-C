/*Desenvolver um programa que calcule a
soma dos números de 1 a N, sendo N um
número inteiro fornecido pelo usuário.*/

#include <stdio.h>
void main(){
	
	int n,i,soma=0;
	
	printf("insira um numero inteiro: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		
		soma+=i;
	}
	printf("%d", soma);
}
		
		
