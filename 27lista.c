#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n1, n2, dist;

	scanf("%d %d", &n1, &n2);

	dist = abs(n1 - n2);

	printf("%d\n", dist);

	return 0;
}