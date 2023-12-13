/*Desenvolver uma função que, dado um
número inteiro n, retorne a quantidade de
algarismos desse valor.*/
#include <stdio.h>

int algarismo(int numero){
	
	int i, algarismos=0;
	
	if (numero==0){
		return 1;
	}
		if (numero<0){
		numero = -1*numero;
		}
			while (numero > 0) {
        	algarismos++;
        	numero /=10;
    		}
    
    return algarismos;
	
}

void main(){
	
	int numero = 500;
	
	int algarismos = algarismo(numero);
	
	printf ("\no numero de algarismos deste numero e: %d \n",algarismos);
}
