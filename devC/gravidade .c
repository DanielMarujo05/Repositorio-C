#include<stdio.h>

void main(){


	float Pesop,Pesot;
	int numero;

	printf ("insira seu peso (kg): ");
	scanf ("%f", &Pesot);
   	
	printf ("insira um numero de 1 a 6: ");
	scanf ("%d", &numero);
	
   	if (numero == 1){
		Pesop = (Pesot/10) * 0.37 ;
		printf ("seu peso em mercurio e %.2f" , Pesop) ;
	}
  	else{
  		if (numero == 2){
  			Pesop = (Pesot/10) * 0.88;
  			printf ("seu peso em venus e %.2f" , Pesop);
		}
	else{
		
		
			if (numero == 3){
				Pesop = (Pesot/10) * 0.38;
				printf ("seu peso em marte e %.2f" , Pesop);
				}
	else{
	
		
				if (numero == 4){
					Pesop = (Pesot/10) * 2.64;
					printf ("seu peso em jupiter e %.2f" , Pesop);
		 			}
	else{
		
		
					if (numero == 5){
						Pesop = (Pesot/10) * 1.15;
						printf ("seu peso em saturno e %.2f", Pesop);
						}
		
		
						if (numero == 6){
							Pesop = (Pesot/10) * 1.17;
							printf ("seu peso em urano e %.2f", Pesop);
		  					}
		 				}
	    			}	
	  			}
			}
		}
