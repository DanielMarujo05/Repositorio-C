/*O programa deve ler as seguintes
informa��es para cada motorista:
? O n�mero da carteira de motorista;
? N�mero de multas;
? Valor de cada uma das multas.
Deve ser exibido o valor da d�vida de cada
motorista e ao final da leitura o total de
recursos arrecadados (somat�rio de todas
as multas). O programa tamb�m dever�
apresentar o n�mero da carteira do
motorista que obteve o maior n�mero de
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

