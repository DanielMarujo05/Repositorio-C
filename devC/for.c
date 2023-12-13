/*QUESTÃO 05: Faça um programa que exiba
na tela os 50 primeiros termos da seguinte
série: 1, -2, 3, -4, 5, -6 ...*/

#include <stdio.h>
void main(){

int i,j;

for(i=1;i<=50;i+=2) {
printf("%d,", i);
	}
for(j=-2;j>=-50;j-=2) {
printf("%d,", j); 
	}
}
