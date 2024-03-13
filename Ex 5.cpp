#include <stdio.h>

//Desenvolva um algoritmo que determine o tempo 
//necessário para que um capacitor carregue até 
//63% de sua capacidade máxima, dados a resistência 
//e a capacitância no circuito (Uso da fórmula de constante de tempo t=R·C).

int main ()	{
	float r, c, tempo;
	printf ("||Calcularemos o tempo necessário para que o capacitor atinja 63% de sua capacidade max.||");
	printf("Digite o valor da resistencia equivalente do circuito. \n");
	scanf("%f", &r);
	
	printf("Digite o valor da capacitancia equivalente do circuito. \n");
	scanf("%f", &c);
	
	tempo=c*r;
	printf("O tempo para que o capacitor atinja 63 por cento de sua capacidade total e %f segundos. ", tempo);

	return 0;
}

