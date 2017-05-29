#include <stdio.h>

int main(){

int a, n, f, contador, e ;

f = 0;
e = 0;

printf("Insira a área de abertura do telescópio: \n", a);
scanf("%d", &a);
printf("Insira o número de estrelas a ser estudadas: \n", n);
scanf("%d", &n);

//Como fazer com que o programa conte as casas de um número e com isso mude o resultado de outro 

for(contador = 0; contador < n; contador++){
	printf("Insira os fótons da estrela: \n", f);
	scanf("%d", &f);

	if(f >= 4000){
		e = e++;

		}
	}
printf("Numero de estrelas percebidas: %d \n", e);

return 0;
}
