/*QUEST�O 05:
Fazer uma fun��o que exiba a tabuada de
pot�ncias de um n�mero n, no intervalo de 1 a
9. Se o n�mero n�o estiver neste intervalo, o
c�digo 0 deve ser retornado; caso contr�rio,
retorna-se 1.*/

#include <stdio.h>
int pot(int n){
	
	int i,termo=1;
	
	printf("%d^0=1\n",n);
	if(n>9 || n<1){
		return 0;
	}
	else{
		for(i=1;i<=9;i++){
		termo*=n;
		printf("%d^%d=%d\n",n,i,termo);	
		}
	}	
}

void main(){
	
	int base;
	
	printf("\ninsira um numero: ");
	scanf("%d",&base);
	
	pot(base);	
	
}
