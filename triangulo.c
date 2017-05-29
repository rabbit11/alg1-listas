#include <stdio.h>

int main () {

	int a, b, c;
	
	scanf("%d" "%d" "%d", &a, &b, &c);
	if( a > 0 && b > 0 && c > 0 && 
	a < b + c && b < c + a && c < a + b){
		if( a == b && b == c) {
			printf("a\n");
		}
		else if( a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
			printf("r\n");
		}
		else {
			printf("o\n");
		}
	
	}else {
		printf("n\n");
	}
return 0;
}
