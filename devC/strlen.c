#include <stdio.h>
#include <string.h>
#define TAM 50


int len(char string[],int tamanho);

void main(){
	
	char str[TAM];
	int qnt;
	
	printf("insira sua palavra: ");
	gets(str);
	
	qnt=len(str,TAM);
	
	printf("a quantidade de caracteres e: %d",qnt);
	
}


int len(char string[],int tamanho){
	
	int quant,i;
	
	for(i=0;string[i]!='\0';i++){
		if(string[i]!=' '){
		quant++;
		}
	}
	return quant;
}


