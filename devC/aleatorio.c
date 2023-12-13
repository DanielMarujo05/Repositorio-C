#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed para a fun��o rand() com base no tempo atual
    srand(time(NULL));
    
    // Gere um n�mero aleat�rio entre 1 e 10 (por exemplo)
    int numero = rand() % 10 + 1;

    // Determine a cor com base no n�mero gerado
    if (numero % 2 == 0) {
        printf("N�mero: %d, Cor: Preta\n", numero);
    } else {
        printf("N�mero: %d, Cor: Vermelha\n", numero);
    }

    return 0;
}
