
#include <stdio.h>
#include <math.h>

int main() {

	int a, b, c, d, e, f, g, n, somaabc;

	scanf("%d", &n);
	scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
	
	somaabc = a + b + c - (d + e + f) - g;
	if ( somaabc > n){
		printf("S\n");
	}else {
		printf("N\n");
	}
	 
	return 0;
}

