#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed para a função rand() com base no tempo atual
    srand(time(NULL));
    
    // Gere um número aleatório entre 1 e 10 (por exemplo)
    int numero = rand() % 10 + 1;

    // Determine a cor com base no número gerado
    if (numero % 2 == 0) {
        printf("Número: %d, Cor: Preta\n", numero);
    } else {
        printf("Número: %d, Cor: Vermelha\n", numero);
    }

    return 0;
}
