#include <stdio.h>
void main(){
	int qnt,i,valor,maior,menor;
	
	printf("insira a quantidade de numeros desejados: ");
	scanf("%d", &qnt);
	
	printf("insira o numero desejado: ");
	scanf("%d", &valor);
	
	for(i=1;i<qnt;i++){
	
	printf("digite o proximo numero: ");
	scanf("%d", &valor);
	}
	
}
