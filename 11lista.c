#include <stdio.h>

int main(){
	
	int a1, a2, a3;

	scanf("%d %d %d", &a1, &a2, &a3);

	if(a1 == a2 && a1 == a3 && a2 == a3){
		printf ("O triângulo é equilátero\n");
	}else if(a1 != a2 && a2 != a3 && a1 != a3){
		printf ("O triângulo é escaleno\n");
	}else{
		printf ("O triângulo é isósceles\n");
	}
}