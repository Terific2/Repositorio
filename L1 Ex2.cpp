#include <stdio.h>

//Problema: Escreva um algoritmo para calcular a pot�ncia 
//el�trica dissipada em um resistor, dados a corrente e a 
//resist�ncia

int main ()	{
	float corrente, resistencia, potencia;
	printf("||CALCULADOR DE POTENCIA||");
	printf("Digite o valor de resistencia.");
	scanf("%f", &resistencia);
	
	printf("Digite o valor de corrente.");
	scanf("%f", &corrente);
	
	potencia=resistencia*(corrente*corrente);
	printf("O valor da Potencia e: %f \n", potencia);

	return 0;
}
