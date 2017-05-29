#include <stdio.h>

int main(){
	
	int n1;

	scanf("%d", &n1);

	if(n1 % 2 == 0){
		printf("O número é par ,");
	}else{
		printf("O número é impar ,");
	}if(n1 > 0){
		printf("positivo\n");
	}else if(n1 < 0){
		printf("negativo\n");
	}else{
		printf("zero\n");
	}
}