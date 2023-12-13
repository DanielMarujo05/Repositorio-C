/*Fazer uma função leituraDados
que permaneça lendo valores reais até que o número 0 seja digitado. 
Ao final, a função deve determinar a quantidade de elementos fornecidos (excluindo o 0) 
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
