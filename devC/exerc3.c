/*Fazer uma fun��o leituraDados que permane�a
lendo valores reais at� que o n�mero 0 seja
digitado. Ao final, a fun��o deve determinar a
quantidade de elementos fornecidos (excluindo
o 0) e o maior dentre eles.*/

#include <stdio.h>
//prototipos
void leituraDados(int *quantidade,float *maior);

void main(){
	
	int quant;
	float maior;
	
	leituraDados(&quant,&maior);
	
	printf("Quantidade: %d e Maior: %.2f ",quant,maior);
	
}

void leituraDados(int *quantidade,float *maior){
	
	int i;
	float n;
	*quantidade=0;
	*maior=0;
	
	do{
		
		printf("insira um valor: ");
		scanf("%f",&n);
		
		if(n>*maior){
			*maior=n;
		}
		
	if(n!=0){
	(*quantidade)++;
	}	
	
	}while(n!=0);	
}
