/*Pede-se a implementa��o de uma fun��o
recursiva que exiba os n primeiros termos de
uma PG (Progress�o Geom�trica), onde a1 � o
seu primeiro termo e q a raz�o.*/


#include <stdio.h>
int pgRec(int n,float a1,float q,int aux);
int pgRecursiva(int n,float a1,float q);
void main(){
	
	float a1,q;
	int n;
	
	printf("insira um valor para n termos: ");
	scanf("%d",&n);
	printf("insira um valor para a1: ");
	scanf("%f",&a1);
	printf("insira um valor para a razao: ");
	scanf("%f",&q);
	
	pgRecursiva(n,a1,q);
	
}

int pgRecursiva(int n,float a1,float q){
	
	return pgRec(n,a1,q,0);
	
}


int pgRec(int n,float a1,float q,int aux){
	
	
	if(aux<n){
		
		printf("%.2f  ",a1);
		a1*=q;
		pgRec(n,a1,q,aux+1);
		
	}
	
}
