/*Desenvolver uma função que, dado um
vetor vetA de inteiros, crie um novo vetor –
vetB – com as seguintes características:

1. O maior elemento de vetA ocupará a
primeira posição de vetB;

2. O segundo maior elemento de vetA
ocupará a segunda posição de vetB e,
assim, sucessivamente;

3. Embora o vetor vetA possa conter
números repetidos, vetB não conterá
duplicatas;

4. O programa deverá respeitar o seguinte
algoritmo:

-> Localizar o maior elemento de vetA e colocá-
lo na primeira posição de vetB;

-> Localizar o segundo maior elemento de vetA e
colocá-lo na segunda posição de vetB;

-> Este processo repete-se até colocar em vetB o
menor elemento de vetA.

5. Portanto, pelo descrito no item anterior,
nenhum algoritmo de ordenação
existente na literatura deve ser aplicado a
esta solução;

6. Após chamar a função, a main deverá
exibir os elementos dos dois vetores.*/

#include <stdio.h>
#define TAM 10

//prototipos
void preencherAleatorio (int vetA[],int tamanho);
void exibir (int vetA[],int vetB[],int tamanho);
void criarB(int vetA[],int vetB[],int tamanho);

void main(){
	
	int vetA[TAM],vetB[TAM];
	
	preencherAleatorio(vetA,TAM);
	criarB(vetA,vetB,TAM);
	exibir(vetA,vetB,TAM);
	
}

//função "principal"

/*void criarB(int vetA[],int vetB[],int tamanho){
	
	int i,j,maior,PosMaior,vetC[TAM];

	//pedida 1/2 (botar elementos de A crescente em b)
	for(i=0;i<tamanho;i++){
		
		maior=-9999;
		
		for(j=0;j<tamanho;j++){
			if(vetA[j]>maior){
			maior=vetA[j];
			PosMaior=j;
			vetC[j]=vetA[j];
			}
		}
	
			vetB[i]=maior;
			vetA[PosMaior]=-99999;
			
			
	}
	for(i=0;i<tamanho;i++){
		vetA[i]=vetC[i];
		}
}*/

void criarB(int vetA[], int vetB[], int tamanho) {
    int i, j, maior, PosMaior, vetC[TAM];
    int repetido;

    for (i = 0; i < tamanho; i++) {
        maior = -9999;
        
        for (j = 0; j < tamanho; j++) {
            if (vetA[j] > maior) {
                maior = vetA[j];
                PosMaior = j;
                vetC[j] = vetA[j];
            }
        }
        
        repetido = 0;  // Variável para verificar se o elemento já existe em vetB
        
        for (j = 0; j < i; j++) {
            if (vetB[j] == maior) {
                repetido = 1;
                break;
            }
        }
        
        if (!repetido) {
            vetB[i] = maior;
        } else {
            i--;  // Decrementa o índice i para substituir o valor repetido
        }
        
        vetA[PosMaior] = -99999;
    }
    
    for (i = 0; i < tamanho; i++) {
        vetA[i] = vetC[i];
    }
}

//aleatorio vet
void preencherAleatorio (int vetA[],int tamanho)
{

	int i;
	
	srand (time(NULL));
	
	for (i=0; i<tamanho; i++)
	{
		vetA[i] = rand()%10; 

	}
}

//exibindo
void exibir (int vetA[],int vetB[],int tamanho)
{
	
	int i;
	
	printf ("\nVetorA: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetA[i]);
	}
	printf("\nVetorB: ");
	for (i=0;i<tamanho;i++)
	{
	printf ("%d ", vetB[i]);
	}
}
