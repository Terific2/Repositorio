#include <stdio.h>

//Problema: Escreva um algoritmo para calcular a potência 
//elétrica dissipada em um resistor, dados a corrente e a 
//resistência

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
