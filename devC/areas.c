//Construir um programa que permita ao usuário
//calcular a área de uma figura geométrica. Para
//isto, o usuário deverá escolher a figura desejada
//([C]írculo, [R]etângulo, [Q]uadrado ou
//[T]riângulo) e fornecer as informações
//necessárias para que a área desta figura possa
//ser calculada.
//Notas:
//1. Fórmulas para o cálculo das áreas:
//a. Acírculo = p.raio2

//, onde p = 3.14159;

//b. Aretângulo = base.altura;
//c. Aquadrado = lado2
//;
//d. Atriângulo = (base.altura)/2.
#include <stdio.h>
void main(){
float area,base,altura,lado,raio;
int numero;

	printf("\ndigite 1 para area do circulo");
	printf("\ndigite 2 para area do retangulo");
	printf("\ndigite 3 para area do quadrado");
	printf("\ndigite 4 para area do triangulo\n");
	
	scanf("%d", &numero);
	
	printf (" para o circulo informe o raio ");
	scanf ("%f", &raio);
	printf (" para o retangulo indique a base e altura ");
	scanf ("%f\t\t%f", &base, &altura);
	printf (" para o quadrado indique o lado ");
	scanf ("%f", &lado);
	printf (" para o triangulo indique base e altura ");
	scanf ("%f\t\t%f", &base, &altura);
	
	if (numero=1){
		area = 3.14159 * (raio * raio);
		printf ("a area do circulo e: %.6f", area);
	}
    	else{
    		if (numero=2){
    		area = base * altura;
    		printf ("a area do retangulo e: %.6f", area);
			}
				else{
					if (numero=3){
					area= lado * lado;
					printf ("a area do quadrado e: %.6f", area);
					}
						else{
							if (numero=4){
							area= (base * altura) / 2;
							printf ("a area do seu triangulo e %.6f", area);	
							}
						}
				}
		}
		
}
