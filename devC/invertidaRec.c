/*Desenvolver uma função recursiva que, dada
uma string, exiba-a invertida..*/

#include <stdio.h>
#include <string.h>
#define TAM 20

int InvertidaRec(char str1[],int inicio,int fim);
int exibindo(char str1[]);
void main(){
	
	char str1[TAM];
	
	printf("insira a sua palavra: ");
	gets(str1);
	
	exibindo(str1);
		
}

int exibindo(char str1[]){
	
	printf("\nsua palavra invertida: ");
	return InvertidaRec(str1,0,strlen(str1)-1);
	
}

int InvertidaRec(char str1[],int inicio,int fim){
	
	if(fim>=inicio){
		
		printf("%c",str1[fim]);
		
		return InvertidaRec(str1,inicio,fim-1);
	}
}
