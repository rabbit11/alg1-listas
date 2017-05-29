#include <stdio.h>


int main(){

	float n1, n2, result;
	char oper;
	result = 0;
	scanf("%f\n", &n1);
	scanf("%c", &oper);
	scanf("%f", &n2);

	switch (oper){
		case '+':
			result = (n1 + n2);
			break;
		case '-':
			result = (n1 - n2);
			break;
		case '*':
			result = (n1 * n2);
			break;
		case '/':
			result = (n1 / n2);
			break;  
		}
	printf("%f\n", result);
}