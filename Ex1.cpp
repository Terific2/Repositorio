#include <stdio.h>

//Problema: Dado um circuito com tr�s resistores em s�rie, 
//escreva um algoritmo para calcular a resist�ncia total. 
//O usu�rio deve fornecer os valores dos tr�s resistores.

int main ()	{
	float r1, r2, r3, req;
	printf("Escreva o valor da resistencia 1. \n");
	scanf("%f.2", &r1);
	
	printf("Escreva o valor da resistencia 2. \n");
	scanf("%f.2", &r2);
	
	printf("Escreva o valor da resistencia 3. \n");
	scanf("%f.2", &r3);	
	
	req=r1+r2+r3;
	printf("O valor da resitencia equivalente e: %f Ohms \n", req);
	
	return 0;
}
