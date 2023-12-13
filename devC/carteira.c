/*O programa deve ler as seguintes
informações para cada motorista:
? O número da carteira de motorista;
? Número de multas;
? Valor de cada uma das multas.
Deve ser exibido o valor da dívida de cada
motorista e ao final da leitura o total de
recursos arrecadados (somatório de todas
as multas). O programa também deverá
apresentar o número da carteira do
motorista que obteve o maior número de
multas.*/

#include <stdio.h>
void main(){
	
	int numCart,i,numMulta,valorMulta,j,somaMultas=0;
	
	
	for(i=1;i<=3;i++){
		printf("insira o numero da carteira de motorista: ");
		scanf("%d", &numCart);
		printf("insira o numero de multas: ");
		scanf("%d", &numMulta);
		
			for(j=1;j<=numMulta;j++){
				printf("coloque o valor da multa: ");
				scanf("%d", &valorMulta);
				somaMultas+= valorMulta;
			}
	}
	printf("o total arrecadados de multa e: %d ", somaMultas);
	printf("\no motorista com mais multas foi : %d ", numCart);
}

