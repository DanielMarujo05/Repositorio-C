/*Desenvolver uma função que, dado um número
inteiro n, exiba todos os números existentes no
intervalo definido por a e b (a < b), exceto
aqueles que forem múltiplos de n.*/

#include <stdio.h>
//prototipos
void existentes(int a,int b,int n);

void main(){
	
	int	a,b,n;
	
	printf("insira um valor para A: ");
	scanf("%d",&a);
	printf("insira um valor para B: ");
	scanf("%d",&b);
	printf("insira um valor para N: ");
	scanf("%d",&n);
	
	existentes(a,b,n);

}

void existentes(int a,int b,int n){
	
	int i;
	
	for(i=a;i<=b;i++){
		
		if(a<b){
			if(i%n!=0){
				printf("%d ",i);
			}
		}
		else{
			printf("a sequencia nao segue a regra de A ser menor que B!!!");
		}
	}
	
}
