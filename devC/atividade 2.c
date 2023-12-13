/*Pede-se uma função que, dado um número
inteiro n, apresente todas as combinações
possíveis contendo de três valores,
respeitadas as seguintes regras:
1. Cada um dos três valores da sequência
deve estar no intervalo de 1 a n;
2. A sequência não pode conter números
repetidos;
3. Os valores da sequência devem estar
ordenados crescentemente.
Por exemplo, caso o valor de n fosse igual
a 5, apenas as seguintes combinações
deveriam ser apresentadas pela função:
1 2 3
1 2 4
1 2 5
1 3 4
1 3 5
1 4 5
2 3 4
2 3 5
2 4 5
3 4 5*/

#include <stdio.h>
//nao retorna (void)
void sequencia(int n){
	//declarando variaveis
	int i,j,k;
	//fazendo repetições para exibir sequencia
	for(i=1;i<=n;i++){
		for(j=i+1;j<n;j++){
			for(k=j+1;k<=n;k++){
				printf(" %d %d %d \n",i,j,k);
			}
		}
	}
}

void main(){
	
	//declarando e iniciando a variavel com 1 valor.
	int n=10;
	//inicializando função 
	sequencia(n);
}
