/*Uma pesquisa foi feita
coletando informações (idade, altura e
peso) de um grupo de pessoas.
Pede-se a implementação de um programa
que proceda com a leitura de tais
informações (até que o usuário opte por
concluir a entrada de dados) e calcule:
- A quantidade de pessoas com idade
superior a 50 anos;
- A média de altura das pessoas com mais de
80 kg;
- O maior peso dentre as pessoas acima de
1.65 m de altura e com idade inferior a 30
anos.*/

#include <stdio.h>
void main(){
	
	char desejo;
	int idade,peso,i,idadeMaior=0,pesoMaior=0,pesoGrande=0;
	float altura,totalAltura=0,mediaAlturaMaior;
	
	i=0;
	do{	
		printf("\ninsira a idade: ");
		scanf("%d", &idade);
		printf("\ninsira a altura (m): ");
		scanf("%f", &altura);
		printf("\ninsira o peso (kg): ");
		scanf("%d", &peso);
		printf("\ndeseja continuar? ");
		printf("\n(S) para sim Ou qualquer tecla para parar: ");
		fflush(stdin);
		scanf("%c", &desejo);
		desejo = toupper(desejo);
		
		//verificando altura media peso
		if(peso>80){
		totalAltura+=altura;
		pesoMaior++;
		}
		
		//peso de altura > 1.65 e idade 30+
		if(altura>1.65 && idade<30 && pesoGrande<peso){
		pesoGrande=peso;	
		}
		
		//idade +50
		if(idade>50){
			idadeMaior++;
		}
		
		i++;
	}while(desejo=='S');
	
	mediaAlturaMaior = ((float)totalAltura/pesoMaior);
	
	printf("\no numero de pessoas com idade superior a 50 anos e: %d ", idadeMaior);
	printf("\na media de altura das pessoas com mais de 80 kilos e: %.2f (m)", mediaAlturaMaior);
	printf("\no maior peso entre pessoas que tenham 1.65+ de altura e tenham 30 ou menos anos e: %d kg.",pesoGrande);
}
