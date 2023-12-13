/*Uma pesquisa foi feita coletando informações
(idade, altura e peso) de um grupo de pessoas.
Pede-se a implementação de uma função que proceda
com a leitura de tais informações
(até que o usuário opte por concluir a entrada de dados) e retorne:
- A quantidade de pessoas com idade superior a 50 anos;
- A média de altura das pessoas com mais de 80 kg;
- O maior peso dentre as pessoas acima de 1.65 m de altura e com idade inferior a
30 anos.*/
#include <stdio.h>

void pesquisa(int *qnt,float *mediaAlt,float *maior){
	
	int idade,i,maisPeso=0;
	float altura,peso,alturaMaior=0;
	*maior=0;
	
	do{
		printf("\ninsira a idade: ");
		scanf("%d",&idade);
		
		printf("insira a altura: ");
		scanf("%f",&altura);
		
		printf("insira o peso: ");
		scanf("%f",&peso);
		
		if(idade>50){
			(*qnt)++;
		}
		if(peso>80){
			alturaMaior+=altura;
			maisPeso++;
		}
		if(altura>1.65 && idade<30){
			if(peso>*maior){
				*maior=peso;
			}
		}
		
		printf("\ndeseja continuar (0-parar)?? ");
		scanf("%d",&i);
		
	}while(i!=0);
	
	*mediaAlt=((float)alturaMaior/maisPeso);
}

void main(){
	
	int velho;
	float AltaoNovo,MediaPesado;
	
	pesquisa(&velho,&MediaPesado,&AltaoNovo);
	
	printf("\na quantidade de pessoas entrevistadas com idade superior a 50 anos e: %d ",velho);
	printf("\nA media de altura das pessoas com mais de 80 kg e: %.2f ",MediaPesado);
	printf("\nO maior peso dentre as pessoas acima de 1.65 m de altura e com idade inferior a 30 anos e: %.2f ",AltaoNovo);
}
