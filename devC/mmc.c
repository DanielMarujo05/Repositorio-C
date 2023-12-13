/*Fazer uma fun��o que calcule o MMC (m�nimo
m�ltiplo comum) entre dois n�meros.*/



//importa��o de bibliotecas
#include <stdio.h>

//declara��o de prot�tipos
//Par�metro:	n1, n2
//Retorno:	mmc
int mmc (int n1, int n2);
int max (int n1, int n2);

//main
void main ()
{
	//declara��o de vari�veis
	int num1 = 100, num2 = 10;
	int resp = mmc (num1, num2);
	
	printf ("MMC (%d, %d) = %d\n", num1, num2, resp);
}

//implementa��o das fun��es
int mmc (int n1, int n2)
{
	//declara��o de vari�veis
	int i, maior;
	
	//definindo o maior valor
	maior = max (n1,n2);
	
	//verificando os "poss�veis m�ltiplos comuns"
	for (i=maior;i<=n1*n2;i++)
	{
		//verificando se 'i' � m�ltiplo dos dois n�meros
		if ((i%n1==0) && (i%n2==0))
		{
			return i;
		}
	}
}

int max (int n1, int n2)
{
	if(n1 > n2)
	{
		return n1;
	}
	else
	{
		return n2;
	}
	
	return (n1>n2)?n1:n2;	
}
