/*QUESTÃO 07: Faça um programa que leia
150 números reais e, ao final, exiba:
a) A soma dos 50 primeiros;
b) menor número do 51° ao 100°
valores fornecidos;
c) A média entre os últimos 50
valores.*/

#include<stdio.h>

void main(){
	
	float media=0;
	int i,n1,soma=0,qnt=5,soma2=+999999,soma3=0;
	
	for(i=1;i<=qnt;i++){
		
		
		printf("insira um numero: ");
		scanf("%d", &n1);
		
		if(i<=5){
		soma+=n1;
		}
		
		if(i>5 && i<10){
			if(n1<soma2){
				soma2=n1;
			}
		}
		
		if(i>10){
			soma3+=n1;	
		}
	}
	media=((float)soma3/5);
	printf("\n a soma dos primeiros 5 algarismos e: %d", soma);
	printf("\n o menor numero entre o quinto e o decimo e: %d", soma2);
	printf("\n a media dos numeros entre 10 e 15 e %.2f", media);

}
	

