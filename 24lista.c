#include <stdio.h>


struct data{
	int dia;
	int mes;
	int ano;
};

int main(){
	
	struct data niver;
	struct data niver2;
	int v, v1;
	v = 0; v1 = 0;
	scanf("%d %d %d", &niver.dia, &niver.mes, &niver.ano);
	scanf("%d %d %d", &niver2.dia, &niver2.mes, &niver2.ano);

	if(niver.dia > niver2.dia && niver.mes == niver2.mes && niver.ano == niver2.ano){
		v = v + 1;
	}if(niver.mes > niver2.mes && niver.ano == niver2.ano){
		v = v + 1;
	}if(niver.ano > niver2.ano){
		v = v + 1;
	}if(niver.dia < niver2.dia && niver.mes == niver2.mes && niver.ano == niver2.ano){
		v1 = v1 + 1;
	}if(niver.mes < niver2.mes && niver.ano == niver2.ano){
		v1 = v1 + 1;
	}if(niver.ano < niver2.ano){
		v1 = v1 + 1;
	}if(v > v1){
		printf("Pessoa 1 é mais velha\n");
	}else if(v < v1){
		printf("Pessoa 2 é mais velha\n");
	}else{
		printf("Possuem mesma idade\n");
	}
	return 0;
}