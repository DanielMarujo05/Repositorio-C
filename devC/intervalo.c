/*Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.*/
#include <stdio.h>
void intervalo(int a,int b,int n){
	
	int i;
	
	for(i=a;i<=b;i++){
		if(i%n==0){
		printf("%d ",i);	
		}
	}
}

void main(){
	
	int a,b,n;

 	intervalo(1,100,5);	
}
