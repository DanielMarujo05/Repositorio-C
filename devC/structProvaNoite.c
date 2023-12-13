#include <stdio.h>
#include <string.h>
#include <ctype.h> // Para usar a função isalpha

typedef struct {
    int vogal, consoante;
    char palavra[50];
} Tpalavras;

void Palavra(char str[], Tpalavras vet[], int *numPalavras);

int main() {
    Tpalavras vet[50];
    char str1[50];

    printf("Insira sua string: ");
    gets(str1);

    int numPalavras = 0;
    Palavra(str1, vet, &numPalavras);

    printf("\nPalavras\tVogais\tConsoantes\n");
    for (int i = 0; i < numPalavras; i++) {
        printf("%s\t%d\t%d\n", vet[i].palavra, vet[i].vogal, vet[i].consoante);
    }

    return 0;
}

void Palavra(char str[], Tpalavras vet[], int *numPalavras) {
    int i = 0;
    while (str[i] != '\0') {
        int j = 0;
        while (str[i] != ' ' && str[i] != ',' && str[i] != '.' && str[i] != '\0') {
            vet[*numPalavras].palavra[j] = str[i];
            if (isalpha(str[i)) {
                char c = tolower(str[i]); // Converta o caractere para minúsculas
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    vet[*numPalavras].vogal++;
                } else {
                    vet[*numPalavras].consoante++;
                }
            }
            i++;
            j++;
        }
        vet[*numPalavras].palavra[j] = '\0'; // Adicione o terminador de string
        if (j > 0) {
            (*numPalavras)++;
        }
        if (str[i] != '\0') {
            i++;
        }
    }
}
