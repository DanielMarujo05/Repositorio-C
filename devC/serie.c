/*Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,8,64,1024,...*/

#include <stdio.h>
void main(){
	
	int i=1,n,serie=2,pot=1;
	
	printf("indique quantos numeros da serie deseja ver: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		
		printf("%d ", pot);
		
		pot*=serie;
		serie*=2;
	}
	
	
}

