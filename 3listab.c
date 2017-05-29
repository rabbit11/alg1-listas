#include <stdio.h>

int main(){
	
	int x, y, result, i;
	scanf("%d %d", &x, &y);

	result = x;
	for(i = 1; i < y; i++){
	result = result * x;

	}if(y == 0){
		result = 1;
	}printf("%d\n", result);

	return 0;
}