#include <stdio.h>

struct datas{
	int dia; 
	int mes; 
	int ano;
};

int main(){
	
	struct datas data;

	scanf("%d %d %d", &data.dia, &data.mes, &data.ano);

	if(data.dia > 31 || data.ano < 0 || data.mes > 12){
		printf("data invalida\n");
	}else if(data.mes == 2){
		if(data.dia >= 29){
			if(data.ano % 4 != 0 || data.ano % 100 == 0 || data.ano % 400 != 0){
				printf("data invalida\n");
			}
		}
	}else{
		printf("DATA VALIDA\n");
	}

	return 0;
}