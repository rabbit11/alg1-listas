#include <stdio.h>

int estoque[1000101];

int main(){

	int consultasn, i, tacos = 0, j;

	scanf("%d", &consultasn);

	for(i = 0; i < consultasn; i++){
		scanf("%d", &j);
		if(estoque[j] > 0){
			estoque[j] = estoque[j] - 1;
		}else{
			estoque[j] = estoque[j] + 1;
			tacos = tacos + 2;
		}
	}printf("%d\n", tacos);
	return 0;
}
