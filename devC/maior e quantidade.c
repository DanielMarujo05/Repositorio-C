/*Fazer uma fun��o leituraDados
que permane�a lendo valores reais at� que o n�mero 0 seja digitado. 
Ao final, a fun��o deve determinar a quantidade de elementos fornecidos (excluindo o 0) 
e o maior dentre eles.*/

#include <stdio.h>

void leituraDados(int *quant,float *maior){
	
	float num;
	
	*quant=(-1);
	
	do{
		
		printf("insira um numero: ");
		scanf("%f",&num);
		
			if(*maior<num){
			*maior=num;
			}
	(*quant)++;
	}while(num!=0);
}

void main(){
	
	float maior;
	int quantidade;
	
	leituraDados(&quantidade,&maior);
	
	printf("\na quantidade de numeros e: %d",quantidade);
	printf("\no maior numero fornecido e: %.2f",maior);
}
