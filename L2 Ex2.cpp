#include <stdio.h>

//Calcule a resistência equivalente de dois resistores, tanto em série quanto em paralelo, e informe os resultados.

int main(){
	
	float r1, r2, req1, req2;
	
	printf("||CALCULADOR DE RESISTENCIA.||\n");
	printf("Escreva o valor de dois resistores, R1 e R2, respectivamente.\n");
	scanf("%f", &r1);
	scanf("%f", &r2);
	
	req1=r1+r2;
	req2=(r1*r2)/(r1+r2);
	
	printf("O valor de equivalencia serie dos dois resistores e %f Ohms.\n", req1);
	printf("O valor de equivalencia paralela dos dois resistores e %f Ohms.\n", req2);
		
	return 0;
}
