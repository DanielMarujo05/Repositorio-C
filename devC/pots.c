#include <stdio.h>
void main(){
	
	int npot,i,n, potencia=1;
	
	printf("insira o numero que deseja ver as potencias: ");
	scanf("%d", &n);
	
	printf("insira o numero de potencias que deseja ver do numero informado: ");
	scanf("%d", &npot);
	
	i=1;
	while (i<=npot){
		printf(" %d ", potencia);
		
		potencia*=n;
			
		i++;
	}
	
}
