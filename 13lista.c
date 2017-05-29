#include <stdio.h>

int main(){
	
	float p1, p2, media;

	scanf("%f %f", &p1, &p2);
	media = (p1 + 2 * p2) / 2;

	if(media >= 6){
		printf("O aluno está aprovado\n");
	}else{
		printf("O aluno está reprovado\n");
	}
	return 0;
}