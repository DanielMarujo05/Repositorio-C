/*Questão 03 [2,5 pontos]:
Considere a existência de dois vetores:
? Notas: contendo as notas de um aluno;
? Pesos: armazenando os pesos de cada nota.
Implementar uma função que, dados estes dois
vetores, calcule a média ponderada do aluno,
conforme exemplificado abaixo:
Notas 4.5 8.0 5.5 10.0 8.0
	   0   1   2    3   4
Pesos 2 4 6 2 3
      0 1 2 3 4

Média = (4.5x2 + 8.0x4 + 5.5x6 + 10.0x2 +
8.0x3)/(2+4+6+2+3) = (9.0+32.0+33.0+20.0+24.0)/17
= 118/17 = 6.94*/

#include <stdio.h>
#define TAM 5
//prototipos
float notasPeso(float notas[],int pesos[],int tamanho);

void main(){
	
	float mediaPond;
	
	float nota[TAM]={4.5,8,5.5,10,8};
	int peso[TAM]={2,4,6,2,3};
	
	mediaPond=notasPeso(nota,peso,TAM);
	
	printf ("a media ponderada do aluno e: %.2f",mediaPond);
}

float notasPeso(float notas[],int pesos[],int tamanho){
	
	int i,aux=0;
	float soma=0,media=0;
	
	for(i=0;i<tamanho;i++){
		
		soma+=notas[i]*pesos[i];
		aux+=pesos[i];
		
	}
	
	media=((float)soma/aux);
	
	return media;
}
