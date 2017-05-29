#include <stdio.h>

int main (){
	
	int n1;

	scanf("%d", &n1);

	if(n1 % 3 == 0){
		printf("O número é divisível por 3\n");
	}else{
		printf("O número não é divisível por 3\n");
	}
}