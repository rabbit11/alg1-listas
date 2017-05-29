#include <stdio.h>

int main (){

	int bandejas, latas, copos, n, quebrados;

	printf("Insira o número de bandejas \n", bandejas);
	scanf("%d", &bandejas);
	quebrados == 0;

	for(n = 0; n < bandejas; n++){
	printf("Insira o número de latas \n", latas);
	scanf("%d", &latas);
	printf("Insira o número de copos \n", copos);
	scanf("%d", &copos);



	if(latas > copos){
		quebrados = copos + quebrados;
	}

	}

	if(quebrados != 0){
		printf("O número de copos quebrados foi de: %d \n", quebrados);
	}

	else{
		printf("O número de copos quebrados foi de: 0 \n");
	}

	

	return 0;
}
	
