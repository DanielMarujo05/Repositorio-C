#include <stdio.h>
#define TAM 50

void copiando(char strorig[],char strcopy[],int tamanho);

void main(){
	
	char strorig[TAM],strcopy[TAM];
	
	printf("insira sua palavra: ");
	gets(strorig);
	
	copiando(strorig,strcopy,TAM);
	
	printf("string copiada: %s",strcopy);
	
}

void copiando(char strorig[],char strcopy[],int tamanho){
	
	int i;
	
	for(i=0;strorig[i]!='\0';i++){
		
		strcopy[i]=strorig[i];
		
	}
	strcopy[i]='\0';
}
