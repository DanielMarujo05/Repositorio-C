#include <stdio.h>
#include <string.h>
#define TAM 100
void main(){

void conca(char str1[],char str2[],int tamanho);

char str1[TAM],str2[TAM];

	printf("insira sua palavra: ");
	gets(str1);
	printf("insira sua palavra: ");
	gets(str2);

	conca(str1,str2,TAM);
	
	printf("palavra concatenada: %s",str1);

} 


void conca(char str1[], char str2[], int tamanho) {
    int i, j;
    
    
    for (i = 0; str1[i] != '\0'; i++) {
    }

    
    for (j = 0; str2[j] != '\0' && i < tamanho - 1; j++, i++) {
        str1[i] = str2[j];
    }

    
    str1[i] = '\0';
}
