#include <stdio.h>

int main(){
	
	float reais, dolares;
	reais = 0;
	printf("Valor em dólares ");
	scanf("%f", &dolares);

	reais = (dolares * 3.45);

	printf("Valor em reais %f\n", reais);

	return 0;
}