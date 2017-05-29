#include <stdio.h>


int main(){
	
	int n1, n2, inter, i, n3;
	n3 = 1;

	scanf("%d %d", &n1, &n2);

	for(i = n1; i < n2 - 1; i++){
		n3++;
		printf("%d\n", n3);
	}return 0;

}