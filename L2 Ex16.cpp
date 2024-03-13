#include <stdio.h>

int main (){
	
	char x;
	printf("Digite seu conceito. \n");
	scanf("%c", &x);
	
	switch(x){
		case'a':
			printf("Aprendizagem plena. Sem necessidade de recuperacao. \n");
			break;
		case'b':
			printf("Aprendizagem parcialmente plena. Recuperacao opcional. \n");
			break;
		case'c':
			printf("Aprendizagem suficiente. Necessita fazer recuperacao. \n");
			break;
		case'd':
			printf("Aprendizagem insuficiente. Necessidade fazer recuperacao. \n");
			break;
		
	default:
	printf("Erro de caractere.");
	
	return 0;
	}
}
