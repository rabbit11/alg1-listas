#include <stdio.h>

struct data{
	int dia;
	int mes;
	int ano;
};

int main(){
	struct data nasci;
	struct data atual;
	int score, hoje;
	hoje = 0;

	scanf("%d %d %d", &nasci.dia, &nasci.mes, &nasci.ano);
	scanf("%d %d %d", &atual.dia, &atual.mes, &atual.ano);

	if(atual.ano > nasci.ano){
		if(atual.mes > nasci.mes){
			hoje = atual.ano - nasci.ano;
		}else if(atual.mes == nasci.mes){
			if(atual.dia >= nasci.dia){
				hoje = atual.ano - nasci.ano;
			}else{
				hoje = (atual.ano - nasci.ano) - 1;
			}
		}
		else{
			hoje = (atual.ano - nasci.ano) - 1;
		}
	}printf("%d\n", hoje);

return 0;
}
		
	

