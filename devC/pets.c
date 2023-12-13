/*Uma empresa de telefonia fez uma pesquisa com N
pessoas e cada uma dessas informou os seguintes
dados: se possui algum animal de estimação; caso
possuam, a quantidade; se preferem gato, cachorro
ou outro.
Implementar um programa que faça a leitura desses
dados e, ao final, exiba:
1. Considerando os entrevistados que possuem
pets, a média de animais de estimação desse
grupo;
2. Percentual de entrevistados que não possuem
pets;
3. Quantidade de entrevistados que preferem
gatos. 
*/

#include <stdio.h>
void main(){
	
	float mediaAnimal=0,percentNao=0;
	char possuir,animal;
	int qntPessoas,i,qntPossuemPets=0,semPossuirPets=0,qntPets,totalPets=0,cachorro=0,gato=0;
	
 	printf("com quantas pessoas foi realizada a pesquisa? ");
 	scanf("%d", &qntPessoas);
 	
 	for(i=0;i<qntPessoas;i++){
 		
 		printf("\na pessoa possui animal de estimacao? ");
 		printf("\n(S) para sim (N) para nao: ");
 		fflush(stdin);
 		scanf("%c", &possuir);
 		possuir = toupper(possuir);
 		
 		if(possuir=='S'){
 			qntPossuemPets++;
 			printf("\nquantos pets? ");
 			scanf("%d", &qntPets);
 			totalPets+=qntPets;
 			printf("\npreferencia por cachorro ou gato? ");
 			printf("(C) para cachorro e (G) para gato: ");
 			fflush(stdin);
 			scanf("%c", &animal);
 			animal = toupper(animal);
 			if(animal=='C'){
 				cachorro++;
			 }
			 else{
			 	if(animal=='G'){
			 		gato++;
				 }
			 }
		}
		 else{
		 	if(possuir=='N'){
			 semPossuirPets++;
			} 	 
		}	 	 
	}	
	
	mediaAnimal = (float)totalPets/qntPossuemPets;
	printf("\na media de animais entre as pessoas que possuem ao menos um animal e: %.2f \n", mediaAnimal);
	percentNao = ((float)semPossuirPets/qntPessoas)*100;
	printf("\n%.2f%% de entrevistados nao possuem pets\n", percentNao);
	printf("\n%d pessoas preferem Gato\n", gato);	
}
