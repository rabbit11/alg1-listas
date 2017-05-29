#include <stdio.h>

struct data{
	int dia;
	int mes;
	int ano;
};

int main(){
	
	struct data nasci;
	struct data atual;
	int viveu, mes, dia, ano;
	viveu = 0;
	scanf("%d %d %d", &nasci.dia, &nasci.mes, &nasci.ano);
	scanf("%d %d %d", &atual.dia, &atual.mes, &atual.ano);

	if(nasci.ano < atual.ano){
		ano = (atual.ano - nasci.ano) * 365;
	}mes = (atual.mes - nasci.mes) * 30;
	dia = (atual.dia - nasci.dia);
	viveu = viveu + dia + mes + ano;

	printf("%d\n", viveu);

	return 0;
}