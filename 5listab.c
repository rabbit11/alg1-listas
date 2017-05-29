#include <stdio.h>

int main(){
	
	int n1, i, div;
	div = 0;
	scanf("%d", &n1);

	for(i = 1; i <= n1; i++){

		if(n1 % i == 0){
			div++;
		}
	}if(div == 2){
		printf("O número %d é primo\n", n1);
	}else{
		printf("O número %d não é primo\n", n1);
	}
	return 0;
}