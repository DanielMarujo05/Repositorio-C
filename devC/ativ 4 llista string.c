#include <stdio.h>
#include <string.h>

void remocao(char str1[],int tamanho,char l);

void main(){
	
	char str1[50],l;
	
	
	printf("insira a palavra: ");
	gets(str1);
	
	printf("insira uma letra ");
	scanf("%c",&l);
	
	remocao(str1,50,l);
}

void remocao(char str1[],int tamanho,char l){
	
	int i,j,tam=strlen(str1);
	
	for(i=0;i<tam;i++){
		
		if(str1[i]==l){
			for(j=i;j<tam-1;j++){
				str1[j]=str1[j+1];
			}
			tam--;
			i--;
		}
	}

	str1[tam]='\0';
	
	printf("%s",str1);
}
