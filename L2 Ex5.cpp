#include <stdio.h>
#include <math.h>

//Calcule a quantidade de energia el�trica produzida 
//por um gerador e�lico, dados a efici�ncia do conversor, 
//a �rea da se��o transversal do vento interceptada pela 
//turbina e a velocidade do vento.


int main (){
	
	float densi, area, v, n, pot;
	
	printf("||Conversor de energia eolica em eletrica||");
	printf("Digite o valor de densidade do ar. \n");
	scanf("%f", &densi);
	
	printf("Digite o valor da area de se��o transvers�o do vento interceptada  pela turbina. \n");
	scanf("%f", &area);
	
	printf("Digite o valor da velocidade do vento. \n");
	scanf("%f", &v);
	
	printf("Digite o valor de eficiencia do conversor. \n");
	scanf("%f", &n);
	
	pot=(1/2)*densi*area*v*v*v*n;
	
	printf("A energia eletrica produzida pelo gerador eolico e %f W. ", &pot);

	return 0;
}
