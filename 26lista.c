#include <stdio.h>

int main(){
	
	int n1, n2, n3, n4, n5;

	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

	if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5){
		printf("O menor %d\n", n1);
	}else if(n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){
		printf("O maior %d\n", n1);
	}if(n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5){
		printf("O menor %d\n", n2);
	}else if(n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5){
		printf("O maior %d\n", n2);
	}if(n3 < n2 && n3 < n1 && n3 < n4 && n3 < n5){
		printf("O menor %d\n", n3);
	}else if(n3 > n2 && n3 > n1 && n3 > n4 && n3 > n5){
		printf("O maior %d\n", n3);
	}if(n4 < n2 && n4 < n3 && n4 < n1 && n4 < n5){
		printf("O menor %d\n", n4);
	}else if(n4 > n2 && n4 > n3 && n4 > n1 && n4 > n5){
		printf("O maior %d\n", n4);
	}if(n5 < n2 && n5 < n3 && n5 < n4 && n5 < n1){
		printf("O menor %d\n", n5);
	}else if(n5 > n2 && n5 > n3 && n5 > n4 && n5 > n1){
		printf("O maior %d\n", n5);
	}
	return 0;
}