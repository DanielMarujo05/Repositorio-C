/*Fazer um programa que exiba todos os
divisores de um n�mero fornecido pelo
usu�rio.*/
#include <stdio.h>
void main(){
	
	int i,n;
	
	printf("insira um numero: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("%d ",i);
		}
	}
}
