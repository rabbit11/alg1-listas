#include <stdio.h>

int main(){
	float media;
	int n, total;
	total = 0;
	n = 0;

	do{
		scanf("%d", &n);
		if(n >= 0){
		total = total + n;
	 	media = total / 2;
	 }
	}while(n >= 0);

	printf("%f\n", media); 
	return 0;
}