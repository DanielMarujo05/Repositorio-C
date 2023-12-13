#include <stdio.h>

int main() {
    int i, j;

    // Loop para percorrer de 1 a 10000 em incrementos de 1
    for(i = 1; i <= 100; i++) {
        printf("%d,", i);
        // Loop para percorrer de 1 a 100 em incrementos de 1
        for(j = 1; j <= 100; j++) {
            // Verifica se o valor de j é igual ao valor de i
            if(j == i) {
                printf("%d,", j*100);
                break; // Sai do loop interno se encontrar o valor correspondente
            }
        }
    }

    return 0;
}









