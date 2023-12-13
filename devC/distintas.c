#include <stdio.h>
#include <string.h>
#define TAM 50

/*Implementar uma função que, dada uma string
s, determine a quantidade de caracteres
distintos em s.*/

void main(){
	
	char str1[TAM];
	int qnt;
	
	printf("insira a palavra e ou frase: ");
	gets(str1);
	
	qnt=distintas(str1,strlen(str1));
	
	printf("a quantidade de caracteres distintos e: %d",qnt);
	
}


int distintas(char str[], int tamanho) {
    int i, j, dist = 0;

    for (i = 0; i < tamanho; i++) {
        int eDiferente = 1; // Flag para verificar se o caractere é diferente dos anteriores

        // Verifica se o caractere atual é igual a algum dos caracteres anteriores
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                eDiferente = 0; // O caractere não é diferente
                break;
            }
        }

        if (eDiferente) {
            dist++; // Incrementa o contador de caracteres distintos
        }
    }

    return dist;
}
