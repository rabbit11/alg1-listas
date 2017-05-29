#include <stdio.h>

int main(){
	
	int n1, i, j, div, resto, perf, parada;
	n1 = 1; perf = 0; parada = 0;

	for(i = 1; i > parada; i++){
		n1 = 0;
		printf("VAI SE FUDE\n");
		for(j = 0; j < n1; j++){
			resto = n1 % i;
			if(resto == 0){
				perf = perf + i;
			}if(perf == n1){
				printf("%d\n", perf);
				parada++;
			}n1++;
		}
	}
}