/*Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,4,8,16,32,...*/
#include <stdio.h>
void main(){

	int i,n,pot;
	
	printf("insira a quantidade de termos da sequencia que deseja ver: ");
	scanf("%d", &n);
	
	pot=1;
	
	for(i=0;i<n;i++){
		
		printf("%d ", pot);
		
		pot*=2;
	}
}
