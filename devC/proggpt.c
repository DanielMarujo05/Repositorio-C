#include <stdio.h>

int main() {
    int n, y, i;
    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);
    printf("Digite um numero inteiro positivo Y: ");
    scanf("%d", &y);
    printf("Os multiplos de %d inferiores a %d sao: ", y, n);
    for (i = y; i < n; i += y) {
        printf("%d ", i);
    }
    return 0;
}
