/*Fa�a um programa que exiba
na tela as tabuadas dos n�meros de 1 a 9,
como descrito a seguir:
1 � 0 = 0 2 � 0 = 0 ... 9 � 0 = 0
1 � 1 = 1 2 � 1 = 2 ... 9 � 1 = 9
1 � 2 = 2 2 � 2 = 4 ... 9 � 2 = 18
. . .
. . .
. . .
1 � 9 = 9 2 � 9 = 18 ... 9 � 9 = 81*/
#include<stdio.h>
void main(){
	
	int i,j,multiplicacao=j*i;
	
	for(i=0;i<=9;i++){
		for(j=1;j<=9;j++){
			multiplicacao=j*i;	
			printf(" %d x %d = %d ", i, j, multiplicacao);
		}
	printf("\n");
	}
	
	
}
