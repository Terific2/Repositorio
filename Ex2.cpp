#include <stdio.h>

//Problema: Desenvolva um algoritmo que calcule a corrente elétrica 
//que passa por um resistor, dada a tensão aplicada e a 
//resistência (Uso da Lei de Ohm: I=V/R)

int main ()	{
	float tensao, resistencia, corrente;
	printf("||CALCULADOR DE CORRENTE||\n");
	printf("Digite o valore da tensao sobre o resistor.");
	scanf("%f.2", &tensao);
	
	printf("Digite o valore da resistencia do resistor.");
	scanf("%f.2", &resistencia);
	
	corrente=tensao/resistencia;
	
	printf("O valor de corrente e: %f", corrente);

	return 0;
}
