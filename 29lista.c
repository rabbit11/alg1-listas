#include <stdio.h>

int main(){
	
	int n1, centenas, dezenas, unidades, resto;

	if(0 <= n1 <= 1000){
		scanf("%d", &n1);

		centenas = (n1 / 100);
		resto = (n1 % 100);
		dezenas = (resto / 10);
		unidades = (resto % 10); 
		
	}printf("Centenas %d\n", centenas);
	printf("Dezenas %d\n", dezenas);
	printf("Unidades %d\n", unidades);

	return 0;
}