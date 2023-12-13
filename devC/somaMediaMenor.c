/*Faça uma função que leia 15 números reais e, ao final, retorne:
a) A soma dos 5 primeiros;
b) menor número do 5° ao 10° valores fornecidos;
c) A média entre os últimos 5 valores.*/

#include <stdio.h>

void leitura(float *soma,float *menor,float *media){
	
	int i;
	float n,auxiliarMedia;
	
	*soma=0;
	*menor=99999999;
	*media=0;
	auxiliarMedia=0;
	
	for(i=1;i<=15;i++){
		
		printf("insira um numero real: ");
		scanf("%f",&n);
		
		if(i>=1 && i<=5){
			*soma+=n;
		}	
		if(i>=5 && i<=10){
			if(n<*menor){
				*menor=n;
			}
		}
		if(i>=11 && i<=15){
			auxiliarMedia+=n;
		}
	}
	*media=((float)auxiliarMedia/5);
}

void main(){
	
	float somatorio,menorNum,MediaUlt;
	
	leitura(&somatorio,&menorNum,&MediaUlt);
	
	printf("\na soma dos 5 primeiros numeros e: %.2f ",somatorio);
	printf("\no menor numero do quinto ao decimo numero e: %.2f ",menorNum);
	printf("\na media dos 5 ultimos numeros e: %.2f ",MediaUlt);
}
