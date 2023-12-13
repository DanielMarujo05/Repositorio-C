/*08: Faça uma função que leia 20 números inteiros.
Ao final, retornar:
a) O maior número fornecido, de ordem par (isto é, o maior dentre o segundo,
quarto, sexto, oitavo, etc valores fornecidos).
b) A média dos valores pares.*/
#include <stdio.h>

void pares(int *maior,float *media){
	
	int n,i,par=0,total=0;
	
	*maior=0;
	*media=0;
	
	for(i=1;i<=20;i++){
		
		printf("insira um numero: ");
		scanf("%d",&n);
		
		if(i%2==0){
			if(n>*maior){
				*maior=n;
			}
		}
		if(n%2==0){
			par++;
			total+=n;
		}
	}
	*media=((float)total/par);
}

void main(){
	
	float mid;
	int bigger;
	
	pares(&bigger,&mid);
	
	printf("\no maior numero da sequencia par e: %d ",bigger);
	printf("\na media dos pares e: %.2f ",mid);
}
