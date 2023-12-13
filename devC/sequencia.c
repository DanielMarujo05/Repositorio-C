/*Faça um programa que exiba
na tela os 50 primeiros termos da seguinte
série: 1, -2, 3, -4, 5, -6 ...*/


#include <stdio.h>
int main(){
	int i, ii;
	
	for(ii = -2, i = 1 ; (ii >= -50) && (i < 50); ii = ii -2 , i+=2) {
		
		printf("%d,%d,", i, ii);
	}
}
