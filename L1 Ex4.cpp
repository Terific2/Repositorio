#include <stdio.h>

//Problema: Crie um algoritmo que calcule a tens�o
// em um resistor espec�fico dentro de um circuito 
//divisor de tens�o composto por dois resistores em s�rie.

int main ()	{
	float tensao,tensao1, r1, r2;
	int numero;
	printf("||DIVISOR DE TENSAO||");
	
	printf("Digite o valor da tens�o de entrada. \n");
	scanf("%f", &tensao);
	
	printf("Agora digite o valor dos resistores 1 e 2, respectivamente. \n");
	scanf("%f", &r1);
	scanf("%f", &r2);
	
	printf("Digite o numero do resistor na qual voce quer descobrir a queda de tens�o.");
	scanf("%d", &numero);
	
	switch (numero){
		case 1:
			tensao1=r2/(r1+r2)*tensao;
			printf("O valor da tensao sobre R1 e %f. \n", tensao1);
			break;

		case 2:
			tensao1=r1/(r1+r2)*tensao;
			printf("O valor da tensao sobre R2 e %f. \n", tensao1);
			break;
			
		default: 
			printf("Resistor invalido. \n");
}
	
	
	return 0;
}

