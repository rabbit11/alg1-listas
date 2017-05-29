#include <stdio.h>

int main(){
	
	int ano;

	scanf("%d", &ano);

	if(ano % 4 == 0){
		if(ano % 100 != 0 || ano % 400 == 0){
			printf("O ano é bissexto\n");
		}
	}else{
		printf("O ano não é bissexto\n");
	}
	return 0;
}