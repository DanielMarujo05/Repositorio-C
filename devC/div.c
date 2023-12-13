/*dada uma string s e dada uma posi��o p desta string, crie duas
novas strings: s1 com os caracteres de s das
posi��es 0 a p-1; e s2 com os caracteres de s da
posi��o p � �ltima.
Nota: Caso p seja uma posi��o inv�lida, a fun��o
dever� retornar o valor 0; caso contr�rio,
proceder� com a cria��o das duas strings e
retornar� o valor 1.*/

#include <stdio.h>
#include <string.h>
#define TAM 50


void main(){
	
	char str[TAM],str1[TAM],str2[TAM];
	int p,result=0;
	
	printf("insira a string: ");
	gets(str);
	printf("insira o valor de p: ");
	scanf("%d",&p);
	
	result=posicao(str,str1,str2,p);
	
	printf("\nretorno:%d\n",result);
	
	printf("\n\n%s",str);
	printf("\n%s",str1);
	printf("\n%s",str2);
	
}


int posicao(char str[],char str1[],char str2[],int p){
	
	int i,j=0;
	
	if(p<strlen(str) && p>0){
		
		for(i=0;i<strlen(str);i++){
			
			if(i<p){
				
				str1[i]=str[i];
				
			}else{
				
				str2[j]=str[i];
				j++;
			}
			
		}
		
		return 1;
		
	}else{
		
		return 0;
		
	}
	
}
