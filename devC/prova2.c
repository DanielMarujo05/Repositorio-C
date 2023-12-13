/*Fazer uma função que, dado um número inteiro
positivo n, determine se os seus algarismos estão ou
não ordenados crescentemente.
Exemplos:
n = 3456 Estão ordenados
n = 4563 Não estão ordenados
n = 4 Estão ordenados
Nota: pode-se considerar que n é maior do que zero, sem
a necessidade de validação.*/

#include <stdio.h>
//prototipos
int ordem(int n);

void main(){
	
	int num,retorno=0;
	
	printf("insira um numero para N: ");
	scanf("%d",&num);
	
	retorno=ordem(num);
	
	if(retorno==1){
		printf("o numero esta ordenado crescentemente");
	}else{
		printf("o numero nao esta ordenado crescentemente");
	}
	
	
}

int ordem(int n){
	
	int algarismo,aux=10;
	
	do {
		
		algarismo=0;
		
	    algarismo=n%10;
        
        if (aux<algarismo) {
            return 0;
        }
        
        aux=algarismo;
        
        n=n/10;
        
    }while(n > 0);
    
    return 1;
}
