#include <stdio.h>

int main ()
{
	float distancia, litros, consumo;
	printf("Distancia percorrida: ", distancia);
	scanf("%f", &distancia);
	printf("Quantidade de combustivel consumido: ",litros);
	scanf("%f", &litros);
	printf("Consumo medio em uma viagem: %f\n", distancia/litros);
	

	return 0;
}