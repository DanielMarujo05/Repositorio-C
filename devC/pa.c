/*Implementar um programa que exiba os N
primeiros termos de uma PA (Progress�o
Aritm�tica) com primeiro termo a1 e raz�o
r.*/
#include <stdio.h>
void main(){
	
	int i,t1,r,numterm,pa;
	
	printf("insira quantos termos deseja ver: ");
	scanf("%d", &numterm);
	
	printf("insira o primeiro termo: ");
	scanf("%d", &t1);
	
	printf("insira a razao: ");
	scanf("%d", &r);
	
	pa=t1;
	
	for(i=1;i<=numterm;i++){
		
	printf("%d ", pa);
		
		pa+=r;	
	}
}
