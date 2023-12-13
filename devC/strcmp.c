#include <stdio.h>
#include <string.h>
#define TAM 50

int verif(char str1[],char str2[],int tamanho);

void main(){
	
	char str1[TAM],str2[TAM];
	int result=0;
	
	printf("insira a palavra:");
	gets(str1);
	printf("insira a palavra:");
	gets(str2);
	
	result=verif(str1,str2,TAM);
	
	if(result==1){
		printf("e igual");
	}else{
		printf("nao e igual");
	}
	
	
}

int verif(char str1[], char str2[], int tamanho) {
    int i;

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            return 0; 
        }
    }

    
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1; 
	}
}

