/*Considerando a existência de um vetor, onde cada posição armazena os seguintes dados: nome do aluno, código da
disciplina, nota na AV1 e nota na AV2, pede-se o desenvolvimento de uma função que, dado um vetor nos moldes do
descrito, crie (e retorne) um outro vetor com os seguintes dados em cada posição: código da disciplina, status
(Aprovado, Reprovado ou Em AVF) e a quantidade de alunos nesta situação.*/

#include <stdio.h>
#include <string.h>


typedef struct{
	
	char nome[20];
	char disciplina[3];
	float nota1;
	float nota2;
	
}Tinicio;

typedef struct{
	
	char disci[3];
	char status[10];
	int qnt;
	
}Tfinal;

void LendoStruct(Tfinal vet[],Tinicio vetor[],int quant);
void exibirPessoas (Tfinal vet[],Tinicio vetor[], int quant);

void main(){
	
	Tfinal vet[5];
	Tinicio vetor[5];
	int quant=5;
	
	strcpy (vetor[0].nome, "CARLOS");
	strcpy (vetor[0].disciplina,"FAC");
	vetor[0].nota1 = 2 ;
	vetor[0].nota2 = 1 ;
	
	strcpy (vetor[1].nome, "MARIA");
	strcpy (vetor[1].disciplina,"FPR");
	vetor[1].nota1 = 7 ;
	vetor[1].nota2 = 8 ;
	
	strcpy (vetor[2].nome, "ADRIANA");
	strcpy (vetor[2].disciplina,"FAC");
	vetor[2].nota1 = 5 ;
	vetor[2].nota2 = 6 ;
	
	strcpy (vetor[3].nome, "JOAO");
	strcpy (vetor[3].disciplina,"LES");
	vetor[3].nota1 = 5 ;
	vetor[3].nota2 = 7 ;

	strcpy (vetor[4].nome, "PEDRO");
	strcpy (vetor[4].disciplina,"FAC");
	vetor[4].nota1 = 8 ;
	vetor[4].nota2 = 9 ;
	
	LendoStruct(vet,vetor,quant);
	exibirPessoas (vet,vetor,quant);
	
}

void LendoStruct(Tfinal vet[],Tinicio vetor[],int quant){
	
	int i,contRep=0,contApr=0,avf=0;
	
	for(i=0;i<quant;i++){
		
		if(((float)vetor[i].nota1+vetor[i].nota2)/2<4){
			
			contRep++;
			strcpy(vet[i].disci,vetor[i].disciplina);
			strcpy(vet[i].status,"REPROVADO");
			vet[i].qnt=contRep;
			
		}else{
			if(((float)vetor[i].nota1+vetor[i].nota2)/2<6){
				
				avf++;
				strcpy(vet[i].disci,vetor[i].disciplina);
				strcpy(vet[i].status,"AVF");
				vet[i].qnt=avf;
			}else{
				contApr++;
				strcpy(vet[i].disci,vetor[i].disciplina);
				strcpy(vet[i].status,"APROVADO");
				vet[i].qnt=contApr;
			}
		}	
	}
}

void exibirPessoas(Tfinal vet[], Tinicio vetor[], int quant) {
    // declaração de variáveis
    int i;

    // pulando linha
    printf("\n\n");

    // percorrendo o vetor
    for (i = 0; i < quant; i++) {
        printf("Disciplina %s\n", vet[i].disci);
        printf("Status: %s\n", vet[i].status);  // Removido "\n" após "Status:"
        printf("Qnt %d\n\n", vet[i].qnt);
    }
}
