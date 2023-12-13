#include <stdio.h>	
void main(){
	
	int base,expoente,i,resultado;
	
	printf("indique a base: ");
	scanf("%d", &base);
	
	printf("indique o expoente: ");
	scanf("%d", &expoente);
	
	for(i=2;i<=expoente;i++){
	
		resultado*=base;	
	}
	printf(" %d ", resultado);
	
}
