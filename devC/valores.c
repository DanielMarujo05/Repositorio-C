/*Implementar uma função que, dados três
números reais num1, num2 e num3,
ordene-os de forma que, 
ao final,o menor valor esteja em num1, 
o do meio em num2 
e o maior em num3.*/

#include <stdio.h>

void valores(float n1,float n2,float n3,float *menor,float *meio,float *maior){
	
	float m,n,o;
	
	if(n1<n2 && n1<n3){
		*menor=n1;
	}
	else{
		if(n1>n2 && n1>n3){
		*maior=n1;	
		}
		else{
			*meio=n1;
		}
	}
	
	if(n2<n3 && n2<n1){
		*menor=n2;
	}
	else{
		if(n2>n3 && n2>n1){
			*maior=n2;
		}
		else{
			*meio=n2;
		}
	}
	if(n3<n2 && n3<n1){
		*menor=n3;
	}
	else{
		if(n3>n2 && n3>n1){
			*maior=n3;
		}
		else{
			*meio=n3;
		}
	}
}


void main(){
	
	float num1,num2,num3,m,n,o;
	
	printf("\ninsira 1 numero: ");
	scanf("%f",&num1);
	printf("\ninsira 1 numero: ");
	scanf("%f",&num2);
	printf("\ninsira 1 numero: ");
	scanf("%f",&num3);
	
	valores(num1,num2,num3, &m, &n, &o);
	
	printf("\na sequencia e esta: \nnum1:%.2f \nnum2:%.2f \nnum3:%.2f",m,n,o);	
}
