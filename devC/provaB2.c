/*Questão 02 [2,5 pontos]:
Fazer uma função que, dado um número inteiro
positivo n, determine o seu maior e o seu menor
algarismos.
Nota: caso n seja positivo, a função realizará o solicitado
e retornará o valor 1; caso contrário, apenas retornará 0.*/

#include <stdio.h>
//prototipos
int maiorAlg(int n,int *maior,int *menor);

void main(){
	
	int n,retorno,menor,maior;
	
	printf("insira um valor para N: ");
	scanf("%d",&n);
	
	retorno=maiorAlg(n,&maior,&menor);
	
	printf ("o maior algarismo de N e: %d",maior);
	printf ("\no menor algarismo de N e: %d",menor);
	printf ("\no retorno da funcao foi: %d",retorno);
}

int maiorAlg(int n,int *maior,int *menor){
	
	int i,alg=0;
	*maior=0;
	*menor=99;
	
	if(n<0){
		return 0;
	}
	else{
		
		do{
			
			alg=n%10;
			
			if(alg>*maior){
				*maior=alg;
			}
			
			if(alg<*menor){
				*menor=alg;
			}
			
			n/= 10;
			
		}while(n>0);
		
	return 1;
	
	}
}
