/*Dado um n�mero inteiro N, fazer um
programa que exiba os n�meros pares
iguais ou inferiores a N.*/

#include <stdio.h>
void main(){
	
	int numero,i;
	
	printf("insira um numero: ");
	scanf("%d", &numero);
	
	for(i=0;i<=numero;i++){
		
		if(i%2==0){
			printf("%d ", i);
		}
	}
	
}
