#include <stdio.h>
#include <string.h>
#define TAM 50

void main(){
	
	char str1[TAM],result=0;
	
	printf("insira a palavra: ");
	gets(str1);
	
	
	result=palindromo(str1,TAM);
	
	if(result==0){
		printf("nao e palindromo");
	}else{
		printf("e palindromo");
	}
	
}

int palindromo(char str[],int tamanho){
	
	int i,j,qnt;
	
	qnt=strlen(str);
	
	for(i=0,j=qnt-1;i<j;i++,j--){
		
		if (str[i]!=str[j]){
		return 0;
	}
	
	return 1;
	
	}
}
