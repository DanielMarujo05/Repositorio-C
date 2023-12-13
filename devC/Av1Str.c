#include <stdio.h>
#include <string.h>
#define TAM 50
/*Dadas duas strings s1 e s2, implementar uma função que crie duas outras strings – s3 e s4 – com as seguintes
características:
s3: conterá todos os caracteres de s1 que também estão em s2;
s4: conterá todos os caracteres de s1 que não estão em s2.
Exemplo:
s1: “PROGRAMACAO” s3: “ROGRAMAAO”
s2: “ALGORITMOS” s4: “PC”*/

void criarStr(char str1[],char str2[]);

void main(){
	
	char str1[TAM],str2[TAM];
	
	printf("insira sua string: ");
	gets(str1);
	printf("insira sua string: ");
	gets(str2);
	
	criarStr(str1,str2);
	
}

void criarStr(char str1[],char str2[]){
	
	int i,j,i2=0,j2=0,aux;
	char str3[strlen(str1)],str4[strlen(str1)];
	
	for(i=0;i<strlen(str1);i++){
		
		aux=0;
		
		for(j=0;j<strlen(str2);j++){
			
			if(str1[i]==str2[j]){
				
				aux=1;
				break;
			}
			
		}
		if(aux==0){
			str4[i2]=str1[i];
			i2++;
		}else{
			str3[j2]=str1[i];
			j2++;
		}

	}
	
	str3[j2]='\0';
	str4[i2]='\0';
		
	printf("S3: %s",str3);
	printf("\nS4: %s",str4);
	
}
