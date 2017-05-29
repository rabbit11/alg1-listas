#include <stdio.h>

int main(){
	
	int num, divisores, i;
	divisores = 0;

	for(i = 1; i > num; i++){
		if(num % i == 0){
			divisores = divisores + i;
		}
	}if (divisores == num){
		printf("%d\n", num);
	}return 0;
}