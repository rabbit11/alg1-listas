#include <stdio.h>

int main(){

	int x1, x2, x3, x4, x5, x6, x7, x8, x9;
	
	scanf("%d %d %d %d %d %d %d %d %d", &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8, &x9);

	if((x1 == 1 && x2 == 1 && x3 == 1) || (x1 == 0 && x2 == 0 && x3 == 0)){
		printf("Há um vencedor\n");
	}else if((x4 == 1 && x5 == 1 && x6 == 1) || (x4 == 0 && x5 == 0 && x6 == 0)){
		printf("Há um vencedor\n");
	}else if((x7 == 1 && x8 == 1 && x9 == 1) || (x7 == 0 && x8 == 0 && x9 == 0)){
		printf("Há um vencedor\n");
	}else if((x1 == 1 && x4 == 1 && x7 == 1) || (x1 == 0 && x4 == 0 && x7 == 0)){
		printf("Há um vencedor\n");
	}else if((x2 == 1 && x5 == 1 && x8 == 1) || (x2 == 0 && x5 == 0 && x8 == 0)){
		printf("Há um vencedor\n");
	}else if((x3 == 1 && x6 == 1 && x9 == 1) || (x3 == 0 && x6 == 0 && x9 == 0)){
		printf("Há um vencedor\n");
	}else if((x1 == 1 && x5 == 1 && x9 == 1) || (x1 == 0 && x5 == 0 && x9 == 0)){
		printf("Há um vencedor\n");
	}else if((x3 == 1 && x5 == 1 && x7 == 1) || (x3 == 0 && x5 == 0 && x7 == 0)){
		printf("Há um vencedor\n");
	}else{
		printf("Não há um vencedor\n");
	}return 0;
}