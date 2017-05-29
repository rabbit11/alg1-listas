#include <stdio.h>

int main(){
	
	float custo, venda, lucro;
		venda = 0;
	scanf("%f", &custo);

	if(custo < 20){
		lucro = 0.45 * custo;
	}else{
		lucro = 0.3 * custo;
	}venda = lucro + custo;
	printf("%f\n", venda);
return 0;
}