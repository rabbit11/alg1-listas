#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

	int l1, l2, l3;

	scanf("%d %d %d", &l1, &l2, &l3);

	if(l1 > abs(l2 - l3) && l1 < (l2 + l3) || l2 > abs(l1 - l3) && l2 < (l1 + l3) || l3 > abs(l1 - l2)){
		printf("É possível formar um triângulo\n");
	}else{
		printf("Não é possível formar um triângulo\n");
	}
}