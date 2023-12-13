/*Fazer uma fun��o que, dado um n�mero inteiro
positivo n, determine se os seus algarismos est�o ou
n�o ordenados crescentemente.
Exemplos:
n = 3456 Est�o ordenados
n = 4563 N�o est�o ordenados
n = 4 Est�o ordenados
Nota: pode-se considerar que n � maior do que zero, sem
a necessidade de valida��o.*/

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
