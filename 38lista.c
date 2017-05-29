#include <stdio.h>

int main(){
	
	int produtos;
	float comi, comit;

	scanf("%d", &produtos);

	if(produtos >= 250 && produtos < 500){
		comi = 1.5;
		comit = produtos * 1.5;
	}else if(produtos >= 500){
		comi = 2;
		comit = produtos * 2;
	}else{
		comi = 1;
		comit = produtos;
	}printf("Comissao func. %f\n", comit);

	return 0;
}