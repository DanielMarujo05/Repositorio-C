//Construir um programa que permita ao usu�rio
//calcular a �rea de uma figura geom�trica. Para
//isto, o usu�rio dever� escolher a figura desejada
//([C]�rculo, [R]et�ngulo, [Q]uadrado ou
//[T]ri�ngulo) e fornecer as informa��es
//necess�rias para que a �rea desta figura possa
//ser calculada.
//Notas:
//1. F�rmulas para o c�lculo das �reas:
//a. Ac�rculo = p.raio2

//, onde p = 3.14159;

//b. Aret�ngulo = base.altura;
//c. Aquadrado = lado2
//;
//d. Atri�ngulo = (base.altura)/2.
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
