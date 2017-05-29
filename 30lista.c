#include <stdio.h>

int main(){
	
	int n1, centena, dezena, unidade, resto;

	scanf("%d", &n1);

	if (0 <= n1 <= 1000){
		centena = (n1 / 100);
		resto = (n1 % 100);
		dezena = (resto / 10);
		unidade = (resto % 10);

		if(centena == unidade){
			printf("O número é palíndromo\n");
		}else{
			printf("O número não é palíndromo\n");
		}
	}
	return 0;
}