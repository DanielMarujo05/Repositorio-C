/*Dada uma string s, desenvolver uma função
recursiva que determine se s é ou não um
palíndromo.*/

#include <stdio.h>
#include <string.h>
#define TAM 50

int palindromoRec(char str1[],int i,int j);

void main(){
	
	char str1[TAM],resultado;
	
	printf("insira sua string: ");
	gets(str1);
	
	resultado=palindromoRec(str1,0,strlen(str1)-1);
	
	if(resultado==1){
		printf("\na string e um palindromo! ");	
	}else{
		printf("\na string nao e um palindromo! ");
	}
	
}

int palindromoRec(char str1[],int i,int j){
	
	
	if(i<=j){
		
		if(str1[i]==str1[j]){
		
		return palindromoRec(str1,i+1,j-1);
		
		}else{
			return 0;
		}	
		
	}else{
		return 1;
	}
	
}
