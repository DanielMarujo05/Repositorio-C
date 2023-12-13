/*Foi feita uma pesquisa entre os habitantes de uma região
e coletados os dados de altura e gênero das pessoas. Faça uma função que leia as
informações de 4 pessoas e retorne:
- a maior e a menor alturas encontradas;
- a média de altura das mulheres;
- a média de altura da população;
- o percentual de homens na população*/

#include <stdio.h>

void pesquisa(float *maior,float *menor,float *mediaF,float *mediaAlt,float *percentM){
	
	int i,genero,homens=0,mulheres=0;
	float altura,alturaFem=0,alturaTotal=0;

	*maior=0;
	*menor=99999999;

	for(i=1;i<=4;i++){
	printf("\ninsira o genero (1-Masculino) (2-Feminino): ");
	scanf("%d",&genero);
	
	printf("insira a altura: ");
	scanf("%f",&altura);
	
	alturaTotal+=altura;
	
	if(altura>*maior){
	*maior=altura;
	}
	
	if(altura<*menor){
		*menor=altura;
	}
	
	if(genero==2){
		alturaFem+=altura;
		mulheres++;
	}
	
	if(genero==1){
		homens++;
	}
	}
	
	*mediaF=((float)alturaFem/mulheres);
	*mediaAlt=((float)alturaTotal/4);
	*percentM=((float)homens/4*100);
	
		
}

void main(){

	float big,small,Fmed,AltMedia,Mpercent;

	pesquisa(&big,&small,&Fmed,&AltMedia,&Mpercent);
	
	printf("\na maior altura encontrada e: %.2f ",big);
	printf("\na menor altura encontrada e: %.2f ",small);
	printf("\na media de altura feminina e: %.2f ",Fmed);
	printf("\na media de altura da populacao e: %.2f ",AltMedia);
	printf("\na porcentagem de homens na populacao e: %.2f%% ",Mpercent);
	
	
}
	
	
