#include <stdio.h>

int main(){
	
	int n, i;
	n = 0;
	for(i = 1; i < 100; i++){
		n++;
		if(n % 2 == 0){
			printf("%d\n", n);
		}
	}return 0;
}