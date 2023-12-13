/*Desenvolver uma função recursiva que exiba
todos os múltiplos do número N, inferiores ou
iguais ao valor V.*/
#include <stdio.h>

void multRec(int n,int v,int mult);

void main(){
	
	int n,v;
	
	printf("insira um valor para n: ");
	scanf("%d",&n);
	printf("insira um valor para v: ");
	scanf("%d",&v);
	
	int mult=n;
	
	multRec(n,v,mult);
}

void multRec(int n,int v,int mult){
	
	if(n<=v){
		printf("%d ",n);
		multRec(n+mult,v,mult);
	}
	
}
