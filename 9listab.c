#include <stdio.h>

int main(){
	
	float recebido, compra, troco, resto;
	int nota100, nota50, nota20, nota10, nota5, 
	moeda5, moeda10, moeda25, moeda50, moeda1;

	scanf("%f %f", &recebido, & compra);

	troco = recebido - compra;

	if(troco >= 100){
		nota100 = troco / 100;
		troco = troco % 100;
		if(troco >= 5){
			nota50 = troco;
			troco = troco % 50;
		}if(troco % 2 == 0){
			nota20 = troco;
		}if(troco >= 0 && troco < 5 && troco != 2);
			nota10 = troco;
	}else if(troco >= 50 && troco < 100){
		nota50 = troco / 50
		troco = troco % 50
		if(troco % 2 == 0){
			nota20 = troco;
		}if(troco >= 0 && troco < 5 && troco != 2);
			nota10 = troco;
		}
	}
}