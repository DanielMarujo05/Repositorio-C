
#include <stdio.h>
int main(){


int dia,mes,ano,dia2,mes2,ano2;



printf ("\ninsira a primeira data (DD/MM/YY) : ");
scanf ("%d/%d/%d" , &dia, &mes ,&ano);

printf ("\ninsira a segunda data (DD/MM/YY) : ");
scanf ("%d/%d/%d" , &dia2 ,&mes2 ,&ano2);

	if (ano>ano2){
	printf ("\na primeira data e mais recente");	
	}
  	else{ 
  		if (ano2>ano){
  			printf ("\na segunda data e mais recente");
		}
		
		else{
			if (mes>mes2){
				printf ("\na primeira data e mais recente");	
				}
				
			else{
				if (mes2>mes){
				printf ("\na segunda data e mais recente");
				}
				
				else{
					if (dia>dia2){
					printf ("\na primeira data e mais recente");
					}
					
					else{
						if (dia2>dia){
						printf ("a segunda data e mais recente");
						}
				
					}
				}
				
			}
		}		
	}
}
