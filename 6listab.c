#include <stdio.h>

int main(){
	
	int a1, b1, c1, remainder, i;

	for(i = 100; i < 999; i++){

		a1 = i / 100;
		remainder = i % 100;
		b1 = remainder / 10;
		c1 = remainder % 10;

		if((a1 * a1 * a1) + (b1 * b1 *b1) + (c1 * c1 * c1) == i){

			printf("%d\n", i);
		}
	}return 0;
}