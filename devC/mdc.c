/*Fazer uma função que calcule o MDC (máximo
divisor comum) entre dois números.*/
#include <stdio.h>

int mdc(int n1,int n2){
	
	int i,menor,mDiv;
	
		if(n1<n2){
		menor=n1;
		}
			else{
			menor=n2;
			}
	for(i=1;i<=menor;i++){
		if((n1%i==0) && (n2%i==0)){
			mDiv=i;
		}
	}
	return mDiv;
}

int main(){
	
	int resp = mdc(105,24);
	
	printf("o menor divisor comum entre os numeros e: %d ",resp);
}



