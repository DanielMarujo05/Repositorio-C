/*Desenvolver uma fun��o que, dado um n�mero real
n, arredonde-o para o valor inteiro mais pr�ximo.
Exemplos:
n = 4.67 Resposta: 5
n = 4.23 Resposta: 4
n = 3.0 Resposta: 3
Notas:
1. � proibido o uso de fun��es j� existentes na
linguagem que possuam este mesmo objetivo;
2. Apresentar a main chamando a fun��o solicitada.*/

#include <stdio.h>
//prototipos
float arredondar(float n);

void main(){
	
	float n;
	int retorno;
	
	printf("insira um valor real N:");
	scanf("%f",&n);
	
	retorno=arredondar(n);
	
	printf("%d",retorno);
	
}

float arredondar(float n) {
	
    int parteInt=0,resultado=0;
    float aux=0;
    
    parteInt = (int)(n);
    
    aux=((float)n-parteInt);
    
    if(aux>=0.5){
    resultado=parteInt+1;
	}
	else{
	resultado=parteInt;
	}
    
    return resultado;
}
