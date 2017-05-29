#include <stdio.h>

int main(){
	
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if((a * a) == (b * b + c * c) || (b * b) == (a * a + c * c) || (c * c) == (a * a + b * b)){
		printf("O triângulo é retângulo\n");
	}else if(a > b && a > c){
		if((a * a) < (b * b + c * c)){
			printf("O triângulo é acutângulo\n");
		}
	}else if(b > a && b > c){
		if((b * b) < (a * a + c * c)){
			printf("O triângulo é acutângulo");
		}
	}else if(c > a && c > b){
		if((c * c) < (a * a + b * b)){
			printf("O triângulo é acutângulo");
		}
	}
		if((a * a) < (b * b + c * c) || (b * b) < (a * a + c * c) ||(c * c) < (a * a + b * b)){
		printf("O triângulo é acutângulo\n");
	}else{
		printf("O triângulo é obtusângulo\n");
	}
}