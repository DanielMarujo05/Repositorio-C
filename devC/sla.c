/*Desenvolver uma fun��o que, dado um
vetor vetA de inteiros, crie um novo vetor �
vetB � com as seguintes caracter�sticas:

1. O maior elemento de vetA ocupar� a
primeira posi��o de vetB;

2. O segundo maior elemento de vetA
ocupar� a segunda posi��o de vetB e,
assim, sucessivamente;

3. Embora o vetor vetA possa conter
n�meros repetidos, vetB n�o conter�
duplicatas;

4. O programa dever� respeitar o seguinte
algoritmo:

-> Localizar o maior elemento de vetA e coloc�-
lo na primeira posi��o de vetB;

-> Localizar o segundo maior elemento de vetA e
coloc�-lo na segunda posi��o de vetB;

-> Este processo repete-se at� colocar em vetB o
menor elemento de vetA.

5. Portanto, pelo descrito no item anterior,
nenhum algoritmo de ordena��o
existente na literatura deve ser aplicado a
esta solu��o;

6. Ap�s chamar a fun��o, a main dever�
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

//fun��o "principal"

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
        
        repetido = 0;  // Vari�vel para verificar se o elemento j� existe em vetB
        
        for (j = 0; j < i; j++) {
            if (vetB[j] == maior) {
                repetido = 1;
                break;
            }
        }
        
        if (!repetido) {
            vetB[i] = maior;
        } else {
            i--;  // Decrementa o �ndice i para substituir o valor repetido
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
