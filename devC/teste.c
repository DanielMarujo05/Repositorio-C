#include <stdio.h>
#include <string.h>
#define TAM 50

void criarStr(char str1[], char str2[], char str3[], char str4[]);

int main() {
    char str1[TAM], str2[TAM], str3[TAM] = {0}, str4[TAM] = {0}; // Inicialize str3 e str4 como strings vazias

    printf("Insira sua string: ");
    gets(str1);
    printf("Insira sua string: ");
    gets(str2);

    criarStr(str1, str2, str3, str4);

    return 0;
}

void criarStr(char str1[], char str2[], char str3[], char str4[]) {
    int i, j, aux;

    for (i = 0; i < strlen(str1); i++) {
        aux = 0;

        for (j = 0; j < strlen(str2); j++) {
            if (str1[i] == str2[j]) {
                str3[i] = str1[i];
                aux = 1;
                break;
            }
        }

        if (aux != 1) {
            str4[i] = str1[i];
        }
    }

    str3[i] = '\0'; // Use '\0' para terminar a string, não '/0'
    str4[i] = '\0';

    printf("S3: %s\n", str3);
    printf("S4: %s\n", str4);
}
