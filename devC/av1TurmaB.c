#include <stdio.h>

void main(){
	
	int acumulador,nAux,num;
	char opera;
	
	printf("\ninsira um valor inicial: ");
	scanf("%d",&nAux);
	
	//numero de 1 alg
	if(nAux<10 && nAux>-10){
		acumulador=nAux;
	}else{
		printf("o numero deve ser de 1 algarismo!!");
		return 0;
	}

		
	while(opera!='#'){
		
		fflush(stdin);
		printf("insira um operando: ");
		scanf("%c",&opera);
		
		if(opera=='#'){
			break;
		}
		
		printf("insira um numero: ");
		scanf("%d",&num);
		
		if(num<10 && num>-10){
			
			if(opera=='+'){
				acumulador+=num;
			}else{
				if(opera=='-'){
					acumulador-=num;
				}else{
					if(opera=='*'){
						acumulador*=num;
					}else{
						if(opera=='/'){
							acumulador/=num;
						}
					}
				}
			}
		}else{
			printf("o numero deve ser de 1 algarismo!!");
			return 0;
		}
	}
	
	printf("o valor final do acumulador e: %d",acumulador);
	
}
