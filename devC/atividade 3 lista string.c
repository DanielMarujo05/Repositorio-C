/*Desenvolver uma função que, dada uma string
s, crie uma substring que inicie na posição p de
s e contenha n caracteres.

Observações: se p e/ou n forem inválidos, a
substring será vazia; ii) se s não possuir n
caracteres além de p, a substring a ser criada
começará em p e terminará no final de s.*/

#include <stdio.h>
#include <string.h>

void substr(char str1[],int p,int n);

void main(){
	
	char str1[50];
	int p,n;
	
	printf("insira a palavra: ");
	gets(str1);
	
	printf("insira o valor para p: ");
	scanf("%d",&p);
	printf("insira o valor para n: ");
	scanf("%d",&n);
	
	substr(str1,p,n);
	
}

void substr(char str1[],int p,int n){
	
	int i,cont=0,j=0;
	char sub[50];
	
	for(i=p-1;str1[i]!='\0';i++){
		
		if(cont<n){
			sub[cont]=str1[i];
		}	
		cont++;
	}
	sub[cont]='\0';
	
	printf("\n%s",sub);
	
}




