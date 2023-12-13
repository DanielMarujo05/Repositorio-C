#include <stdio.h>

int bases(int n, int base) {
    
	int numeroConv = 0,auxiliarMult=1,algarismo;
    
    if (base < 2 || base > 8){
        return 0;
    }
    
    
    if (n == 0){
        return 0;
    }
    

    while (n != 0){
        algarismo = n % base;
        
        if (algarismo >= base){
            return 0;
        }
        
        numeroConv += algarismo * auxiliarMult;
        auxiliarMult *= 10;
        n /= base;
    }
    
    return numeroConv;
}

void main(){
	
    int numero, base, resultado;
    
    printf("insira um numero na base decimal: ");
    scanf("%d", &numero);
    
    printf("insira a base de 2 a 8: ");
    scanf("%d", &base);
    
    resultado = bases(numero , base);
    
    if (resultado > 0) {
        printf("\nnumero na base desejada: %d", resultado);
    } else {
        printf("\nconversao nao e possivel");
    }
}
