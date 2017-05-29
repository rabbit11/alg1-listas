#include <stdio.h>

int main(){
	
	int dim, i, j;

	scanf("%d", &dim);

	for(i = dim; i <= 2 * dim; i--){
		for(j = 0; j < dim; j++){
			printf("%d\n", j);
		}printf("%d\n", i);
	}
}