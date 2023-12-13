/*Implementar uma função que, dadas duas strings s1 e
s2, determine se s2 possui (retornando 1) ou não
(retornando 0) os mesmos caracteres de s1, na mesma
quantidade, mesmo que embaralhados.*/

#include <stdio.h>
#include <string.h>
#define TAM 30

int quantIgual(char str1[],char str2[]);

void main(){
	
	char str1[TAM],str2[TAM],result;
	
	printf("insira sua string: ");
	gets(str1);
	printf("insira sua string: ");
	gets(str2);
	
	result=quantIgual(str1,str2);
	
	printf("resultado %d",result);
	
}

int quantIgual(char str1[],char str2[]){
	
	int i,j,aux=0;
	
	for(i=0;i<strlen(str1);i++){
		
		for(j=0;j<strlen(str2);j++){
			
			if(str1[i]==str2[j]){
				aux++;
				break;
			}	
		}
	}
	if(aux==strlen(str2)){
		return 1;
	}else{
		return 0;
	}
}
