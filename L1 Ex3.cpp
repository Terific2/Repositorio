#include <stdio.h>

//Problema: Crie um algoritmo que calcule a tens�o
// em um resistor espec�fico dentro de um circuito 
//divisor de tens�o composto por dois resistores em s�rie.

int main ()	{
	float tensao,tensao1, r1, r2, numero;
	printf("||DIVISOR DE TENSAO||");
	
	printf("Digite o valor da tens�o de entrada. \n");
	scanf("%f", &tensao);
	
	printf("Agora digite o valor dos resistores 1 e 2, respectivamente. \n");
	scanf("%f", &r1);
	scanf("%f", &r2);
	
	printf("Digite o numero do resistor na qual voce quer descobrir a queda de tens�o.");
	scanf("%f", &numero);
	
	if (numero=1){
	 	tensao1=(r2/(r1+r2))*tensao;
	 	printf("O valor da tens�o sobre R1 e %f \n", tensao1);
	 }else{
	 	tensao1=(r1/(r1+r2))*tensao;
	 	printf("O valor da tens�o sobre R2 e %f \n", tensao1);
	 }

	return 0;
}
