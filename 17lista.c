#include <stdio.h>

int main(){
	
	float peso, altura, ideal;
	char h, m, sexo;
		ideal = 0;

	scanf("%c", &sexo);
	scanf("%f %f", &peso, &altura);

	if(sexo == 'h'){
		ideal = ((peso * altura) - 58);
	}else{
		ideal = ((peso * altura) - 44.7);
	}printf("O peso ideal é %f\n", ideal);

return 0;
}