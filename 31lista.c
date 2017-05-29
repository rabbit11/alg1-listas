#include <stdio.h>

int main(){
	
	int base, altura;
	float area;

	scanf("%d %d", &base, &altura);

	area = (base * altura) / 2;

	printf("%f\n", area);

	return 0;
}