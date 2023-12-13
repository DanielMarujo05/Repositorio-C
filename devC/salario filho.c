//A prefeitura de uma cidade
//fez uma pesquisa com 300 de seus
//habitantes, coletando dados sobre o
//salário e número de filhos. A prefeitura
//deseja saber:
//a) média do salário da população;
//b) média do número de filhos;
//c) maior salário;
//d) percentual de pessoas com salário até 1000R$

#include <stdio.h>
void main(){
	
	float salario,mediaSalario=0,totalSalario=0,mediaFilhos=0,maiorSalario=0,PorcentMenor1000=0;
	int i,filhos,qnt,totalFilho=0,salarioBaixo=1;
	
	printf("\ninsira quantas pessoas foram entrevistadas: ");
	scanf("%d", &qnt);
	
	for(i=1;i<=qnt;i++){
		
		printf("\ninsira o salario: ");
		scanf("%f", &salario);
		
		printf("insira o numero de filhos: ");
		scanf("%d", &filhos);
		
		//achando o total de filhos e salarios
		totalSalario+=salario;
		totalFilho+=filhos;
		
		//maior salario
		if(maiorSalario<salario){
			maiorSalario=salario;
		
		//salarios menores que 1000
		if(salario<1000){
			salarioBaixo++;
		}
		}
	}
	//calculando media de salario
	mediaSalario = (totalSalario/qnt);
	printf("\na media dos salarios e %.2f", mediaSalario);
	//calculando media de filhos
	mediaFilhos = ((float)totalFilho/qnt);
	printf("\na media de filhos e %.2f", mediaFilhos);
	//calculando maior salario
	printf("\no maior salario e %.2f", maiorSalario);
	//porcentagem salario<1000
	PorcentMenor1000 = (float)salarioBaixo/qnt*100;
	printf("\na porcentagem de pessoas com salario abaixo de 1000 reais e: %.2f %% ", PorcentMenor1000);
	
	
}
